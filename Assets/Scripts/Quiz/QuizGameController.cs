using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class QuizGameController : UtilComponent {

	public Force force;

	public CountDownComponent cdCarib;
	public CountDownComponent cdCountDown;

    [SerializeField] private Context context;
    [SerializeField] private GameObject objMeterCanvas;
    [SerializeField] private GameObject objAvatarCanvas;

    [SerializeField] private GazeButtonInput[] btnsFinish;

	public enum STATUS_ENUM : int{
		NON,
		PREPARE,
		COUNT,
		PLAY,
        FINISH
	}
	private STATUS_ENUM currentStatus = STATUS_ENUM.NON;

	[SerializeField] GameObject objPrepare;
	[SerializeField] GameObject objCount;

    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip[] audioClips;

    private int currentMusic = 0;


	// Use this for initialization
	void Start () {
        SetActive(this.objPrepare, false);
		SetActive(this.objCount, false);
        SetActive(this.objMeterCanvas, true);
        SetActive(this.objAvatarCanvas, false);

        this.currentStatus = STATUS_ENUM.PREPARE;
        SetActive(this.objPrepare, true);

        foreach(GazeButtonInput btn in btnsFinish){
            btn.m_OnClickGaze.AddListener(this.ClickedFinish);
        }
	}
	
	// Update is called once per frame
	void Update () {
		switch(this.currentStatus){
		case STATUS_ENUM.PREPARE:
			this.UpdatePrepare();
			break;
		case STATUS_ENUM.COUNT:
			this.UpdateCount();
			break;
		case STATUS_ENUM.PLAY:
			this.UpdatePlay();
			break;
        case STATUS_ENUM.FINISH:
            this.UpdateFinish();
            break;
		}
	}
		


	private void UpdatePrepare(){
	}

	public void ClickStartButton(){
		this.currentStatus = STATUS_ENUM.COUNT;
		SetActive(this.objPrepare, false);
		SetActive(this.objCount, true);
	}

	private void UpdateCount(){
		this.cdCountDown.Initialize(3f, ()=>{
			this.currentStatus = STATUS_ENUM.PLAY;
            this.force.isPlay = true;
            this.context.isStart = true;
            this.audioSource.PlayOneShot(this.audioClips[this.currentMusic]);
		},
		true);

	}

	private void UpdatePlay(){
        if(this.context.isFinish){
            this.currentStatus = STATUS_ENUM.FINISH;
            SetActive(this.objMeterCanvas, false);
            SetActive(this.objAvatarCanvas, true);
            this.force.isPlay = false;
        }
        if(this.audioSource.time == 0.0f && !this.audioSource.isPlaying){
            this.currentMusic++;
            this.audioSource.PlayOneShot(this.audioClips[this.currentMusic % this.audioClips.Length]);
        }
	}

    private void UpdateFinish()
    {

    }


    private void ClickedFinish()
    {
        Gamestrap.GSAppExampleControl.Instance.LoadScene(Gamestrap.ESceneNames.scene_title);

    }


}

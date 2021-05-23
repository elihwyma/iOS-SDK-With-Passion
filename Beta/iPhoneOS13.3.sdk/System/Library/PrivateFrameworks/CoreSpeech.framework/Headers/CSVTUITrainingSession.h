/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSVTUIKeywordDetector, NSMutableArray, NSString, NSTimer, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, SFSpeechRecognizer;

@protocol CSVTUIAudioSession, CSVTUITrainingSessionDelegate, OS_dispatch_queue;

@interface CSVTUITrainingSession : NSObject

{
    long long _status;
    long long _utteranceId;
    long long _sessionNumber;
    NSString *_locale;
    CSVTUIKeywordDetector *_keywordDetector;
    id <CSVTUIAudioSession> _audioSession;
    SFSpeechRecognizer *_speechRecognizer;
    SFSpeechAudioBufferRecognitionRequest *_speechRecognitionRequest;
    SFSpeechRecognitionTask *_speechRecognitionTask;
    NSTimer *_masterTimer;
    NSMutableArray *_pcmBufArray;
    _Bool _resultReported;
    _Bool _sessionProcess;
    _Bool _sessionSuspended;
    _Bool _ASRErrorOccured;
    id <CSVTUITrainingSessionDelegate> _sessionDelegate;
    CDUnknownBlockType _trainingCompletion;
    NSObject<OS_dispatch_queue> *_queue;
    long long _numRequiredTrailingSamples;
    long long _numTrailingSamples;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (id)initWithUtteranceId:(long long)arg1 sessionNumber:(long long)arg2 Locale:(id)arg3 audioSession:(id)arg4 keywordDetector:(id)arg5 speechRecognizer:(id)arg6 speechRecognitionRequest:(id)arg7 sessionDelegate:(id)arg8 sessionDispatchQueue:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)startTraining;
- (void)suspendTraining;
- (void)closeSessionWithStatus:(int)arg1 successfully:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)resumeTraining;
- (void)audioSessionDidStartRecording:(_Bool)arg1 error:(id)arg2;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (void)didDetectBeginOfSpeech;
- (void)didDetectEndOfSpeech:(long long)arg1;
- (_Bool)setupPhraseSpotter;
- (void)startMasterTimerWithTimeout:(float)arg1;
- (_Bool)resultAlreadyReported;
- (void)stopMasterTimer;
- (void)closeSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateMeterAndForward;
- (void)pushAudioInputIntoPCMBuffer:(id)arg1;
- (id)requestTriggeredUtterance:(id)arg1;
- (void)setupSpeechRecognitionTaskWithVoiceTriggerEventInfo:(id)arg1;
- (void)trimBeginingOfPCMBufferWithVoiceTriggerEventInfo:(id)arg1;
- (void)computeRequiredTrailingSamples;
- (void)feedSpeechRecognitionWithPCMBuffer;
- (void)closeSessionWithStatus:(int)arg1 successfully:(_Bool)arg2;
- (void)handleAudioBufferForVTWithAudioInput:(id)arg1 withDetectedBlock:(CDUnknownBlockType)arg2;
- (void)finishSpeechRecognitionTask;
- (void)feedSpeechRecognitionTrailingSamplesWithCompletedBlock:(CDUnknownBlockType)arg1;
- (long long)numSamplesInPCMBuffer;
- (id)createAVAudioPCMBufferWithNSData:(id)arg1;
- (void)handleAudioInput:(id)arg1;
- (void)_registerEndPointTimeout;
- (void)handleMasterTimeout:(id)arg1;

@end

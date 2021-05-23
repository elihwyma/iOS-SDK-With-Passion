/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSNNVADEndpointAnalyzer, CSVTUIKeywordDetector, CSVTUITrainingSession, NSMutableArray, NSString, SFSpeechRecognizer;

@protocol CSVTUIAudioSession, CSVTUITrainingManagerDelegate, OS_dispatch_queue;

@interface CSVTUITrainingManager : NSObject

{
    _Bool _performRMS;
    NSString *_locale;
    id <CSVTUIAudioSession> _audioSession;
    CSNNVADEndpointAnalyzer *_audioAnalyzer;
    CSVTUIKeywordDetector *_keywordDetector;
    NSMutableArray *_trainingSessions;
    CSVTUITrainingSession *_currentTrainingSession;
    long long _sessionNumber;
    _Bool _suspendAudio;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _cleanupCompletion;
    SFSpeechRecognizer *_speechRecognizer;
    CSAsset *_currentAsset;
    _Bool _speechRecognizerAvailable;
    float _rms;
    id <CSVTUITrainingManagerDelegate> _delegate;
}

@property float rms;
@property (weak, nonatomic) id <CSVTUITrainingManagerDelegate> delegate;
@property (readonly) _Bool speechRecognizerAvailable;
@property (readonly) unsigned long long audioSource;
@property _Bool suspendAudio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedtrainingSessionQueue;
+ (id)trainingManagerWithLocaleID:(id)arg1;

- (void)reset;
- (unsigned long long)_audioSource;
- (void)setLocaleIdentifier:(id)arg1;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_startAudioSession;
- (void)_stopAudioSession;
- (_Bool)_setupAudioSession;
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;
- (id)initWithLocaleIdentifier:(id)arg1 withAudioSession:(id)arg2;
- (_Bool)createKeywordDetector;
- (void)destroySpeakerTrainer;
- (void)_destroyAudioSession;
- (void)closeSessionBeforeStartWithStatus:(int)arg1 successfully:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)_createAudioAnalyzer;
- (_Bool)_shouldShowHeadsetDisconnectionMessage;
- (void)createSpeechRecognizer;
- (void)audioSessionDidStartRecording:(_Bool)arg1 error:(id)arg2;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (void)CSVTUITrainingSessionRMSAvailable:(float)arg1;
- (void)CSVTUITrainingSessionStopListen;
- (_Bool)CSVTUITrainingSession:(id)arg1 hasTrainUtterance:(id)arg2 languageCode:(id)arg3 payload:(_Bool)arg4;
- (void)_beginOfSpeechDetected;
- (void)_endOfSpeechDetected;
- (id)cleanupWithCompletion:(CDUnknownBlockType)arg1;
- (long long)trainUtterance:(long long)arg1 shouldUseASR:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)cancelTrainingForID:(long long)arg1;
- (void)startRMS;
- (void)stopRMS;
- (_Bool)shouldPerformRMS;
- (void)didDetectForceEndPoint;

@end

/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSVTUITrainingSession.h>

@class NSDictionary, NSString;

@interface CSVTUITrainingSessionWithPayload : CSVTUITrainingSession

{
    _Bool _detectBOS;
    _Bool _ASRResultReceived;
    _Bool _reportedStopListening;
    _Bool _utteranceStored;
    unsigned long long _numSamplesFed;
    unsigned long long _bestTriggerSampleStart;
    unsigned long long _extraSamplesAtStart;
    NSDictionary *_voiceTriggerEventInfo;
}

@property (retain, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(_Bool)arg2;
- (void)startTraining;
- (void)audioSessionDidStartRecording:(_Bool)arg1 error:(id)arg2;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (void)didDetectBeginOfSpeech;
- (void)didDetectEndOfSpeech:(long long)arg1;
- (void)closeSessionWithStatus:(int)arg1 successfully:(_Bool)arg2;
- (void)handleAudioInput:(id)arg1;
- (void)_registerEndPointTimeout;
- (void)_firedVoiceTriggerTimeout;
- (_Bool)shouldHandleSession;
- (_Bool)shouldMatchPayload;
- (void)_firedEndPointTimeout;
- (void)_registerVoiceTriggerTimeout;
- (void)_reportStopListening;
- (void)_registerForceEndPointTimeout;
- (void)matchRecognitionResult:(id)arg1 withMatchedBlock:(CDUnknownBlockType)arg2 withNonMatchedBlock:(CDUnknownBlockType)arg3;

@end

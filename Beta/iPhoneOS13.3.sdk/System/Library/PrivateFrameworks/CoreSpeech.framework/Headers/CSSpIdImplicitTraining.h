/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSBiometricMatchMonitor, CSGestureMonitor, NSDictionary, NSURL;

@protocol CSAudioFileWriter, OS_dispatch_queue;

@interface CSSpIdImplicitTraining : NSObject

{
    unsigned long long _triggerEndMachTime;
    unsigned long long _triggerStartMachTime;
    unsigned long long _extraSamplesAtBegining;
    unsigned long long _numSamplesAdded;
    unsigned long long _discardedPaylodSamples;
    _Bool _implicitRecordingInProgress;
    NSURL *_lastCachedUtterance;
    id <CSAudioFileWriter> _uttLogger;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_recordingContext;
    NSDictionary *_voiceTriggerEventInfo;
    CSBiometricMatchMonitor *_biometricMonitor;
    CSGestureMonitor *_gestureMonitor;
}

@property (retain, nonatomic) NSURL *lastCachedUtterance;
@property (retain, nonatomic) id <CSAudioFileWriter> uttLogger;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *recordingContext;
@property (retain, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (retain, nonatomic) CSBiometricMatchMonitor *biometricMonitor;
@property (retain, nonatomic) CSGestureMonitor *gestureMonitor;

+ (id)sharedInstance;

- (id)init;
- (void)processAudioChunk:(id)arg1;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)storeMultiUserImplicitTrainingUtterance:(id)arg1 forProfileId:(id)arg2 withAudioDeviceType:(id)arg3 withAudioRecordType:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (void)_storeSingleUserImplicitTrainingUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 withVoiceTriggerCtxt:(id)arg4 withOtherCtxt:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (unsigned long long)_getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1;
- (_Bool)_isUtteranceHandheld;
- (void)_segmentTDfromAudioFile:(id)arg1 withVTEventInfo:(id)arg2 withOtherCtxt:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)processImplicitTrainingUtterance:(id)arg1 forVoiceProfileId:(id)arg2 withRecordDeviceInfo:(id)arg3 withRecordCtxt:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (void)processImplicitTrainingUtteranceWithVoiceTriggerEventInfo:(id)arg1;
- (void)processSingleUserImplicitTrainingUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 withVoiceTriggerCtxt:(id)arg4 withOtherCtxt:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;

@end

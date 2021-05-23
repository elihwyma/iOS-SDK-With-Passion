/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VTAggregator : NSObject

{
    unsigned long long _currentState;
    double _lastAggTime;
    double _cumulativeUptime;
    double _cumulativeDowntime;
    double _lastAggTimeFalseWakeUp;
    unsigned long long _numFalseWakeUp;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_languageCode;
    NSString *_assetString;
}

+ (id)sharedAggregator;

- (id)init;
- (void)setLanguageCode:(id)arg1;
- (void)logTimeVoiceTriggerTransitionsToState:(unsigned long long)arg1;
- (void)logVoiceProfilePruningFailureWithReasonCode:(unsigned long long)arg1;
- (void)logProfileUpdateUtt:(id)arg1 withScore:(double)arg2;
- (void)logProfileUpdateScoreMSE:(double)arg1;
- (void)logProfileUpdateNumDiscardedUttsPHS:(int)arg1;
- (void)logProfileUpdateNumPrunedUttsPHS:(int)arg1;
- (void)logProfileUpdateNumRetainedUttsPHS:(int)arg1;
- (void)logTdPsrSATRetrainingTimedOut;
- (void)logTdPsrSATRetrainingWaitTimeMs:(double)arg1;
- (void)logTdPsrFailedDuringSATRetraining;
- (void)_logUptime;
- (id)_makeKeyWithLanguageAndAssetString:(id)arg1;
- (void)_addValueForScalarKey:(id)arg1 withValue:(long long)arg2;
- (void)_pushValueForDistributionKey:(id)arg1 withValue:(double)arg2;
- (id)_makeKeyWithLanguageCode:(id)arg1;
- (id)_makeKey:(id)arg1;
- (void)cumulativeUptime:(id *)arg1 cumulativeDowntime:(id *)arg2 reset:(_Bool)arg3;
- (void)setAssetString:(id)arg1;
- (void)logActivation;
- (void)logSecondPassResult:(_Bool)arg1;
- (void)logFalseWakeUp:(_Bool)arg1;
- (void)logZeroRunAudio:(int)arg1;
- (void)logRecognizerTimedOut;
- (void)logProfileUpdateNumDeletedUttsStrategy:(int)arg1;
- (void)logTdPsrSATDetectionWaitTimeMs:(double)arg1;
- (void)logTdPsrFailedDuringSATDetection;
- (void)logTdPsrSATDetectionTimedOut;
- (void)logTdPsrExtraAudioSamplesProcessed:(unsigned long long)arg1;

@end

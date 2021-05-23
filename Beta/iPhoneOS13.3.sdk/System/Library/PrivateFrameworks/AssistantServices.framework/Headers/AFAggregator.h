/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@interface AFAggregator : NSObject

{
    unsigned long long _type;
    double _startTime;
    _Bool _hasActiveRequest;
    _Bool _sessionIsRetrying;
    _Bool _retryPrefersWWAN;
}

@property (nonatomic) unsigned long long connectionType;
@property (nonatomic) _Bool hasActiveRequest;

+ (void)logDictationFollowedByContinueOccurredForLanguage:(id)arg1;
+ (void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)arg1;
+ (void)logSiriSpeechRequestStarted;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestFailedWithError:(id)arg1;
+ (void)logSiriRequestSucceeded;
+ (void)logSiriInvokedVia:(long long)arg1;
+ (void)logDictationStarted;
+ (void)logDictationCancelled;
+ (void)logDictationFailedWithError:(id)arg1;
+ (void)logDictationSucceeded;
+ (id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2;
+ (void)_logFeature:(id)arg1 setTo:(_Bool)arg2 by:(id)arg3;
+ (_Bool)_timestamp:(id)arg1 isAfter:(id)arg2;
+ (_Bool)_hadUserEventSinceIntervalAgo:(double)arg1;
+ (void)logRequestCompletedWithDuration:(double)arg1;
+ (void)missedAppContextForRequest;
+ (void)missedAlertContextForRequest;
+ (void)logRequestCancelAfterSeconds:(double)arg1;
+ (void)logSiriQuickStopAction:(unsigned long long)arg1;
+ (void)logSiriMediaVolumeAction:(long long)arg1;
+ (void)logSiriPausedMedia;
+ (void)logRequestLaunchedApp;
+ (void)logUILockCanceledVTActivation;
+ (void)logCreateAssistant;
+ (void)logLoadAssistant;
+ (void)logPingTimeout;
+ (void)logEnabledState:(unsigned long long)arg1;
+ (void)logAssistantEnabledSetTo:(_Bool)arg1 by:(id)arg2;
+ (void)logDictationEnabledSetTo:(_Bool)arg1 by:(id)arg2;
+ (void)logLocalRecognitionAssetEvictedForLanguage:(id)arg1;
+ (void)logLocalSpeechStartedWithDuration:(double)arg1;
+ (void)logLocalFinalSpeechRecognitionWithDuration:(double)arg1;
+ (void)logLocalRecognitionLoadedForLanguage:(id)arg1 duration:(double)arg2;
+ (void)logLocalRecognitionWonForLanguage:(id)arg1;
+ (void)logLocalRecognitionLostForLanguage:(id)arg1;
+ (void)logDESRecordingForLanguage:(id)arg1 error:(id)arg2;
+ (void)logDESEvaluationForLanguage:(id)arg1 error:(id)arg2;
+ (void)logCDMAssetEvictedForAssetType:(id)arg1 language:(id)arg2;
+ (void)noteConnectedToCarPlayHeadunit;
+ (void)noteSuccessOfRequest:(id)arg1 inCar:(_Bool)arg2;
+ (void)logPeriodicUsageIfNeeded;
+ (id)_stringForGatekeeperType:(unsigned long long)arg1;
+ (void)logTimeToBeepWithDuration:(double)arg1;
+ (void)logHomeButtonPressToActivationDuration:(double)arg1;
+ (void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)arg1;
+ (void)logStarkGatekeeperAppearedForType:(unsigned long long)arg1;

- (void)recordFailure:(int)arg1 forConnectionType:(unsigned long long)arg2;
- (void)recordSuccessForConnectionType:(unsigned long long)arg1 isWarm:(_Bool)arg2 forTimeInterval:(double)arg3;
- (void)recordSessionRetrySuccess;
- (void)connectionDidFail;
- (void)connectionDidDrop;
- (void)beginSessionRetryPreferringWWAN:(_Bool)arg1;
- (void)startWaitingForSpeechResponse;
- (void)speechResponseReceived;
- (void)speechResponseFailure;

@end

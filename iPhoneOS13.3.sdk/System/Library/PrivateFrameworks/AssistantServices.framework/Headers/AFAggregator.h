//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFAggregator : NSObject
{
    NSUInteger _type;
    double _startTime;
    BOOL _hasActiveRequest;
    BOOL _sessionIsRetrying;
    BOOL _retryPrefersWWAN;
}

+ (void)logPeriodicUsageIfNeeded;
+ (BOOL)_timestamp:(id)arg1 isAfter:(id)arg2;
+ (BOOL)_hadUserEventSinceIntervalAgo:(double)arg1;
+ (void)noteSuccessOfRequest:(id)arg1 inCar:(BOOL)arg2;
+ (void)noteConnectedToCarPlayHeadunit;
+ (void)logCDMAssetEvictedForAssetType:(id)arg1 language:(id)arg2;
+ (void)logDESEvaluationForLanguage:(id)arg1 error:(id)arg2;
+ (void)logDESRecordingForLanguage:(id)arg1 error:(id)arg2;
+ (void)logLocalRecognitionLostForLanguage:(id)arg1;
+ (void)logLocalRecognitionWonForLanguage:(id)arg1;
+ (void)logLocalRecognitionLoadedForLanguage:(id)arg1 duration:(double)arg2;
+ (void)logLocalFinalSpeechRecognitionWithDuration:(double)arg1;
+ (void)logLocalSpeechStartedWithDuration:(double)arg1;
+ (void)logLocalRecognitionAssetEvictedForLanguage:(id)arg1;
+ (void)logDictationEnabledSetTo:(BOOL)arg1 by:(id)arg2;
+ (void)logAssistantEnabledSetTo:(BOOL)arg1 by:(id)arg2;
+ (void)_logFeature:(id)arg1 setTo:(BOOL)arg2 by:(id)arg3;
+ (void)logEnabledState:(NSUInteger)arg1;
+ (void)logPingTimeout;
+ (void)logLoadAssistant;
+ (void)logCreateAssistant;
+ (void)logUILockCanceledVTActivation;
+ (void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByContinueOccurredForLanguage:(id)arg1;
+ (void)logDictationCancelled;
+ (void)logDictationSucceeded;
+ (void)logDictationFailedWithError:(id)arg1;
+ (void)logDictationStarted;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestSucceeded;
+ (void)logSiriRequestFailedWithError:(id)arg1;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriSpeechRequestStarted;
+ (void)logRequestLaunchedApp;
+ (id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2;
+ (void)logSiriPausedMedia;
+ (void)logSiriMediaVolumeAction:(long long)arg1;
+ (void)logSiriQuickStopAction:(NSUInteger)arg1;
+ (void)logSiriInvokedVia:(long long)arg1;
+ (void)logRequestCancelAfterSeconds:(double)arg1;
+ (void)missedAlertContextForRequest;
+ (void)missedAppContextForRequest;
+ (void)logRequestCompletedWithDuration:(double)arg1;
+ (id)_stringForGatekeeperType:(NSUInteger)arg1;
+ (void)logStarkGatekeeperAppearedForType:(NSUInteger)arg1;
+ (void)logStarkGatekeeperDismissedManuallyForType:(NSUInteger)arg1;
+ (void)logHomeButtonPressToActivationDuration:(double)arg1;
+ (void)logTimeToBeepWithDuration:(double)arg1;
@property(nonatomic) BOOL hasActiveRequest; // @synthesize hasActiveRequest=_hasActiveRequest;
@property(nonatomic) NSUInteger connectionType; // @synthesize connectionType=_type;
- (void)speechResponseFailure;
- (void)speechResponseReceived;
- (void)startWaitingForSpeechResponse;
- (void)beginSessionRetryPreferringWWAN:(BOOL)arg1;
- (void)connectionDidDrop;
- (void)connectionDidFail;
- (void)recordSessionRetrySuccess;
- (void)recordFailure:(int)arg1 forConnectionType:(NSUInteger)arg2;
- (void)recordSuccessForConnectionType:(NSUInteger)arg1 isWarm:(BOOL)arg2 forTimeInterval:(double)arg3;

@end


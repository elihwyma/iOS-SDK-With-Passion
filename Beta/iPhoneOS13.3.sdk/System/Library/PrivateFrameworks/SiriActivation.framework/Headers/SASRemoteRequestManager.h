/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class AFRemoteRequestWatcher, CMPocketStateManager, INUIAppIntentDeliverer;

@interface SASRemoteRequestManager : NSObject

{
    _Bool _hasPendingVoiceTriggerActivation;
    AFRemoteRequestWatcher *_remoteRequestWatcher;
    INUIAppIntentDeliverer *_currentAppIntentDeliverer;
    unsigned long long _currentVoiceTriggerRestriction;
    unsigned long long _pendingVoiceTriggerRestrictionCount;
    CMPocketStateManager *_pocketStateManager;
    long long _currentPocketState;
}

@property (retain, nonatomic) AFRemoteRequestWatcher *remoteRequestWatcher;
@property (retain, nonatomic) INUIAppIntentDeliverer *currentAppIntentDeliverer;
@property (nonatomic) unsigned long long currentVoiceTriggerRestriction;
@property (nonatomic) unsigned long long pendingVoiceTriggerRestrictionCount;
@property (nonatomic) _Bool hasPendingVoiceTriggerActivation;
@property (retain, nonatomic) CMPocketStateManager *pocketStateManager;
@property (nonatomic) long long currentPocketState;

+ (id)new;
+ (id)manager;

- (id)init;
- (id)_init;
- (void)_handleRemotePrewarmWithInfo:(id)arg1;
- (void)_handleNewRemoteRequestWithInfo:(id)arg1;
- (void)_handleRemoteRequestDismissalWithReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3;
- (_Bool)_requestWatcherVoiceActivationEnabled;
- (void)_startFetchingPocketStateUpdates;
- (void)_processPendingVoiceTriggerActivationsWithInfo:(id)arg1 delay:(double)arg2;
- (void)_handleRequestWatcherVoiceTriggerRequestWithInfo:(id)arg1;
- (void)_handlePendingVoiceTriggerActivationsWithInfo:(id)arg1;

@end

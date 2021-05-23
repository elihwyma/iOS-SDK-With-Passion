/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, SBIdleTimerAggregateClientConfiguration;

@protocol BSInvalidatable, SBIdleTimerServiceDelegate;

@interface SBIdleTimerService : NSObject

{
    struct os_unfair_lock_s _accessLock;
    NSMutableArray *_access_idleExpirationHandlers;
    NSMutableArray *_access_idleWarnHandlers;
    NSMutableArray *_access_idleUserAttentionResetHandlers;
    NSMutableDictionary *_disableTimerConfigurations;
    NSMutableDictionary *_minExpirationConfigurations;
    NSMutableDictionary *_maxEpirationConfigurations;
    id <BSInvalidatable> _stateCaptureAssertion;
    id <SBIdleTimerServiceDelegate> _delegate;
    SBIdleTimerAggregateClientConfiguration *_aggregateClientConfiguration;
}

@property (weak, nonatomic) id <SBIdleTimerServiceDelegate> delegate;
@property (nonatomic, readonly) SBIdleTimerAggregateClientConfiguration *aggregateClientConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)registerServices;
+ (id)_sharedIdleTimerStateServiceCreatingIfNeeded:(_Bool)arg1;
+ (id)_sharedIdleTimerStateServiceIfExists;

- (void)dealloc;
- (id)_init;
- (_Bool)handleIdleTimerDidWarn;
- (_Bool)handleIdleTimerDidExpire;
- (_Bool)handleIdleTimerUserAttentionDidReset;
- (void)_addStateCaptureHandlers;
- (id)acquireIdleTimerAssertionWithConfiguration:(id)arg1 fromClient:(id)arg2 forReason:(id)arg3;
- (void)_addConfigurationInfo:(id)arg1 toSortedArray:(id)arg2;
- (void)_removeAssertionsForReason:(id)arg1;
- (void)_aggregateConfigurations;
- (void)_removeConfigurationInfoForReason:(id)arg1 fromArray:(id)arg2;
- (id)_stateCaptureDescription;
- (id)_acquireIdleTimerDisableAssertionForReason:(id)arg1;

@end

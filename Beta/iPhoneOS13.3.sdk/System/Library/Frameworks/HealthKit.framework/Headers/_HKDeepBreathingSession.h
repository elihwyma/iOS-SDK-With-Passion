/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class _HKDeepBreathingSessionConfiguration;

@protocol NSXPCProxyCreating, OS_dispatch_queue, _HKDeepBreathingSessionDelegate, _HKDeepBreathingSessionLifecycleDelegate;

@interface _HKDeepBreathingSession : NSObject

{
    _HKDeepBreathingSessionConfiguration *_sessionConfiguration;
    id <_HKDeepBreathingSessionLifecycleDelegate> _lifecycleDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    long long _serverState;
    id <NSXPCProxyCreating> _server;
    id <_HKDeepBreathingSessionDelegate> _delegate;
}

@property (weak) id <_HKDeepBreathingSessionDelegate> delegate;
@property (readonly) long long serverState;
@property (readonly) _HKDeepBreathingSessionConfiguration *sessionConfiguration;

+ (id)_clientInterface;
+ (id)sessionWithConfiguration:(id)arg1 lifecycleDelegate:(id)arg2;
+ (id)_serverInterface;

- (id)description;
- (id)_sessionConfiguration;
- (id)_serverProxy;
- (void)_attachServerWithClientQueue:(id)arg1 healthStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_connectionDidEncounterError:(id)arg1;
- (id)_initWithSessionConfiguration:(id)arg1 lifecycleDelegate:(id)arg2;
- (void)sessionDidReceiveError:(id)arg1;
- (void)sessionDidReceiveHeartRate:(double)arg1;
- (void)startSessionWithStartDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startGuiding;
- (void)endSessionWithEndReason:(long long)arg1;
- (id)_serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_queue_transitionToServerState:(long long)arg1;
- (_Bool)_isServerAttached;
- (void)_queue_deactivate;
- (void)_queue_alertDelegateDidEncounterError:(id)arg1;
- (_Bool)_queue_isServerAttached;
- (void)_queue_alertDelegateDidReceiveHeartRate:(double)arg1;
- (id)_lifecycleDelegate;

@end

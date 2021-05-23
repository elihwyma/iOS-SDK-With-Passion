/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFExecutionEnvironment, HFHomeKitDispatcher, HMHome, NSString;

@interface HFWiFiExecutionEnvironmentObserver : NSObject

{
    HFExecutionEnvironment *_environment;
    HFHomeKitDispatcher *_dispatcher;
    HMHome *_lastKnownHome;
    unsigned long long _lastKnownRunningState;
}

@property (retain, nonatomic) HMHome *lastKnownHome;
@property (nonatomic) unsigned long long lastKnownRunningState;
@property (weak, nonatomic, readonly) HFExecutionEnvironment *environment;
@property (weak, nonatomic, readonly) HFHomeKitDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_updateState;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)executionEnvironmentDidBecomeActive:(id)arg1;
- (void)executionEnvironmentDidEnterBackground:(id)arg1;
- (id)initWithExecutionEnvironment:(id)arg1 dispatcher:(id)arg2;

@end

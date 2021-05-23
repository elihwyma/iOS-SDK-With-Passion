/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFSiriTaskmaster, AFWatchdogTimer, BKSApplicationStateMonitor, BKSProcessAssertion, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AFUIApplicationSiriTaskDeliverer : NSObject

{
    NSString *_appBundleIdentifier;
    BKSApplicationStateMonitor *_appStateMonitor;
    BKSProcessAssertion *_bKSAssertionForBgLaunch;
    AFWatchdogTimer *_assertionTimer;
    NSObject<OS_dispatch_group> *_bKSAssertionSetupGroup;
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriTaskmaster *_taskmaster;
}

@property (weak, nonatomic) AFSiriTaskmaster *taskmaster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)deliverSiriTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)siriTaskDidFinish;
- (void)_invalidateAssertionTimer;
- (void)_invalidateBackboardServices;
- (void)_processAssertionWasInvalidatedForRequest:(id)arg1;
- (void)_startAppStateMonitoringForRequest:(id)arg1;
- (void)_handleSuccessfulAppLaunchToBackground:(_Bool)arg1 forRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processAssertionWasAcquired:(_Bool)arg1;
- (void)processAssertionWasInvalidatedForRequest:(id)arg1;
- (id)initWithAppBundleIdentifier:(id)arg1;

@end

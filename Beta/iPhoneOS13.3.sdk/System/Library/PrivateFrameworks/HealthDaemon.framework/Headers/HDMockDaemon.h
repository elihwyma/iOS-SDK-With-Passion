/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDBackgroundTaskScheduler, HDMockPrimaryProfile, HDPluginManager, HDPrimaryProfile, NSString, _HKBehavior;

@protocol HDNanoAlertSuppressionService;

@interface HDMockDaemon : NSObject

{
    HDBackgroundTaskScheduler *backgroundTaskScheduler;
    HDMockPrimaryProfile *mockPrimaryProfile;
    HDPrimaryProfile *primaryProfile;
    HDPluginManager *pluginManager;
    id <HDNanoAlertSuppressionService> alertSuppressionService;
}

@property (nonatomic, readonly) HDMockPrimaryProfile *mockPrimaryProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (readonly) HDPluginManager *pluginManager;
@property (nonatomic, readonly) HDPrimaryProfile *primaryProfile;
@property (retain, nonatomic) id <HDNanoAlertSuppressionService> alertSuppressionService;
@property (nonatomic, readonly) _HKBehavior *behavior;

- (id)init;
- (void)registerForDaemonReady:(id)arg1;
- (void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2;
- (id)createXPCListenerWithMachServiceName:(id)arg1;
- (id)daemonExtensionWithIdentifier:(id)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (id)daemonExtensionsConformingToProtocol:(id)arg1;

@end

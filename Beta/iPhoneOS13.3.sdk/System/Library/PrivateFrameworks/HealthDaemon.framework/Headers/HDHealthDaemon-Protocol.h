/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class HDBackgroundTaskScheduler, HDPluginManager, HDPrimaryProfile, _HKBehavior;

@protocol HDNanoAlertSuppressionService;

@protocol HDHealthDaemon <Swift>

@property (readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (readonly) HDPluginManager *pluginManager;
@property (nonatomic, readonly) HDPrimaryProfile *primaryProfile;
@property (retain, nonatomic) id <HDNanoAlertSuppressionService> alertSuppressionService;
@property (nonatomic, readonly) _HKBehavior *behavior;

- (unsigned short)registerForDaemonReady: /* Error: Ran out of types for this method. */;
- (unsigned short)registerDaemonReadyObserver:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)createXPCListenerWithMachServiceName: /* Error: Ran out of types for this method. */;
- (unsigned short)daemonExtensionWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)registerForLaunchNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterForLaunchNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)daemonExtensionsConformingToProtocol: /* Error: Ran out of types for this method. */;

@end

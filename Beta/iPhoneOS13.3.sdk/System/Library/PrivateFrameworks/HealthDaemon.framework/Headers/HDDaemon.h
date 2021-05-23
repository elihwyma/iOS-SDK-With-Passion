/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAnalyticsSubmissionCoordinator, HDBackgroundTaskScheduler, HDCloudSyncCoordinator, HDContentProtectionManager, HDDevicePowerMonitor, HDFeatureAvailabilityAssetManager, HDMaintenanceWorkCoordinator, HDPeriodicActivity, HDPluginManager, HDPrimaryProfile, HDProcessStateManager, HDProfileManager, HDQueryManager, HDTaskServerRegistry, HDWorkoutPluginDaemonExtension, HDXPCAlarmScheduler, HDXPCListener, NSDictionary, NSMutableArray, NSMutableSet, NSString, NSURL, _HKBehavior;

@protocol HDDaemonTester, HDNanoAlertSuppressionService, OS_dispatch_queue;

@interface HDDaemon : NSObject

{
    _HKBehavior *_behavior;
    NSString *_healthDirectoryPath;
    struct os_unfair_lock_s _endpointLock;
    NSMutableSet *_endpoints;
    NSObject<OS_dispatch_queue> *_queue;
    int _languageChangeNotifyToken;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    HDContentProtectionManager *_contentProtectionManager;
    HDCloudSyncCoordinator *_cloudSyncCoordinator;
    HDPeriodicActivity *_periodicActivity;
    HDPluginManager *_pluginManager;
    HDProcessStateManager *_processStateManager;
    HDProfileManager *_profileManager;
    HDPrimaryProfile *_primaryProfile;
    struct MGNotificationTokenStruct *_deviceNameChangesToken;
    struct os_unfair_lock_s _daemonReadyLock;
    NSMutableArray *_daemonReadyBlocks;
    long long _numberOfDaemonReadyObserversBeforeReady;
    long long _numberOfDaemonReadyObserversAfterReady;
    _Bool _daemonReady;
    struct atomic_flag _didStart;
    NSDictionary *_daemonExtensionsByIdentifier;
    NSString *_medicalIDDirectoryPath;
    HDAnalyticsSubmissionCoordinator *_analyticsSubmissionCoordinator;
    id <HDNanoAlertSuppressionService> _alertSuppressionService;
    HDFeatureAvailabilityAssetManager *_featureAvailabilityAssetManager;
    HDMaintenanceWorkCoordinator *_maintenanceWorkCoordinator;
    HDQueryManager *_queryManager;
    HDXPCListener *_serviceListener;
    HDTaskServerRegistry *_taskServerRegistry;
    HDDevicePowerMonitor *_devicePowerMonitor;
    HDXPCAlarmScheduler *_alarmScheduler;
    id <HDDaemonTester> _daemonTester;
}

@property (nonatomic, readonly) HDXPCListener *serviceListener;
@property (nonatomic, readonly) HDContentProtectionManager *contentProtectionManager;
@property (nonatomic, readonly) HDTaskServerRegistry *taskServerRegistry;
@property (nonatomic, readonly) HDDevicePowerMonitor *devicePowerMonitor;
@property (nonatomic, readonly) HDXPCAlarmScheduler *alarmScheduler;
@property (nonatomic, readonly) HDWorkoutPluginDaemonExtension *workoutPluginExtension;
@property (weak, nonatomic) id <HDDaemonTester> daemonTester;
@property (readonly) _HKBehavior *behavior;
@property (copy, readonly) NSString *healthDirectoryPath;
@property (copy, readonly) NSURL *healthDirectoryURL;
@property (copy, readonly) NSString *medicalIDDirectoryPath;
@property (retain, nonatomic) HDAnalyticsSubmissionCoordinator *analyticsSubmissionCoordinator;
@property (retain, nonatomic) id <HDNanoAlertSuppressionService> alertSuppressionService;
@property (nonatomic, readonly) HDCloudSyncCoordinator *cloudSyncCoordinator;
@property (nonatomic, readonly) HDFeatureAvailabilityAssetManager *featureAvailabilityAssetManager;
@property (nonatomic, readonly) HDMaintenanceWorkCoordinator *maintenanceWorkCoordinator;
@property (nonatomic, readonly) HDPrimaryProfile *primaryProfile;
@property (nonatomic, readonly) HDProcessStateManager *processStateManager;
@property (nonatomic, readonly) HDProfileManager *profileManager;
@property (nonatomic, readonly) HDQueryManager *queryManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (readonly) HDPluginManager *pluginManager;

- (id)init;
- (void)dealloc;
- (id)mainQueue;
- (void)start;
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)invalidateAndWait;
- (void)_setUpSignalHandlers;
- (id)diagnosticDescription;
- (void)registerForDaemonReady:(id)arg1;
- (void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2;
- (id)taskServerClasses;
- (id)nanoPairedDeviceRegistry;
- (id)pairedSyncCoordinatorWithServiceName:(id)arg1;
- (id)IDSServiceWithIdentifier:(id)arg1;
- (id)healthDomainAccessorWithPairedDevice:(id)arg1;
- (void)unitTest_queryServerDidInit:(id)arg1;
- (id)healthLiteUserDefaultsDomain;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (id)initWithHealthDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2;
- (id)_newBehavior;
- (_Bool)_shouldInitializeDaemon;
- (id)_newPluginManager;
- (id)_newContentProtectionManager;
- (id)_newProcessStateManager;
- (id)_newBackgroundTaskScheduler;
- (id)_newPrimaryProfile;
- (void)unitTest_didCreateProfile:(id)arg1;
- (id)_newProfileManager;
- (id)_newCloudSyncCoordinator;
- (id)_newAnalyticsSubmissionCoordinator;
- (void)_registerForDeviceNameChanges;
- (void)_notifyDaemonReadyObservers;
- (void)_setUpLaunchEventHandlers;
- (void)_localeOrLanguageChanged:(id)arg1;
- (id)createXPCListenerWithMachServiceName:(id)arg1;
- (id)_bundleIdentifiersToTerminateAfterObliteration;
- (void)terminateClean:(_Bool)arg1 reason:(id)arg2;
- (void)_terminationCleanup;
- (void)exitClean:(_Bool)arg1 reason:(id)arg2;
- (void)_handleSigterm;
- (void)_setUpNotifydEventHandler;
- (void)_setUpDistnotedEventHandler;
- (void)_setupMemoryWarningHandler;
- (void)_resetPrivacySettings;
- (void)_handleLaunchServicesEvent:(id)arg1 name:(id)arg2;
- (void)_unregisterLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_registerLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_updateCurrentDeviceName;
- (id)daemonExtensionWithIdentifier:(id)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (id)daemonExtensionsConformingToProtocol:(id)arg1;
- (id)initWithContainerDirectoryPath:(id)arg1;
- (void)endpointInvalidated:(id)arg1;
- (void)invalidateAllServersForProfile:(id)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(CDUnknownBlockType)arg4;
- (id)healthDirectorySizeInBytes;
- (id)_newReferenceOntologyAsset;
- (void)unitTest_taskServerDidInit:(id)arg1;

@end

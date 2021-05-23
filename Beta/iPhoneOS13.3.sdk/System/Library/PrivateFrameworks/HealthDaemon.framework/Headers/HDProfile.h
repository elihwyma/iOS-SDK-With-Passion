/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAWDSubmissionManager, HDActivityCacheManager, HDAppSubscriptionManager, HDAssertionManager, HDAuthorizationManager, HDCloudSyncManager, HDCurrentActivitySummaryHelper, HDDaemon, HDDaemonSyncEngine, HDDataCollectionManager, HDDataManager, HDDataProvenanceManager, HDDatabase, HDDatabasePruningManager, HDDeviceManager, HDFitnessMachineManager, HDHealthServiceManager, HDMedicalIDDataManager, HDMetadataManager, HDMigrationManager, HDNanoSyncManager, HDNotificationManager, HDOntologyLifecycleManager, HDRestorableAlarmScheduler, HDServiceConnectionManager, HDSourceManager, HDSourceOrderManager, HDUnitPreferencesManager, HDUserCharacteristicsManager, HDWorkoutCondenser, HDWorkoutManager, HKProfileIdentifier, NSDictionary, NSString, NSURL;

@protocol HDHealthDaemon, HDSyncEngine;

@interface HDProfile : NSObject

{
    HDDatabase *_database;
    HDSourceManager *_sourceManager;
    HDDeviceManager *_deviceManager;
    HDAuthorizationManager *_authorizationManager;
    NSString *_directoryPath;
    HDDaemonSyncEngine *_syncEngine;
    NSDictionary *_profileExtensionsByIdentifier;
    struct os_unfair_lock_s _profileLock;
    HDDaemon *_daemon;
    HDCloudSyncManager *_cloudSyncManager;
    HDDataManager *_dataManager;
    HDDataProvenanceManager *_dataProvenanceManager;
    HDMetadataManager *_metadataManager;
    HDAssertionManager *_sessionAssertionManager;
    HDSourceOrderManager *_sourceOrderManager;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    HDWorkoutCondenser *_workoutCondenser;
    long long _profileType;
    HKProfileIdentifier *_profileIdentifier;
    NSString *_medicalIDDirectoryPath;
    HDRestorableAlarmScheduler *_alarmScheduler;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDDatabasePruningManager *_databasePruningManager;
    HDMedicalIDDataManager *_medicalIDDataManager;
    HDMigrationManager *_migrationManager;
    HDUnitPreferencesManager *_unitPreferencesManager;
}

@property (nonatomic, readonly) _Bool hasHealthRecordsAccounts;
@property (nonatomic, readonly) HDRestorableAlarmScheduler *alarmScheduler;
@property (nonatomic, readonly) HDAppSubscriptionManager *appSubscriptionManager;
@property (nonatomic, readonly) HDAWDSubmissionManager *awdSubmissionManager;
@property (nonatomic, readonly) HDDatabasePruningManager *databasePruningManager;
@property (nonatomic, readonly) HDMedicalIDDataManager *medicalIDDataManager;
@property (nonatomic, readonly) HDMigrationManager *migrationManager;
@property (nonatomic, readonly) HDServiceConnectionManager *serviceConnectionManager;
@property (nonatomic, readonly) HDUnitPreferencesManager *unitPreferencesManager;
@property (weak, nonatomic, readonly) HDDaemon *daemon;
@property (weak, nonatomic, readonly) id <HDHealthDaemon> healthDaemon;
@property (nonatomic, readonly) HDActivityCacheManager *activityCacheManager;
@property (nonatomic, readonly) HDAuthorizationManager *authorizationManager;
@property (nonatomic, readonly) HDCloudSyncManager *cloudSyncManager;
@property (nonatomic, readonly) HDCurrentActivitySummaryHelper *currentActivitySummaryHelper;
@property (nonatomic, readonly) HDDataManager *dataManager;
@property (nonatomic, readonly) HDDataCollectionManager *dataCollectionManager;
@property (nonatomic, readonly) HDDataProvenanceManager *dataProvenanceManager;
@property (nonatomic, readonly) HDDeviceManager *deviceManager;
@property (nonatomic, readonly) HDFitnessMachineManager *fitnessMachineManager;
@property (nonatomic, readonly) HDMetadataManager *metadataManager;
@property (nonatomic, readonly) HDNanoSyncManager *nanoSyncManager;
@property (nonatomic, readonly) HDNotificationManager *notificationManager;
@property (nonatomic, readonly) HDHealthServiceManager *serviceManager;
@property (nonatomic, readonly) HDAssertionManager *sessionAssertionManager;
@property (nonatomic, readonly) HDSourceManager *sourceManager;
@property (nonatomic, readonly) HDSourceOrderManager *sourceOrderManager;
@property (nonatomic, readonly) id <HDSyncEngine> syncEngine;
@property (nonatomic, readonly) HDUserCharacteristicsManager *userCharacteristicsManager;
@property (nonatomic, readonly) HDWorkoutCondenser *workoutCondenser;
@property (nonatomic, readonly) HDWorkoutManager *workoutManager;
@property (nonatomic, readonly) HDOntologyLifecycleManager *ontologyLifecycleManager;
@property (nonatomic, readonly) HDDatabase *database;
@property (nonatomic, readonly) long long profileType;
@property (copy, nonatomic, readonly) HKProfileIdentifier *profileIdentifier;
@property (copy, nonatomic, readonly) NSString *directoryPath;
@property (copy, nonatomic, readonly) NSURL *directoryURL;
@property (copy, nonatomic, readonly) NSString *medicalIDDirectoryPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidateAndWait;
- (void)daemonReady:(id)arg1;
- (id)profileExtensionsConformingToProtocol:(id)arg1;
- (id)profileExtensionWithIdentifier:(id)arg1;
- (id)healthSourceManager;
- (id)healthDeviceManager;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3 profileType:(long long)arg4 profileIdentifier:(id)arg5;
- (id)_newAWDSubmissionManager;
- (void)terminationCleanup;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)obliterateWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (id)_newUserCharacteristicsManager;
- (id)_newCloudSyncManager;
- (void)_createExtensionsIfNeeded;
- (id)_displayNameWithError:(id *)arg1;
- (id)_lastNameWithError:(id *)arg1;
- (_Bool)fetchDisplayFirstName:(id *)arg1 lastName:(id *)arg2 error:(id *)arg3;
- (_Bool)setDisplayFirstName:(id)arg1 lastName:(id)arg2 error:(id *)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDProfile.h>

@class HDAWDSubmissionManager, HDAppSubscriptionManager, HDCurrentActivitySummaryHelper, HDDataCollectionManager, HDDemoDataManager, HDFitnessMachineManager, HDHealthServiceManager, HDNanoSyncManager, HDNotificationManager, HDOntologyLifecycleManager, HDServiceConnectionManager, HDWorkoutManager;

@interface HDPrimaryProfile : HDProfile

{
    HDAppSubscriptionManager *_appSubscriptionManager;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    HDDataCollectionManager *_dataCollectionManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDNotificationManager *_notificationManager;
    HDHealthServiceManager *_serviceManager;
    HDServiceConnectionManager *_serviceConnectionManager;
    HDWorkoutManager *_workoutManager;
    HDDemoDataManager *_demoDataManager;
    HDOntologyLifecycleManager *_ontologyLifecycleManager;
}

- (id)notificationManager;
- (id)serviceManager;
- (id)currentActivitySummaryHelper;
- (id)nanoSyncManager;
- (id)dataCollectionManager;
- (id)_newAppSubscriptionManager;
- (id)_newAWDSubmissionManager;
- (id)_newNanoSyncManager;
- (id)_newNotificationManager;
- (id)_newWorkoutManager;
- (void)_applyPPTUpdates;
- (id)activityCacheManager;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3;
- (void)terminationCleanup;
- (id)appSubscriptionManager;
- (id)awdSubmissionManager;
- (id)workoutManager;
- (id)fitnessMachineManager;
- (id)serviceConnectionManager;
- (id)ontologyLifecycleManager;
- (void)unitTest_setServiceManager:(id)arg1;

@end

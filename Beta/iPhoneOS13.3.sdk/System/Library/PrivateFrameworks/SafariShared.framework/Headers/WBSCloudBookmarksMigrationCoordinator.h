/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer, WBSCloudBookmarksMigrationReadinessDecider;

@protocol OS_dispatch_queue, WBSCloudBookmarksDeviceEligibilityFetcher, WBSCloudBookmarksMigrationCoordinatorLocalDataProvider, WBSCloudBookmarksMigrationCoordinatorStorage, WBSCloudTabDeviceProvider, WBSLogger, WBSSafariBookmarksSyncAgentProtocol;

@interface WBSCloudBookmarksMigrationCoordinator : NSObject

{
    id <WBSCloudBookmarksMigrationCoordinatorStorage> _storage;
    id <WBSSafariBookmarksSyncAgentProtocol> _syncAgent;
    id <WBSCloudTabDeviceProvider> _cloudTabDeviceProvider;
    id <WBSCloudBookmarksDeviceEligibilityFetcher> _windowsDeviceEligibilityFetcher;
    NSObject<OS_dispatch_queue> *_processingQueue;
    WBSCloudBookmarksMigrationReadinessDecider *_migrationReadinessDecider;
    _Bool _readyToMigrate;
    long long _skipReason;
    NSTimer *_migrationReadinessReevaluationTimer;
    _Bool _migrationEnabled;
    id <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> _localDataProvider;
    id <WBSLogger> _keyActionsLogger;
}

@property (nonatomic, readonly) id <WBSCloudBookmarksMigrationCoordinatorStorage> storage;
@property (weak, nonatomic, readonly) id <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> localDataProvider;
@property (nonatomic, readonly) id <WBSSafariBookmarksSyncAgentProtocol> syncAgent;
@property (nonatomic, readonly) id <WBSCloudTabDeviceProvider> cloudTabDeviceProvider;
@property (nonatomic, readonly) id <WBSCloudBookmarksDeviceEligibilityFetcher> windowsDeviceEligibilityFetcher;
@property (retain, nonatomic) id <WBSLogger> keyActionsLogger;
@property (nonatomic, getter=isMigrationEnabled) _Bool migrationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)fetchUserIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_migrationReadinessDataInvalidated:(id)arg1;
- (void)_logKeyAction:(id)arg1;
- (void)_determineCourseOfActionFromSyncAgentMigrationState;
- (void)startCoordinatingMigration;
- (void)_determineCourseOfActionFromRemoteMigrationState;
- (void)_startWaitingForMigrationReadiness;
- (void)_evaluateMigrationRampInclusionForced:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_considerOverridingOtherMigratingDevice;
- (void)noteCloudTabDevicesChanged;
- (void)_logErrorAsKeyAction:(id)arg1;
- (void)_reevaluateMigrationReadiness;
- (void)_migrationReadinessDeciderDecidedMigrationIsPossible;
- (void)_migrationReadinessDeciderDecidedMigrationIsNoLongerPossible;
- (void)_scheduleMigrationReadinessReevaluationForDate:(id)arg1;
- (void)_stopWaitingForMigrationReadiness;
- (id)initWithStorage:(id)arg1 syncAgent:(id)arg2 localDataProvider:(id)arg3 cloudTabDeviceProvider:(id)arg4 windowsDeviceEligibilityFetcher:(id)arg5;

@end

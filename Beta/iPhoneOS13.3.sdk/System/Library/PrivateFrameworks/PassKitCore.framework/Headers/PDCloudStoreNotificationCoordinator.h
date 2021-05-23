/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSHashTable, NSMutableArray, NSSet, NSString, PDApplePayCloudStoreContainer, PDPassCloudStoreContainer, PDPushNotificationManager;

@protocol OS_dispatch_queue;

@interface PDCloudStoreNotificationCoordinator : NSObject

{
    NSHashTable *_observers;
    PDPushNotificationManager *_pushNotificationManager;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSSet *_pushTopics;
    NSMutableArray *_containers;
    PDApplePayCloudStoreContainer *_applePayContainer;
    PDPassCloudStoreContainer *_passContainer;
}

@property (retain, nonatomic) PDApplePayCloudStoreContainer *applePayContainer;
@property (retain, nonatomic) PDPassCloudStoreContainer *passContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)noteAccountDeleted;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;
- (void)cloudStoreContainerShouldUnscheduleAllBackgroundActivities:(id)arg1;
- (void)cloudStoreContainer:(id)arg1 createdZoneWithName:(id)arg2;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)invalidateServerChangeTokens;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetContainerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)noteCloudSyncPassesSwitchChanged;
- (void)setupCloudDatabaseForContainerName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cloudStoreStatusForContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_containerWithIdentifier:(id)arg1;
- (void)_initialCloudDatabaseSetupForContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_initialCloudDatabaseSetupForContainer:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_initialCloudDatabaseSetupForContainer:(id)arg1 operationGroupNameSuffix:(id)arg2 shouldScheduleBackgroundActivity:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_registerForPushNotifications;
- (void)_scheduleFirstCloudStoreContainerSetupBackgroundActivityIfNeccessary;
- (void)_unregisterForPushNotifications;
- (id)_errorWithCode:(long long)arg1 description:(id)arg2;
- (id)_containerForItemType:(unsigned long long)arg1;
- (id)_containerWithZoneName:(id)arg1;
- (void)_unscheduleBackgroundContainerSetupActivities;
- (void)_performCloudStoreContainerInitalizationBackgroundActivityWithCurrentInterval:(unsigned long long)arg1 nextBackgroundInterval:(unsigned long long)arg2;
- (void)_syncOriginatingTransactionsToCloudStore;
- (void)_recordAggdCloudStoreBackgroundContainerSetupResult:(_Bool)arg1 forCurrentBackgroundInterval:(unsigned long long)arg2;
- (void)_scheduleCloudStoreContainerSetupBackgroundActivityWithNextInterval:(unsigned long long)arg1;
- (id)_backgroundActivityNameForBackgroundInterval:(unsigned long long)arg1;
- (double)_nextTimeIntervalForBackgroundInterval:(unsigned long long)arg1;
- (_Bool)_shouldScheduleInitalCloudStoreContainerSetupBackgroundActivity;
- (void)_processCloudStorePushNotificationForContainer:(id)arg1;
- (id)pushNotificationTopics;
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;
- (void)applyPushNotificationToken:(id)arg1;
- (void)cloudStoreContainer:(id)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)recreateZone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPushNotificationManager:(id)arg1;
- (void)scheduleTransactionDeviceDataSyncBackgroundActivity;

@end

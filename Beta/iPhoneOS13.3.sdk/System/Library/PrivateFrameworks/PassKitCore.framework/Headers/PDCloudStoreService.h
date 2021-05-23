/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PDXPCService.h>

@class NSString, PDCloudStoreNotificationCoordinator, PKEntitlementWhitelist;

@interface PDCloudStoreService : PDXPCService

{
    PKEntitlementWhitelist *_whitelist;
    PDCloudStoreNotificationCoordinator *_cloudStoreNotificationCoordinator;
}

@property (retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithConnection:(id)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)noteAccountDeletedWithHandler:(CDUnknownBlockType)arg1;
- (void)uploadTransaction:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetContainerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupCloudDatabaseForContainerName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cloudStoreStatusForContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)noteCloudSyncPassesSwitchChangedWithHandler:(CDUnknownBlockType)arg1;
- (void)simulateCloudStorePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetContainerWithHandler:(CDUnknownBlockType)arg1;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;

@end

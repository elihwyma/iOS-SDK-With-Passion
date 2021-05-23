/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PDCloudStoreServiceExportedInterface <Swift>

- (unsigned short)checkTLKsMissingWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)resetApplePayManateeViewWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)noteAccountDeletedWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)uploadTransaction:forPassWithUniqueIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)generateRandomTransactionForPassWithUniqueIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)populateEvents:forAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateCloudStoreWithLocalItems:recordSpecificKeys:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeItemsWithRecordNames:itemType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)allItemsOfItemType:storeLocally:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)itemOfItemType:recordName:qualityOfService:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)resetContainerWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)simulateCloudStorePushForContainerIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setupCloudDatabaseForContainerName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cloudStoreStatusForContainer:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)noteCloudSyncPassesSwitchChangedWithHandler: /* Error: Ran out of types for this method. */;

@end

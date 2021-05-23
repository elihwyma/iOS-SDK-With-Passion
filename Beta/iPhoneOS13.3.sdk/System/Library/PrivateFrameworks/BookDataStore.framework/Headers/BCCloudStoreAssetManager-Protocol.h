/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@protocol BCCloudStoreAssetManager <Swift>

- (unsigned short)addStoreItem:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addStoreItems:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteStoreItemWithStoreID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteStoreItemsWithStoreIDs:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)storeItemForStoreID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchStoreItemsIncludingDeleted:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getStoreItemChangesSince:completion: /* Error: Ran out of types for this method. */;

@end

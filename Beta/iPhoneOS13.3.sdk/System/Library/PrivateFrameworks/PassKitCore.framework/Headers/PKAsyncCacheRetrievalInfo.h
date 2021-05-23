/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableArray;

@interface PKAsyncCacheRetrievalInfo : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _itemFetched;
    id _item;
    NSMutableArray *_deliveryBlocks;
}

- (id)init;
- (void)addDeliveryBlock:(CDUnknownBlockType)arg1;
- (id)synchronouslyRetrieve:(CDUnknownBlockType)arg1 outDeliveryBlocks:(id *)arg2;
- (void)deliverItem:(id)arg1;

@end

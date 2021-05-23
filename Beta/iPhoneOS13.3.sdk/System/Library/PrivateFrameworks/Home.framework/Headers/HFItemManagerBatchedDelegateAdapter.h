/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFItemManager, NAFuture, NSMutableSet;

@protocol HFCharacteristicReadPolicy;

@interface HFItemManagerBatchedDelegateAdapter : NSObject

{
    HFItemManager *_itemManager;
    id <HFCharacteristicReadPolicy> _readPolicy;
    NSMutableSet *_uncommittedBatchingReasons;
    NSMutableSet *_batchedItemsToUpdate;
    NSMutableSet *_batchedItemProviderInvalidationReasons;
    SEL _batchedSenderSelector;
    NAFuture *_startExecutingBatchFuture;
    NAFuture *_finishExecutingBatchFuture;
}

@property (retain, nonatomic) NSMutableSet *uncommittedBatchingReasons;
@property (retain, nonatomic) NSMutableSet *batchedItemsToUpdate;
@property (retain, nonatomic) NSMutableSet *batchedItemProviderInvalidationReasons;
@property (nonatomic) SEL batchedSenderSelector;
@property (retain, nonatomic) NAFuture *startExecutingBatchFuture;
@property (retain, nonatomic) NAFuture *finishExecutingBatchFuture;
@property (weak, nonatomic, readonly) HFItemManager *itemManager;
@property (retain, nonatomic) id <HFCharacteristicReadPolicy> readPolicy;

- (void)_reset;
- (void)beginBatchWithReason:(id)arg1;
- (id)commitBatchWithReason:(id)arg1 senderSelector:(SEL)arg2;
- (id)requestUpdateForItems:(id)arg1 itemProviderInvalidationReasons:(id)arg2 modifiedHome:(id)arg3 senderSelector:(SEL)arg4;
- (id)initWithItemManager:(id)arg1 readPolicy:(id)arg2;
- (void)_executeBatch;
- (id)_itemProvidersToReloadForInvalidationReasons:(id)arg1;

@end

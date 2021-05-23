/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface MPStoreItemMetadataRequestController : NSObject

{
    NSOperationQueue *_operationQueue;
    unsigned long long _lastExpiredMetadataPurgeMachTime;
    NSMutableDictionary *_itemCaches;
    struct os_unfair_lock_s _transactionLock;
    long long _transactionCount;
    long long _cacheSize;
}

@property (nonatomic) long long cacheSize;

+ (id)sharedStoreItemMetadataRequestController;
+ (unsigned long long)optimalBatchSize;

- (id)init;
- (void)beginTransaction;
- (void)endTransaction;
- (void)addStoreItemMetadata:(id)arg1;
- (void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_removeExpiredItemsPeriodically;

@end

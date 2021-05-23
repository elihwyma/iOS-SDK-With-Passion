/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface CKDRecordCachePool : NSObject

{
    NSMutableDictionary *_pools;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_recordExpiryQueue;
}

@property (retain, nonatomic) NSMutableDictionary *pools;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordExpiryQueue;

+ (id)sharedPool;
+ (void)performWithClientContext:(id)arg1 scope:(long long)arg2 block:(CDUnknownBlockType)arg3;

- (id)init;
- (id)acquireCacheWithContext:(id)arg1 scope:(long long)arg2;
- (void)releaseCache:(id)arg1;
- (void)_purgeRecordCachesForApplicationContainerPaths:(id)arg1 expiryDate:(id)arg2;
- (id)_poolForContext:(id)arg1;

@end

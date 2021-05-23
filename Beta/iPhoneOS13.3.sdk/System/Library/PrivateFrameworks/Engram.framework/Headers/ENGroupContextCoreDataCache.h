/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

@class NSPersistentContainer, NSString;

@protocol OS_dispatch_queue;

@interface ENGroupContextCoreDataCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSPersistentContainer *_container;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSPersistentContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)middlewareCacheCostForContext:(id)arg1;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(CDUnknownBlockType)arg2;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithType:(unsigned long long)arg1 containerURL:(id)arg2 queue:(id)arg3;
- (void)_groupFromCypher:(id)arg1 groupID:(id)arg2 applicationData:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initOnDiskCacheWithContainerURL:(id)arg1 Queue:(id)arg2;
- (id)initInMemoryCacheWithQueue:(id)arg1;

@end

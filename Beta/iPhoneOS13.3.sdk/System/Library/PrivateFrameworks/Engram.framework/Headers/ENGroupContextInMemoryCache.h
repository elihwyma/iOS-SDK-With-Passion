/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ENGroupContextInMemoryCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_groupIDtoGroup;
    NSMutableDictionary *_latestStableGroupIDToGroup;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *groupIDtoGroup;
@property (retain, nonatomic) NSMutableDictionary *latestStableGroupIDToGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (long long)middlewareCacheCostForContext:(id)arg1;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(CDUnknownBlockType)arg2;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

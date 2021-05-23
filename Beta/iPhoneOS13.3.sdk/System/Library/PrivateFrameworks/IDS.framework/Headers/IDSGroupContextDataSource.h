/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface IDSGroupContextDataSource : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_groupContextDataSource;
- (id)_groupContextCacheMiddleware;
- (void)groupContext:(id)arg1 upsertGroupWithInfo:(id)arg2 previousGroup:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)groupContext:(id)arg1 fetchGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)publicDataRepresentationForGroup:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupFromPublicDataRepresentation:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)middlewareCacheCostForContext:(id)arg1;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(CDUnknownBlockType)arg2;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

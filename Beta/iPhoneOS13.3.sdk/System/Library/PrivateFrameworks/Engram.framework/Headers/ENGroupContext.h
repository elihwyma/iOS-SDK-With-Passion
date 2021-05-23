/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

@class ENAccountIdentity, NSArray, NSMutableArray;

@protocol ENGroupContextDataSource, OS_dispatch_queue;

@interface ENGroupContext : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    ENAccountIdentity *_accountIdentity;
    NSMutableArray *_middlewares;
    id <ENGroupContextDataSource> _dataSource;
    NSArray *_allMiddlewares;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) ENAccountIdentity *accountIdentity;
@property (retain, nonatomic) NSMutableArray *middlewares;
@property (retain, nonatomic) id <ENGroupContextDataSource> dataSource;
@property (nonatomic, readonly) NSArray *allMiddlewares;

+ (id)_errorWithNotFoundItems:(id)arg1;
+ (id)_missingItemsInNotFoundError:(id)arg1 remainingErrors:(id *)arg2;

- (void)fetchGroupWithGroupID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didCreateGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didCacheGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_didReceiveDecryptionFailureForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAccountIdentity:(id)arg1 dataSource:(id)arg2 queue:(id)arg3;
- (void)appendMiddleware:(id)arg1;
- (void)cacheIncomingGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_groupFromPublicDataRepresentation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchGroupWithGroupID:(id)arg1 skipCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_publicDataRepresentationForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLatestGroupWithStableID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createGroupWithParticipants:(id)arg1 sharedApplicationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateGroup:(id)arg1 withParticipants:(id)arg2 sharedApplicationData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_qUpsertGroupWithParticipants:(id)arg1 previousGroup:(id)arg2 sharedApplicationData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_qCacheMiddlewares;
- (void)_cacheGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_qDidCreateGroup:(id)arg1;
- (void)_qDidCacheGroup:(id)arg1;
- (void)_qDidUpdateGroup:(id)arg1 withGroup:(id)arg2;
- (void)_qDidReceiveDecryptionFailureForGroup:(id)arg1;
- (void)_qDidReceiveRegistrationIdentityUpdate;
- (void)_qCacheGroup:(id)arg1 toMiddlewares:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_qCacheMiddlewaresContainedInCost:(long long)arg1;
- (void)_qFetchDataSourceGroupWithGroupID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_qFetchCachedGroupWithGroupID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_middlwareConformingToProtocol:(id)arg1;
- (id)_qObserverMiddlewares;
- (void)removeMiddleware:(id)arg1;
- (void)_didReceiveRegistrationIdentityUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchAllLocalKnownGroups:(CDUnknownBlockType)arg1;
- (void)_dropLocalCache:(CDUnknownBlockType)arg1;
- (void)_dropLocalCacheForGroupID:(id)arg1 compeltion:(CDUnknownBlockType)arg2;
- (void)_noteDecryptionFailureForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_noteRegistrationIdentityUpdate;

@end

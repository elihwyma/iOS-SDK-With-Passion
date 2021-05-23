/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCAssetManager, FCCKContentDatabase, FCOperationThrottler, FCTagRecordSource, NSCache, NSMutableDictionary, NSString;

@protocol FCCoreConfigurationManager;

@interface FCTagController : NSObject <Swift>

{
    FCCKContentDatabase *_contentDatabase;
    FCAssetManager *_assetManager;
    FCTagRecordSource *_tagRecordSource;
    id <FCCoreConfigurationManager> _configurationManager;
    NSCache *_fastCache;
    FCOperationThrottler *_tagPrefetchThrottler;
    NSMutableDictionary *_prefetchedTags;
}

@property (retain, nonatomic) FCCKContentDatabase *contentDatabase;
@property (retain, nonatomic) FCAssetManager *assetManager;
@property (retain, nonatomic) FCTagRecordSource *tagRecordSource;
@property (retain, nonatomic) id <FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) NSCache *fastCache;
@property (retain, nonatomic) FCOperationThrottler *tagPrefetchThrottler;
@property (retain, nonatomic) NSMutableDictionary *prefetchedTags;
@property (nonatomic) _Bool shouldPrefetchGlobalTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isTagAllowed:(id)arg1;
+ (_Bool)isTagAllowedInContentStoreFront:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (id)_cachedTagForTagID:(id)arg1 fastCacheOnly:(_Bool)arg2;
- (id)_cachedTagsForTagIDs:(id)arg1 fastCacheOnly:(_Bool)arg2;
- (void)fetchTagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)fetchOperationForTagsWithIDs:(id)arg1;
- (void)_fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)tagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 predicate:(CDUnknownBlockType)arg3;
- (id)tagsForTagIDs:(id)arg1 predicate:(CDUnknownBlockType)arg2;
- (void)_refreshTagsBasedOnAgeForTagIDs:(id)arg1;
- (void)saveTagsToCache:(id)arg1;
- (id)jsonEncodableObject;
- (void)tagsFetchOperation:(id)arg1 didFetchTags:(id)arg2;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (id)initWithContentDatabase:(id)arg1 assetManager:(id)arg2 tagRecordSource:(id)arg3 configurationManager:(id)arg4;
- (id)fastCachedTagForID:(id)arg1;
- (id)fastCachedTagsForIDs:(id)arg1;
- (id)slowCachedTagForID:(id)arg1;
- (id)slowCachedTagsForIDs:(id)arg1;
- (id)expectedFastCachedTagForID:(id)arg1;
- (id)fetchOperationForTagsWithIDs:(id)arg1 includeParents:(_Bool)arg2;
- (id)fetchOperationForTagsWithIDs:(id)arg1 includeChildren:(_Bool)arg2;
- (void)fetchTagForTagID:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)tagsForTagIDs:(id)arg1;

@end

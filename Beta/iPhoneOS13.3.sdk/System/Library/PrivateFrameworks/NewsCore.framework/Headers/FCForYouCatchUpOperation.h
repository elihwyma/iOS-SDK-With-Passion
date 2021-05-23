/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCEditorialOperation, FCForYouConfig, FCMyArticlesOperation, FCSpotlightOperationResult, FCTopStoriesOperation, FCTopStoriesOperationResult, FCVideoArticlesOperationResult, NFUnfairLock, NSArray, NSDictionary, NSError, NSHashTable, NSMapTable, NSOperationQueue;

@protocol FCChannelProviding;

@interface FCForYouCatchUpOperation : FCOperation

{
    long long _contentTypes;
    FCMyArticlesOperation *_myArticlesOperation;
    FCTopStoriesOperation *_topStoriesOperation;
    FCEditorialOperation *_editorialOperation;
    NSOperationQueue *_operationQueue;
    NSHashTable *_conditionWaiters;
    NFUnfairLock *_conditionWaitersLock;
}

@property (nonatomic) long long contentTypes;
@property (retain, nonatomic) FCMyArticlesOperation *myArticlesOperation;
@property (retain, nonatomic) FCTopStoriesOperation *topStoriesOperation;
@property (retain, nonatomic) FCEditorialOperation *editorialOperation;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSHashTable *conditionWaiters;
@property (retain, nonatomic) NFUnfairLock *conditionWaitersLock;
@property (copy, readonly) NSDictionary *feedContextByFeedID;
@property (copy, nonatomic, readonly) NSError *catchUpError;
@property (copy, nonatomic, readonly) FCForYouConfig *forYouConfig;
@property (copy, nonatomic, readonly) id <FCChannelProviding> topStoriesChannel;
@property (copy, nonatomic, readonly) FCTopStoriesOperationResult *topStoriesResult;
@property (copy, nonatomic, readonly) NSArray *trendingHeadlines;
@property (copy, nonatomic, readonly) NSArray *nonEditorialFeedItems;
@property (copy, nonatomic, readonly) NSMapTable *nonEditorialScoreProfiles;
@property (copy, nonatomic, readonly) FCVideoArticlesOperationResult *topVideosResult;
@property (copy, nonatomic, readonly) FCVideoArticlesOperationResult *moreVideosResult;
@property (copy, nonatomic, readonly) FCSpotlightOperationResult *spotlightResult;

+ (id)sharedCatchUpOperationForEdition:(id)arg1 contentTypes:(long long)arg2 configuration:(id)arg3 context:(id)arg4;

- (void)performOperation;
- (void)operationDidFinishWithError:(id)arg1;
- (id)waiterForContentTypes:(long long)arg1;
- (id)allNonEditorialFeedItemsAfterTransformation:(id)arg1;
- (id)orphanedEditorialHeadlinesAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2;
- (void)enumerateEditorialSectionsByRecencyAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)waiterForCondition:(id)arg1;
- (id)initWithContext:(id)arg1 configuration:(id)arg2 dateRange:(id)arg3 contentTypes:(long long)arg4 background:(_Bool)arg5;
- (void)_serviceConditionWaiters;
- (void)_addConditionWaiter:(id)arg1;
- (id)catchUpErrorForContentTypes:(long long)arg1;
- (id)allFeedItemsAfterTransformation:(id)arg1;

@end

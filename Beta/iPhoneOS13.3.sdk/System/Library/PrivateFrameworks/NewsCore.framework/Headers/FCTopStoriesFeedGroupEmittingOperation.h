/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTopStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (void)_performOperation;
- (void)performOperation;
- (id)headlinesLogFromHeadlinePairs:(id)arg1 includeScore:(_Bool)arg2;
- (id)headlinesLogFromHeadlines:(id)arg1 includeScore:(_Bool)arg2;
- (void)_selectHeadlinesFromMandatory:(id)arg1 optional:(id)arg2 publishDate:(id)arg3 articleMetadataByArticleID:(id)arg4 cursor:(id)arg5 isAllowedToCollapse:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_fetchHeadlinesForArticleIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_buildSupergroup;
- (void)_buildGroupWithCatchUpOperation:(id)arg1;
- (id)_selectPremiumHeadlinesFromHeadlinePairs:(id)arg1;
- (void)_headlinesFromMandatory:(id)arg1 optional:(id)arg2 articleIDs:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_filterHeadlines:(id)arg1 withArticleMetadata:(id)arg2;
- (id)_feedTransformationWithOtherArticleIDs:(id)arg1;
- (id)_personalizedFeedTransformationWithLimit:(unsigned long long)arg1 otherArticleIDs:(id)arg2 preselectedArticles:(id)arg3;
- (_Bool)hasSeenAllPreviousArticleIDs:(id)arg1;
- (id)headlineLogFromHeadline:(id)arg1 includeScore:(_Bool)arg2;

@end

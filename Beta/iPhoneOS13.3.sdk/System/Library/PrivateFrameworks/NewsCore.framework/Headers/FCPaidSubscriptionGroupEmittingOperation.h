/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class FCPaidSubscriptionCursor;

@interface FCPaidSubscriptionGroupEmittingOperation : FCFeedGroupEmittingOperation

@property (retain, nonatomic) FCPaidSubscriptionCursor *fromCursor;
@property (retain, nonatomic) FCPaidSubscriptionCursor *toCursor;
@property (retain, nonatomic) FCPaidSubscriptionCursor *resultCursor;

- (void)_performOperation;
- (void)performOperation;
- (_Bool)alwaysShowExpiredGroups;
- (void)_continueWithEnumerator:(id)arg1 groupedFeedItems:(id)arg2 validPurchasedTagIDs:(id)arg3;
- (void)_constructGroupForChannelWithIdentifier:(id)arg1 usingFeedItems:(id)arg2 feedFilterOptions:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_constructClassicGroupForChannelWithIdentifier:(id)arg1 usingFeedItems:(id)arg2 feedFilterOptions:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_constructSupergroupForChannelWithGroupConfig:(id)arg1 forYouConfig:(id)arg2 usingFeedItems:(id)arg3 feedFilterOptions:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)_createGroupForChannel:(id)arg1 headlines:(id)arg2;
- (void)_fetchHeadlinesForFeedItems:(id)arg1 feedContextByFeedID:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)_feedItemsTransformationWithOptions:(long long)arg1;
- (id)_additionalFeedItemsTransformationLimitedToNumberOfFeedItems:(unsigned long long)arg1 withOptions:(long long)arg2;
- (void)_fetchAdditionalFeedItemsForChannel:(id)arg1 feedRange:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_fetchTagForSourceChannelIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)unlimitedBackfill;

@end

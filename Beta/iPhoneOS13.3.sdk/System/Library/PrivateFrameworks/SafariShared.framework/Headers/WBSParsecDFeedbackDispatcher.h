/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSString;

@protocol OS_dispatch_queue;

@interface WBSParsecDFeedbackDispatcher : NSObject

{
    NSMapTable *_queriesToDictionariesFromSearchTypesToStartSearchFeedbacks;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
    NSObject<OS_dispatch_queue> *_queriesToDictionariesMappingQueue;
    NSArray *_feedbackListeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithSession:(id)arg1;
- (void)sendCrowdsourcedAutoFillFeedback:(id)arg1;
- (void)postFeedback:(id)arg1 forQueryID:(long long)arg2;
- (void)_postFeedbackOnFeedbackQueue:(id)arg1 forQueryID:(long long)arg2;
- (void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(_Bool)arg2 method:(long long)arg3 doesMatchSiriSuggestion:(_Bool)arg4;
- (id)_takeStartSearchFeedbackForSearchOfType:(long long)arg1 forQuery:(id)arg2;
- (void)postFeedback:(id)arg1;
- (void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 urlString:(id)arg3 headers:(id)arg4 endpoint:(unsigned long long)arg5;
- (void)_setStartSearchFeedback:(id)arg1 forSearchOfType:(long long)arg2 withQuery:(id)arg3;
- (id)_customFeedbackOfType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1;
- (void)searchViewDisappearedBecauseOfEvent:(long long)arg1;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 isSafariReaderAvailable:(_Bool)arg2;
- (void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 forEvent:(long long)arg3;
- (void)userDidCancelSession;
- (void)userDidCancelSession:(long long)arg1;
- (void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 responseSize:(long long)arg3 statusCode:(long long)arg4 networkTimingData:(id)arg5;
- (void)didReceiveLocalResultsForQuery:(id)arg1;
- (void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(_Bool)arg2 method:(long long)arg3;
- (void)userTypedURLDirectlyForQuery:(id)arg1;
- (void)didGenerateCompletionListItemsWithRankingObserver:(id)arg1;
- (void)didReceiveParsecResultsAfterTimeout:(id)arg1;
- (void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 endpoint:(unsigned long long)arg3;
- (void)userTypedGoToSearch:(id)arg1 endpoint:(unsigned long long)arg2 forQueryID:(unsigned long long)arg3;
- (void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1;
- (void)sendAppLaunchFeedback;
- (void)sendAppQuitFeedback;
- (void)sendAppLostFocusFeedback;
- (void)sendNewWindowFeedback;
- (void)sendNewTabFeedback;
- (void)sendWindowCloseByKeyboardFeedback;
- (void)sendWindowCloseByMouseFeedback;
- (void)sendWindowMiniaturizeByKeyboardFeedback;
- (void)sendWindowMiniaturizeByMouseFeedback;
- (void)sendSmartSearchFieldClickedFeedbackWithReaderAvailable:(_Bool)arg1;
- (void)didRankSections:(id)arg1 blendingDuration:(double)arg2 feedbackForHiddenAndDuplicateResults:(id)arg3;
- (void)sendClearInputFeedbackWithTriggerEvent:(unsigned long long)arg1;

@end

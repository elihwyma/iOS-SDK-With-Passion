/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSString, PARSession;

@interface PRSFeedbackProxy : NSObject

{
    PARSession *_listener;
}

@property (weak, nonatomic) PARSession *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)cardViewDidAppear:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didGradeResultRelevancy:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)didAppendLateSections:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)didReportUserResponseFeedback:(id)arg1;

@end

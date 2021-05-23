/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, SFRankingFeedback;

@protocol WBSCompletionListRankingObserverDelegate, _CompletionListRankingObserverFeedbackGenerator;

@interface WBSCompletionListRankingObserver : NSObject

{
    id <_CompletionListRankingObserverFeedbackGenerator> _feedbackGenerator;
    id <WBSCompletionListRankingObserverDelegate> _delegate;
}

@property (weak, nonatomic) id <WBSCompletionListRankingObserverDelegate> delegate;
@property (nonatomic, readonly) SFRankingFeedback *rankingFeedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_createFeedbackGenerator;
- (void)didBeginRanking;
- (void)didEndRanking;
- (void)didBeginSectionWithBundleIdentifier:(id)arg1;
- (void)didAddItem:(id)arg1 hidingOutrankedResults:(id)arg2 hidingDuplicateResults:(id)arg3;
- (void)removeAllSectionsAndItems;
- (Class)_feedbackGeneratorClass;
- (unsigned long long)completionListRankingObserverFeedbackGenerator:(id)arg1 frequentlyVisitedSitesIndexOfItem:(id)arg2 hidingItem:(id)arg3;
- (void)didAddItem:(id)arg1;

@end

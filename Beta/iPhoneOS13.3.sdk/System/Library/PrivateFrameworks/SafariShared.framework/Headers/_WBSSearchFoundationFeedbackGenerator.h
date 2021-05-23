/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSString, SFRankingFeedback;

@protocol _CompletionListRankingObserverFeedbackGeneratorDelegate;

@interface _WBSSearchFoundationFeedbackGenerator : NSObject

{
    NSDate *_rankingStartDate;
    NSMutableArray *_sectionRankingFeedbackObjects;
    NSString *_currentSectionBundleIdentifier;
    NSMutableArray *_currentSectionResultRankingFeedbackObjects;
    SFRankingFeedback *_rankingFeedback;
}

@property (nonatomic, readonly) SFRankingFeedback *rankingFeedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <_CompletionListRankingObserverFeedbackGeneratorDelegate> delegate;

- (id)init;
- (void)didBeginRanking;
- (void)didEndRanking;
- (void)didBeginSectionWithBundleIdentifier:(id)arg1;
- (void)didAddItem:(id)arg1 hidingOutrankedResults:(id)arg2 hidingDuplicateResults:(id)arg3;
- (void)removeAllSectionsAndItems;
- (void)_commitPreviousSectionIfNecessary;

@end

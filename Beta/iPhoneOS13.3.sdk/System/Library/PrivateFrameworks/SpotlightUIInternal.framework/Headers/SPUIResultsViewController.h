/*
 Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

#import <SearchUI/SearchUIResultsViewController.h>

@class NSArray, SFResultSection, SFSearchResult;

@protocol SPUIResultsViewDelegate;

@interface SPUIResultsViewController : SearchUIResultsViewController

{
    unsigned long long _startTime;
    _Bool _hasResultsWaitingToUpdate;
    CDUnknownBlockType didFinishGettingAllResultsHandler;
    NSArray *_resultSections;
    SFResultSection *_suggestionsSection;
    SFResultSection *_searchThroughSection;
    unsigned long long _previousQueryId;
}

@property (retain) NSArray *resultSections;
@property (retain) SFResultSection *suggestionsSection;
@property (readonly) SFSearchResult *actualSearchSuggestionResult;
@property _Bool hasResultsWaitingToUpdate;
@property (retain) SFResultSection *searchThroughSection;
@property unsigned long long previousQueryId;
@property (weak, nonatomic) id <SPUIResultsViewDelegate> delegate;
@property (copy, nonatomic) CDUnknownBlockType didFinishGettingAllResultsHandler;

- (id)initWithSearchModel:(id)arg1;
- (void)searchUpdatedWithString:(id)arg1 tokenEntity:(id)arg2 queryId:(unsigned long long)arg3 wantsCompletions:(_Bool)arg4;
- (void)clearSuggestionSection;
- (void)_truncateResultsSectionToFit;
- (void)_pushSectionsUpdate;
- (void)searchAgentUpdatedResults:(id)arg1;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentFinishedQueryWithoutAdditionalResults:(id)arg1;
- (_Bool)isResultOriginalSearchSuggestion:(id)arg1;
- (_Bool)_hasRealSuggestions;

@end

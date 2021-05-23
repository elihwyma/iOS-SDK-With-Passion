/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKSearchController.h>

@class NSArray, NSSet, _PSSuggester;

@interface CKConversationSearchController : CKSearchController

{
    _Bool _gotResults;
    _Bool _searchTerminated;
    NSSet *_intermediaryResults;
    _PSSuggester *_zkwSuggester;
    NSArray *_currentZKWSuggestions;
}

@property (nonatomic) _Bool gotResults;
@property (retain, nonatomic) NSSet *intermediaryResults;
@property (nonatomic) _Bool searchTerminated;
@property (retain, nonatomic) _PSSuggester *zkwSuggester;
@property (retain, nonatomic) NSArray *currentZKWSuggestions;

+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (Class)cellClass;
+ (_Bool)supportsQuicklook;
+ (_Bool)useRecencyRankedSearchForMode:(unsigned long long)arg1;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (_Bool)supportsMenuInteraction;

- (double)interGroupSpacing;
- (void)didSelectResult:(id)arg1;
- (id)filterQueries;
- (id)fetchAttributes;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)queryAttributesForText:(id)arg1;
- (id)queryResultsForItems:(id)arg1;
- (_Bool)applyLayoutMarginsToLayoutGroup;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (_Bool)wantsHeaderSection;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (struct NSDirectionalEdgeInsets)additionalGroupInsets;
- (void)searchEnded;
- (id)rankingQueriesWithText:(id)arg1;
- (id)_appendRecencyToRankingQuery:(id)arg1 hours:(unsigned long long)arg2;
- (void)_searchZKWWithText:(id)arg1 mode:(unsigned long long)arg2;
- (void)_searchSpotlightWithText:(id)arg1 mode:(unsigned long long)arg2;
- (id)_sortedAndRankedItemsWithItems:(id)arg1;

@end

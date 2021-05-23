/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <HelpKit/HLPRemoteDataController.h>

@class CSPrivateSearchableIndex, CSSearchQuery, HLPHelpBookController, NSArray, NSDictionary, NSMutableArray;

@interface HLPHelpSearchIndexController : HLPRemoteDataController

{
    CSSearchQuery *_spotlightSearchQuery;
    _Bool _useCSSearch;
    HLPHelpBookController *_helpBookController;
    NSDictionary *_searchIndex;
    CSPrivateSearchableIndex *_privateSearchableIndex;
    NSMutableArray *_spotlightSearchScores;
}

@property (retain, nonatomic) CSPrivateSearchableIndex *privateSearchableIndex;
@property (retain, nonatomic) NSMutableArray *spotlightSearchScores;
@property (nonatomic) _Bool useCSSearch;
@property (retain, nonatomic) HLPHelpBookController *helpBookController;
@property (retain, nonatomic) NSDictionary *searchIndex;
@property (nonatomic, readonly) NSArray *spotlightSearchResults;

+ (id)_stopwordsForLanguage:(id)arg1;

- (void)dealloc;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)resultsWithSearchText:(id)arg1 localeCode:(id)arg2 searchTerms:(id *)arg3;
- (void)cancelSpotlightSearch;
- (void)CSSearchForSearchText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (id)searchTermsForSearchText:(id)arg1 localeCode:(id)arg2;
- (id)searchTree:(id)arg1 forQueryWord:(id)arg2 withMaxDepth:(int)arg3;
- (id)mergeDictionary:(id)arg1 withDictionary:(id)arg2;
- (id)getAllIdentifiersFromTree:(id)arg1 withMaxDepth:(int)arg2;
- (id)_tokenizeSearchTerm:(id)arg1;
- (id)_strippedSearchTermFromSearchTerm:(id)arg1;
- (double)_relevanceScore:(double)arg1 forRankingQueries:(id)arg2;
- (id)_csQueryStringForSearchTerm:(id)arg1;
- (id)_rankingQueriesForSearchTerm:(id)arg1;
- (id)_fetchAttributesForCSSearchQuery;
- (void)_hpdResultsFromCSSearchableItems:(id)arg1 rankingQueries:(id)arg2;

@end

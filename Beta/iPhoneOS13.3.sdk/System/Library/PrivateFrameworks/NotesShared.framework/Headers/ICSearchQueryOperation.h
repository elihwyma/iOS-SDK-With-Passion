/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSOperation.h>

@class ICSearchQuery, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface ICSearchQueryOperation : NSOperation

{
    _Bool _shouldPerformRankingComparison;
    _Bool _modernResultsOnly;
    _Bool _useRankingQueries;
    _Bool _performNLSearch;
    _Bool _allowEmptySearchString;
    CDUnknownBlockType _foundItemsHandler;
    NSMutableArray *_results;
    NSError *_error;
    long long _requestIndex;
    ICSearchQuery *_defaultQuery;
    ICSearchQuery *_substringQuery;
    ICSearchQuery *_nlQuery;
    ICSearchQuery *_spellingQuery;
    NSMutableArray *_relatedWordQueries;
    NSMutableDictionary *_resultsDictionary;
    NSMutableDictionary *_rankingScores;
    NSMutableDictionary *_matchedFields;
    NSMutableDictionary *_isPrefixMatch;
    NSMutableDictionary *_relevancesBitField;
    NSMutableDictionary *_modificationDateBucket;
    NSMutableDictionary *_rankComparison;
    NSString *_searchString;
    NSString *_suggestionsQueryString;
    unsigned long long _rankingStrategy;
}

@property (retain, nonatomic) ICSearchQuery *defaultQuery;
@property (retain, nonatomic) ICSearchQuery *substringQuery;
@property (retain, nonatomic) ICSearchQuery *nlQuery;
@property (retain, nonatomic) ICSearchQuery *spellingQuery;
@property (retain, nonatomic) NSMutableArray *relatedWordQueries;
@property (retain, nonatomic) NSMutableDictionary *resultsDictionary;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSMutableDictionary *rankingScores;
@property (retain, nonatomic) NSMutableDictionary *matchedFields;
@property (retain, nonatomic) NSMutableDictionary *isPrefixMatch;
@property (retain, nonatomic) NSMutableDictionary *relevancesBitField;
@property (retain, nonatomic) NSMutableDictionary *modificationDateBucket;
@property (retain, nonatomic) NSMutableDictionary *rankComparison;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSString *suggestionsQueryString;
@property (nonatomic) _Bool useRankingQueries;
@property (nonatomic) _Bool performNLSearch;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) _Bool allowEmptySearchString;
@property (nonatomic) _Bool modernResultsOnly;
@property (nonatomic) unsigned long long rankingStrategy;
@property (copy, nonatomic) CDUnknownBlockType foundItemsHandler;
@property (nonatomic) _Bool shouldPerformRankingComparison;
@property (nonatomic) long long requestIndex;

+ (void)initialize;
+ (id)prefixMatchingQueryStringForSearchString:(id)arg1;
+ (id)substringMatchingQueryStringForSearchString:(id)arg1;
+ (id)queryStringForSearchString:(id)arg1 queryFields:(id)arg2 matchType:(unsigned char)arg3;
+ (void)nlSearchQueryWithSearchString:(id)arg1 queryString:(id *)arg2 rankingQueries:(id *)arg3 highlightString:(id *)arg4;
+ (id)queryFields;
+ (id)nlpSerialQueue;
+ (void *)nlpParser;
+ (id)highlightStringForAttributedInputs:(id)arg1;
+ (id)exactMatchingQueryStringForTitleSearchString:(id)arg1;

- (id)init;
- (void)cancel;
- (void)main;
- (id)initWithUserInput:(id)arg1 useRankingQueries:(_Bool)arg2 performNLSearch:(_Bool)arg3 modernResultsOnly:(_Bool)arg4;
- (id)initWithSearchString:(id)arg1 useRankingQueries:(_Bool)arg2 performNLSearch:(_Bool)arg3 suggestions:(id)arg4 modernResultsOnly:(_Bool)arg5;
- (id)suggestionsQueryStringFromSuggestions:(id)arg1;
- (id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 modernResultsOnly:(_Bool)arg3;
- (id)jointQueryWithSuggestions:(id)arg1;
- (void)runQuery:(id)arg1;
- (unsigned long long)countOfNonSpaceCharsInSearchString;
- (void)performPrefixAndSubstringQueries;
- (void)performSpellingQueryIfNeeded;
- (void)performRelatedWordQueriesIfNeeded;
- (id)sortedSearchableItemsOfIdentifiers:(id)arg1;
- (id)initWithUserInput:(id)arg1 useRankingQueries:(_Bool)arg2 performNLSearch:(_Bool)arg3;
- (id)initWithSearchString:(id)arg1 useRankingQueries:(_Bool)arg2 performNLSearch:(_Bool)arg3 suggestions:(id)arg4;
- (id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2;
- (id)suggestionsQueryStringFromUserInput:(id)arg1;
- (double)rankingScoreForSearchableItem:(id)arg1;
- (unsigned long long)matchedFieldForSearchableItem:(id)arg1;
- (unsigned long long)relevanceBitFieldForSearchableItem:(id)arg1;
- (id)rankComparisonForSearchableItem:(id)arg1;

@end

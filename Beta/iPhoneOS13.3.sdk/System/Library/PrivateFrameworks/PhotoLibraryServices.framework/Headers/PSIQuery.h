/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, PSIParse, PSITokenizer;

@protocol PSIQueryDelegate;

@interface PSIQuery : NSObject

{
    id <PSIQueryDelegate> _delegate;
    PSIParse *_baseParse;
    _Bool _baseParseCouldHaveResults;
    NSArray *_implicitelyTokenizedParses;
    _Bool _implicitlyTokenizedParsesCouldHaveResults;
    NSArray *_datedParses;
    NSArray *_implicitlyTokenizedDatedParses;
    NSArray *_wordEmbeddingParses;
    NSArray *_identifierTokens;
    NSMutableDictionary *_groupIdsByTokenKey;
    NSDictionary *_substitutionsByStringToken;
    NSArray *_socialGroupPersonIdentifiers;
    _Atomic _Bool _didStart;
    _Atomic _Bool _isCanceled;
    NSMutableSet *_socialGroupExtendedAssetIds;
    NSMutableSet *_socialGroupExtendedCollectionIds;
    _Bool _usesPrefixBasedWordEmbedding;
    _Bool _calculateTokenCounts;
    _Bool _enableImplicitTokenization;
    _Bool _implicitTokenizationUsePrefixMatch;
    _Bool _implicitTokenizationLastTokenUsesPrefixMatch;
    _Bool _preventUnnecessaryImplicitTokenization;
    _Bool _exactMatchIgnoreUntokenizedCharacters;
    _Bool _lastImplicitTokenAllowsWordEmbeddings;
    _Bool _useWildcardText;
    NSArray *_queryTokens;
    NSString *_searchText;
    unsigned long long _wordEmbeddingMode;
    NSDictionary *_substitutions;
    unsigned long long _numberOfNextKeywordSuggestionToProcess;
    NSArray *_nextKeywordSuggestions;
    NSArray *_dedupedGroupResults;
}

@property (nonatomic, readonly) _Bool useWildcardText;
@property (retain, nonatomic) NSDictionary *substitutions;
@property (retain, nonatomic) NSArray *nextKeywordSuggestions;
@property (copy, nonatomic) NSArray *dedupedGroupResults;
@property (copy, nonatomic) NSSet *socialGroupExtendedAssetIds;
@property (copy, nonatomic) NSSet *socialGroupExtendedCollectionIds;
@property (nonatomic, readonly) PSITokenizer *tokenizer;
@property (copy, nonatomic, readonly) NSArray *queryTokens;
@property (copy, nonatomic, readonly) NSString *searchText;
@property (readonly, getter=isCanceled) _Bool canceled;
@property (nonatomic) unsigned long long wordEmbeddingMode;
@property (nonatomic) _Bool usesPrefixBasedWordEmbedding;
@property (nonatomic) unsigned long long numberOfNextKeywordSuggestionToProcess;
@property (nonatomic) _Bool calculateTokenCounts;
@property (nonatomic) _Bool enableImplicitTokenization;
@property (nonatomic) _Bool implicitTokenizationUsePrefixMatch;
@property (nonatomic) _Bool implicitTokenizationLastTokenUsesPrefixMatch;
@property (nonatomic) _Bool preventUnnecessaryImplicitTokenization;
@property (nonatomic) _Bool exactMatchIgnoreUntokenizedCharacters;
@property (nonatomic) _Bool lastImplicitTokenAllowsWordEmbeddings;
@property (nonatomic, readonly) _Bool implicitTokenizationIncludeBaseParseResults;

+ (void)bootstrap;
+ (struct _NSRange)searchTextExtendedRangeForParse:(id)arg1;
+ (_Bool)enumerateDatedParsesWithParse:(id)arg1 currentTokenIndex:(unsigned long long)arg2 potentialComboAttributes:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (_Bool)tokenIsEligibleForDateParsing:(id)arg1;
+ (id)dateAttributesFromToken:(id)arg1;
+ (id)dateFilterWithAttributes:(id)arg1 andAttributes:(id)arg2;
+ (id)dateFilterByCombiningDateFilter:(id)arg1 withDateFilter:(id)arg2;
+ (id)parsedDatesFromText:(id)arg1;
+ (id)datedParsesWithParses:(id)arg1;
+ (id)dateFilterWithAttributes:(id)arg1;

- (id)description;
- (void)cancel;
- (void)bootstrap;
- (_Bool)_enumerateImplicitlyTokenizedParsesWithBaseParse:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)implicitlyTokenizedParsesWithBaseParse:(id)arg1;
- (id)initWithQueryTokens:(id)arg1 searchText:(id)arg2 useWildcardText:(_Bool)arg3 delegate:(id)arg4;
- (void)runWithResultsHandler:(CDUnknownBlockType)arg1;
- (struct __CFSet *)_idsOfGroupsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(_Bool)arg3;
- (struct __CFSet *)_idsOfGroupsMatchingToken:(id)arg1;
- (void)processImplicitTokenization;
- (void)processDates;
- (void)processWordEmbeddings;
- (_Bool)recursiveAddToGroupResults:(id)arg1 aggregate:(id)arg2 atIndex:(unsigned long long)arg3 outOf:(unsigned long long)arg4 inGroupArrays:(id)arg5 dateFilter:(id)arg6 datedTokens:(id)arg7;
- (id)processParse:(id)arg1;
- (void)computeSuggestions;
- (void)enumerateParsesWithMode:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)suggestionWhitelistedScenes;
- (void)_postProcessPersonGroupsInGroupArrays:(id)arg1;

@end

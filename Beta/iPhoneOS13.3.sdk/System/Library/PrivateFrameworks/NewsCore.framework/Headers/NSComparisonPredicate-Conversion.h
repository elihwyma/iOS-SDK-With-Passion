/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (Conversion)

- (unsigned long long)_comparisonOptionForString:(id)arg1;
- (id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id *)arg2;
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id *)arg2;

@end

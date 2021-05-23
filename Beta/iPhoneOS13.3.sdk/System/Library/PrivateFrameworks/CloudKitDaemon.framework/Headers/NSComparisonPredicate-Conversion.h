/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (Conversion)

- (unsigned long long)_comparisonOptionForString:(id)arg1;
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id *)arg2;
- (id)_nearFilterWithKey:(id)arg1 location:(id)arg2 radius:(double)arg3 translator:(id)arg4;
- (id)_parseNearFiltersWithTranslator:(id)arg1 withError:(id *)arg2;

@end

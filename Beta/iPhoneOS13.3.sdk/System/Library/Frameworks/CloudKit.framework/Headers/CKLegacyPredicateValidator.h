/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKPredicateValidator.h>

__attribute__((visibility("hidden")))
@interface CKLegacyPredicateValidator : CKPredicateValidator

- (void)validate:(id)arg1;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (void)validateCompoundPredicate:(id)arg1;
- (void)validateComparisonPredicate:(id)arg1;
- (_Bool)validateFullTextSearchPredicate:(id)arg1;
- (_Bool)validateNearPredicate:(id)arg1;
- (_Bool)validateContainsPredicate:(id)arg1;
- (_Bool)validateInPredicate:(id)arg1;
- (_Bool)validateContainsAnyPredicate:(id)arg1;
- (_Bool)validateContainsAllInPredicate:(id)arg1;
- (_Bool)validateBeginsWithPredicate:(id)arg1;
- (_Bool)validateBetweenPredicate:(id)arg1;
- (_Bool)validateBasicOperatorPredicate:(id)arg1;
- (unsigned long long)_comparisonOptionForString:(id)arg1;

@end

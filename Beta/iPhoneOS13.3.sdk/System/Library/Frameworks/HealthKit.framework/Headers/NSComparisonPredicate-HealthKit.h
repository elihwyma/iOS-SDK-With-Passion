/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (HealthKit)

+ (id)hk_inequalityPredicateWithKey:(id)arg1 value:(id)arg2 ascending:(_Bool)arg3;
+ (id)hk_equalityPredicateWithKey:(id)arg1 value:(id)arg2;

- (id)hk_filterRepresentationForDataTypes:(id)arg1 filterClasses:(id)arg2;
- (id)_parseComparisonPredicateWithKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 filterClasses:(id)arg5;

@end

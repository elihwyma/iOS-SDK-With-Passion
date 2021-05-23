/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (SQLitePredicate)

- (id)_sqlPredicateForSelect;
- (id)_checkTypeForValue:(id)arg1 inKeyPath:(id)arg2;

@end

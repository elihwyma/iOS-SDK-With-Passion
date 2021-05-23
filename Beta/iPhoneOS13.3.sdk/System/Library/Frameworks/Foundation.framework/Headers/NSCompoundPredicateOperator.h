/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPredicateOperator.h>

@interface NSCompoundPredicateOperator : NSPredicateOperator

+ (id)notPredicateOperator;
+ (id)andPredicateOperator;
+ (id)orPredicateOperator;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)symbol;
- (id)predicateFormat;
- (_Bool)evaluatePredicates:(id)arg1 withObject:(id)arg2 substitutionVariables:(id)arg3;
- (_Bool)evaluatePredicates:(id)arg1 withObject:(id)arg2;

@end

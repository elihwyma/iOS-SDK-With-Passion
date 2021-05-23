/*
 Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface ATXActionCriteriaPredicateChecker : NSObject

{
    NSSet *_propertyNames;
    _Bool _ok;
}

- (id)initWithObject:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (_Bool)isValid:(id)arg1;

@end

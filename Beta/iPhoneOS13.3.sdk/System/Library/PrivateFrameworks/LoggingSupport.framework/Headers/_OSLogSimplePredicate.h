/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSPredicate, NSSet;

__attribute__((visibility("hidden")))
@interface _OSLogSimplePredicate : NSObject

{
    NSSet *_keys;
    NSSet *_operators;
    NSMutableArray *_stack;
    NSPredicate *_predicate;
}

@property (nonatomic, readonly) NSPredicate *predicate;

- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (void)processCompoundPredicate:(id)arg1;
- (id)initWithPredicate:(id)arg1 supportedKeys:(id)arg2 supportedOperators:(id)arg3;
- (_Bool)isSupportedExpression:(id)arg1;

@end

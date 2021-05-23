/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSPredicate;

__attribute__((visibility("hidden")))
@interface _OSLogPredicateMapper : NSObject

{
    int _pass;
    NSMutableArray *_validationErrors;
    unsigned long long _flags;
    NSPredicate *_predicate;
    NSMutableArray *_stack;
}

@property (retain, nonatomic) NSMutableArray *stack;
@property (nonatomic, readonly) NSMutableSet *validKeyPaths;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) NSPredicate *mappedPredicate;
@property (nonatomic, readonly) NSArray *validationErrors;

- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)initWithPredicate:(id)arg1 andValidate:(_Bool)arg2;
- (id)mapKeywordToConstantExpression:(id)arg1 keywordMap:(id)arg2;
- (id)mapEventTypeExpression:(id)arg1;
- (id)mapMessageTypeExpression:(id)arg1;
- (id)mapSignpostScopeExpression:(id)arg1;
- (id)mapSignpostTypeExpression:(id)arg1;
- (void)mapLeftExpression:(id *)arg1 andRightExpression:(id *)arg2;
- (void)processComparisonPredicate:(id)arg1;
- (void)processCompoundPredicate:(id)arg1;
- (void)validateExpression:(id)arg1;

@end

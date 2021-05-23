/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITargetContentIdentifierPredicateValidator : NSObject

{
    NSString *_compileTimeIssues;
}

- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (_Bool)validatePredicate:(id)arg1 compileTimeIssues:(id *)arg2 runTimeIssues:(id *)arg3;

@end

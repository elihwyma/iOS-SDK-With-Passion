/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSSQLIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLSubqueryExpressionIntermediatePredicateVisitor : NSObject

{
    NSSQLIntermediate *_scope;
    _Bool _foundKeypath;
}

- (void)dealloc;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (id)initWithScope:(id)arg1;
- (_Bool)checkPredicate:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLPredicateAnalyser : NSObject

{
    _Bool _compoundPredicate;
    NSMutableArray *_keys;
    NSMutableArray *_allModifierPredicates;
    NSMutableArray *_setExpressions;
    NSMutableArray *_subqueries;
}

- (id)init;
- (void)dealloc;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (id)allModifierPredicates;
- (id)keypaths;
- (id)subqueries;
- (id)setExpressions;

@end

/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSExpression.h>

@class NSPredicate;

@interface NSSubqueryExpression : NSExpression

{
    NSExpression *_collection;
    NSExpression *_variableExpression;
    NSPredicate *_subpredicate;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicate;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)collection;
- (id)variable;
- (void)allowEvaluation;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)initWithExpression:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;
- (_Bool)_shouldUseParensWithDescription;
- (id)initWithExpression:(id)arg1 usingIteratorExpression:(id)arg2 predicate:(id)arg3;
- (id)variableExpression;

@end

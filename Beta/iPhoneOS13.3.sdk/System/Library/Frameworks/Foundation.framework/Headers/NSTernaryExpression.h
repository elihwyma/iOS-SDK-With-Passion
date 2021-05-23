/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSExpression.h>

@class NSPredicate;

@interface NSTernaryExpression : NSExpression

{
    NSPredicate *_predicate;
    NSExpression *_trueExpression;
    NSExpression *_falseExpression;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicate;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)allowEvaluation;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)initWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;
- (id)trueExpression;
- (id)falseExpression;

@end

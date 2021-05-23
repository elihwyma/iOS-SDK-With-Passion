/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSExpression.h>

@interface NSSetExpression : NSExpression

{
    NSExpression *_left;
    NSExpression *_right;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)leftExpression;
- (id)rightExpression;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)allowEvaluation;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;

@end

/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSExpression.h>

@class NSVariableExpression;

__attribute__((visibility("hidden")))
@interface NSVariableAssignmentExpression : NSExpression

{
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)variable;
- (void)allowEvaluation;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2;
- (id)subexpression;
- (id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2;
- (id)assignmentVariable;

@end

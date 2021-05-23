/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSExpression.h>

__attribute__((visibility("hidden")))
@interface NSAggregateExpression : NSExpression

{
    id _collection;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)constantValue;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)collection;
- (void)allowEvaluation;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)initWithCollection:(id)arg1;

@end

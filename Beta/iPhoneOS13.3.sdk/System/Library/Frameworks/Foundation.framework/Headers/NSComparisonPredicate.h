/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPredicate.h>

@class NSExpression, NSPredicateOperator;

@interface NSComparisonPredicate : NSPredicate

{
    void *_reserved2;
    NSPredicateOperator *_predicateOperator;
    NSExpression *_lhs;
    NSExpression *_rhs;
}

@property (readonly) unsigned long long predicateOperatorType;
@property (readonly) unsigned long long comparisonPredicateModifier;
@property (retain, readonly) NSExpression *leftExpression;
@property (retain, readonly) NSExpression *rightExpression;
@property (readonly) SEL customSelector;
@property (readonly) unsigned long long options;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;
+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)generateMetadataDescription;
- (void)allowEvaluation;
- (id)predicateFormat;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
- (id)predicateOperator;
- (id)keyPathExpressionForString:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)_acceptOperator:(id)arg1 flags:(unsigned long long)arg2;
- (void)_acceptExpressions:(id)arg1 flags:(unsigned long long)arg2;
- (void)setPredicateOperator:(id)arg1;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)predicateWithSubstitutionVariables:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSArray, NSPredicate, NSString;

@interface NSExpression : NSObject <Swift>

{
    struct _expressionFlags {
        unsigned int _evaluationBlocked:1;
        unsigned int _reservedExpressionFlags:31;
    } _expressionFlags;
    unsigned int reserved;
    unsigned long long _expressionType;
}

@property (readonly) unsigned long long expressionType;
@property (retain, readonly) id constantValue;
@property (copy, readonly) NSString *keyPath;
@property (copy, readonly) NSString *function;
@property (copy, readonly) NSString *variable;
@property (copy, readonly) NSExpression *operand;
@property (copy, readonly) NSArray *arguments;
@property (retain, readonly) id collection;
@property (copy, readonly) NSPredicate *predicate;
@property (copy, readonly) NSExpression *leftExpression;
@property (copy, readonly) NSExpression *rightExpression;
@property (copy, readonly) NSExpression *trueExpression;
@property (copy, readonly) NSExpression *falseExpression;
@property (copy, readonly) CDUnknownBlockType expressionBlock;

+ (_Bool)supportsSecureCoding;
+ (id)_newKeyPathExpressionForString:(id)arg1;
+ (id)expressionWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;
+ (id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)expressionWithFormat:(id)arg1;
+ (id)expressionForConstantValue:(id)arg1;
+ (id)expressionForEvaluatedObject;
+ (id)expressionForVariable:(id)arg1;
+ (id)expressionForSymbolicString:(id)arg1;
+ (id)expressionForAggregate:(id)arg1;
+ (id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;
+ (id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
+ (id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2;
+ (id)expressionForConditional:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;
+ (id)expressionForKeyPath:(id)arg1;
+ (id)expressionForFunction:(id)arg1 arguments:(id)arg2;
+ (id)expressionForUnionSet:(id)arg1 with:(id)arg2;
+ (id)expressionForIntersectSet:(id)arg1 with:(id)arg2;
+ (id)expressionForMinusSet:(id)arg1 with:(id)arg2;
+ (id)expressionForBlock:(CDUnknownBlockType)arg1 arguments:(id)arg2;
+ (id)expressionForAnyKey;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (SEL)selector;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)allowEvaluation;
- (id)predicateFormat;
- (_Bool)_allowsEvaluation;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)initWithExpressionType:(unsigned long long)arg1;
- (id)subexpression;
- (_Bool)_shouldUseParensWithDescription;

@end

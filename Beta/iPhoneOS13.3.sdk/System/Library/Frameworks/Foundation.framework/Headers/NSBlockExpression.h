/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSExpression.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSBlockExpression : NSExpression

{
    CDUnknownBlockType _block;
    NSArray *_arguments;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)arguments;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (CDUnknownBlockType)expressionBlock;

@end

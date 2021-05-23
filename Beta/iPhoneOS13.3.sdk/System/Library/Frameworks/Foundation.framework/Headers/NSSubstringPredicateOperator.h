/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSStringPredicateOperator.h>

@interface NSSubstringPredicateOperator : NSStringPredicateOperator

{
    unsigned long long _position;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (SEL)selector;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)symbol;
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 position:(unsigned long long)arg4;
- (unsigned long long)position;

@end

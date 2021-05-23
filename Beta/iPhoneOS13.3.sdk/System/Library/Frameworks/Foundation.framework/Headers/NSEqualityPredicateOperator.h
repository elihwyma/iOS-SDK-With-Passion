/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPredicateOperator.h>

@interface NSEqualityPredicateOperator : NSPredicateOperator

{
    _Bool _negate;
    unsigned long long _options;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (void)_setOptions:(unsigned long long)arg1;
- (id)predicateFormat;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(_Bool)arg3;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(_Bool)arg3 options:(unsigned long long)arg4;
- (_Bool)isNegation;
- (void)setNegation:(_Bool)arg1;

@end

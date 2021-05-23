/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPredicateOperator.h>

@interface NSStringPredicateOperator : NSPredicateOperator

{
    unsigned long long _flags;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)flags;
- (void)_setOptions:(unsigned long long)arg1;
- (id)_modifierString;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;

@end

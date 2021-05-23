/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPredicateOperator.h>

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator

{
    unsigned long long _flags;
    NSSubstringPredicateOperator *_stringVersion;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)flags;
- (id)symbol;
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (void)_setOptions:(unsigned long long)arg1;
- (id)stringVersion;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;

@end

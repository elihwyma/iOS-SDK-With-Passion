/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPredicateOperator.h>

@interface NSComparisonPredicateOperator : NSPredicateOperator

{
    unsigned long long _variant;
    unsigned long long _options;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (unsigned long long)variant;
- (id)predicateFormat;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 options:(unsigned long long)arg4;

@end

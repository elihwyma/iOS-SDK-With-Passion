/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface NSPredicateOperator : NSObject <Swift>

{
    unsigned long long _operatorType;
    unsigned long long _modifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)_newOperatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (SEL)_getSelectorForType:(unsigned long long)arg1;
+ (id)_getSymbolForType:(unsigned long long)arg1;
+ (id)operatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (SEL)selector;
- (unsigned long long)options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)operatorType;
- (unsigned long long)modifier;
- (id)symbol;
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (void)_setOptions:(unsigned long long)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2;
- (id)predicateFormat;
- (_Bool)performOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)initWithOperatorType:(unsigned long long)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (void)_setModifier:(unsigned long long)arg1;

@end

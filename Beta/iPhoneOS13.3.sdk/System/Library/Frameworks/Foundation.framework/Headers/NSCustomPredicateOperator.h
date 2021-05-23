/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPredicateOperator.h>

__attribute__((visibility("hidden")))
@interface NSCustomPredicateOperator : NSPredicateOperator

{
    SEL _selector;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (SEL)selector;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)symbol;
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)initWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2;

@end

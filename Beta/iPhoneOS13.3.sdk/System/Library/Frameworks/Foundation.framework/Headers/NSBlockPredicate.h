/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPredicate.h>

@interface NSBlockPredicate : NSPredicate

{
    CDUnknownBlockType _block;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (CDUnknownBlockType)_predicateBlock;

@end

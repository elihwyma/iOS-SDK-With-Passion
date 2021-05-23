/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPredicate.h>

@interface NSFalsePredicate : NSPredicate

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (_Bool)_allowsEvaluation;
+ (id)defaultInstance;

- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;

@end

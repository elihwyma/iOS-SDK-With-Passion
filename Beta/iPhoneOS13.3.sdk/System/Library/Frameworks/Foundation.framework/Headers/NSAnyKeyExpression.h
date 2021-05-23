/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSExpression.h>

__attribute__((visibility("hidden")))
@interface NSAnyKeyExpression : NSExpression

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (_Bool)_allowsEvaluation;
+ (id)defaultInstance;

- (id)init;
- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)hash;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)predicateFormat;
- (id)_initPrivate;

@end

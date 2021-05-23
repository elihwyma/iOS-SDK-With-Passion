/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSExpression.h>

@class NSString;

@interface NSKeyPathSpecifierExpression : NSExpression

{
    NSString *_value;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPath;
- (id)constantValue;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)predicateFormat;

@end

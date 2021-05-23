/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@interface MLDictionaryConstraint : NSObject <Swift>

{
    long long _keyType;
}

@property (nonatomic, readonly) long long keyType;

+ (_Bool)supportsSecureCoding;
+ (id)constraintWithStringKeys;
+ (id)constraintWithInt64Keys;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (id)initWithKeyType:(long long)arg1;

@end

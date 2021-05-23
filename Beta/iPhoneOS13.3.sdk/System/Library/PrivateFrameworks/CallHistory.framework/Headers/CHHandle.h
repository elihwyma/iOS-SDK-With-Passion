/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CHHandle : NSObject

{
    long long _type;
    NSString *_value;
    NSString *_normalizedValue;
}

@property (copy, nonatomic, readonly) NSString *normalizedValue;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *value;

+ (_Bool)supportsSecureCoding;
+ (id)normalizedEmailAddressHandleForValue:(id)arg1;
+ (id)normalizedGenericHandleForValue:(id)arg1;
+ (id)normalizedPhoneNumberHandleForValue:(id)arg1 isoCountryCode:(id)arg2;
+ (long long)handleTypeForValue:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (_Bool)isEqualToHandle:(id)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)initWithType:(long long)arg1 value:(id)arg2 normalizedValue:(id)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSString;

@interface DMFProfilePayload : NSObject

{
    NSString *_type;
    NSString *_identifier;
    long long _payloadVersion;
    NSString *_displayName;
    NSString *_organization;
    NSString *_payloadDescription;
}

@property (copy, nonatomic, readonly) NSString *type;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long payloadVersion;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *organization;
@property (copy, nonatomic, readonly) NSString *payloadDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 identifier:(id)arg2 payloadVersion:(long long)arg3 displayName:(id)arg4 organization:(id)arg5 payloadDescription:(id)arg6;

@end

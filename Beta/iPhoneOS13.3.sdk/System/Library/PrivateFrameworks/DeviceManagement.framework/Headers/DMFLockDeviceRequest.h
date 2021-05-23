/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFLockDeviceRequest

{
    NSString *_message;
    NSString *_phoneNumber;
    NSString *_pin;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *pin;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

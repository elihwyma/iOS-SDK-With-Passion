/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFSetDeviceNameRequest

{
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

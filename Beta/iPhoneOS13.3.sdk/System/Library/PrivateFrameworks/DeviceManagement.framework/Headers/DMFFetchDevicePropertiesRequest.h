/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSArray;

@interface DMFFetchDevicePropertiesRequest

{
    NSArray *_propertyKeys;
}

@property (copy, nonatomic) NSArray *propertyKeys;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;
+ (id)devicePropertyKeysForPlatform:(unsigned long long)arg1;
+ (id)currentDevicePropertyKeys;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

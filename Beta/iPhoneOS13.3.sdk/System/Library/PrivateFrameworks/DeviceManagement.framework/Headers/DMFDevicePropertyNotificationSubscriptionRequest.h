/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSArray;

@interface DMFDevicePropertyNotificationSubscriptionRequest

{
    NSArray *_propertyKeys;
}

@property (copy, nonatomic) NSArray *propertyKeys;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

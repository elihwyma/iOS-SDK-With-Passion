/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSDictionary;

@interface DMFRemoveConfigurationRequest

{
    unsigned long long _type;
    NSDictionary *_profile;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDictionary *profile;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

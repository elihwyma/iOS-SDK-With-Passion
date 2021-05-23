/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFRemoveProvisioningProfileRequest

{
    NSString *_profileIdentifier;
    NSString *_managingProfileIdentifier;
}

@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *managingProfileIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

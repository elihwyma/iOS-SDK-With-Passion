/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSData, NSString;

@interface DMFInstallProvisioningProfileRequest

{
    NSString *_managingProfileIdentifier;
    NSData *_profileData;
}

@property (copy, nonatomic) NSString *managingProfileIdentifier;
@property (copy, nonatomic) NSData *profileData;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

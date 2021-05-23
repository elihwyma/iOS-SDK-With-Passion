/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFInstallAppRequest.h>

@class NSArray, NSDictionary, NSString;

@interface DMFMDMv1InstallAppRequest : DMFInstallAppRequest

{
    _Bool _manage;
    NSString *_redemptionCode;
    NSString *_originator;
    unsigned long long _managementOptions;
    NSString *_VPNUUIDString;
    NSArray *_associatedDomains;
    NSDictionary *_configuration;
    NSString *_personaID;
}

@property (copy, nonatomic) NSString *redemptionCode;
@property (copy, nonatomic) NSString *originator;
@property (nonatomic) _Bool manage;
@property (nonatomic) unsigned long long managementOptions;
@property (copy, nonatomic) NSString *VPNUUIDString;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSString *personaID;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

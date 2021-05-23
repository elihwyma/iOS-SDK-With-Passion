/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFAppRequest.h>

@class NSArray, NSDictionary, NSString;

@interface DMFMDMv1StartManagingAppRequest : DMFAppRequest

{
    NSString *_originator;
    unsigned long long _managementOptions;
    NSString *_VPNUUIDString;
    NSArray *_associatedDomains;
    NSDictionary *_configuration;
}

@property (copy, nonatomic) NSString *originator;
@property (nonatomic) unsigned long long managementOptions;
@property (copy, nonatomic) NSString *VPNUUIDString;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSDictionary *configuration;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

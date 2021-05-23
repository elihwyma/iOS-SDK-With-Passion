/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFUpdateAppRequest.h>

@class NSArray, NSDictionary, NSString;

@interface DMFMDMv1UpdateAppRequest : DMFUpdateAppRequest

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
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

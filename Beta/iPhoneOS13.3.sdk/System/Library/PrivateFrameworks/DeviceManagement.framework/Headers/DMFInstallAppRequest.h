/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFAppRequest.h>

@class NSNumber;

@interface DMFInstallAppRequest : DMFAppRequest

{
    _Bool _allowFreePurchases;
    unsigned long long _licenseType;
    NSNumber *_accountIdentifier;
}

@property (nonatomic) unsigned long long licenseType;
@property (nonatomic) _Bool allowFreePurchases;
@property (copy, nonatomic) NSNumber *accountIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

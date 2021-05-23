/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFAppRequest.h>

@class NSDictionary;

@interface DMFSetAppConfigurationRequest : DMFAppRequest

{
    NSDictionary *_configuration;
}

@property (copy, nonatomic) NSDictionary *configuration;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

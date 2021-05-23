/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFAppRequest.h>

@class NSString;

@interface DMFSetAppVPNUUIDRequest : DMFAppRequest

{
    NSString *_UUIDString;
}

@property (copy, nonatomic) NSString *UUIDString;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

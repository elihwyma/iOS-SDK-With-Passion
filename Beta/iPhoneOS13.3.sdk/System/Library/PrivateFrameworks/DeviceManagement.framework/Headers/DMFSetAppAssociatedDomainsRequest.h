/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <DeviceManagement/DMFAppRequest.h>

@class NSArray;

@interface DMFSetAppAssociatedDomainsRequest : DMFAppRequest

{
    NSArray *_associatedDomains;
}

@property (copy, nonatomic) NSArray *associatedDomains;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

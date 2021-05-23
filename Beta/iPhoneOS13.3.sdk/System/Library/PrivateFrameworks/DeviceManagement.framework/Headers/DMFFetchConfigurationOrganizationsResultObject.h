/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchConfigurationOrganizationsResultObject : CATTaskResultObject

{
    NSDictionary *_organizationsByIdentifier;
}

@property (retain, nonatomic) NSDictionary *organizationsByIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

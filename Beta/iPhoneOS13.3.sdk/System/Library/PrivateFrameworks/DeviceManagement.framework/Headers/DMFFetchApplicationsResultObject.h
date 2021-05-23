/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchApplicationsResultObject : CATTaskResultObject

{
    NSDictionary *_applicationsByIdentifier;
}

@property (copy, nonatomic, readonly) NSDictionary *applicationsByIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithApplicationsByIdentifier:(id)arg1;

@end

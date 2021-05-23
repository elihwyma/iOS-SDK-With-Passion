/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchAppsResultObject : CATTaskResultObject

{
    NSDictionary *_appsByBundleIdentifier;
}

@property (copy, nonatomic, readonly) NSDictionary *appsByBundleIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAppsByBundleIdentifier:(id)arg1;

@end

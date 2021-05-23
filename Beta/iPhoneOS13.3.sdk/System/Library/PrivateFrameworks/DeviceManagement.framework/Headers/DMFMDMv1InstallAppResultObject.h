/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFMDMv1InstallAppResultObject : CATTaskResultObject

{
    NSString *_bundleIdentifier;
    unsigned long long _state;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned long long state;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 state:(unsigned long long)arg2;

@end

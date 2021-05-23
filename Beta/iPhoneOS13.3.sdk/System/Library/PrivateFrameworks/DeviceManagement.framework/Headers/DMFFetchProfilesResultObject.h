/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchProfilesResultObject : CATTaskResultObject

{
    NSArray *_profiles;
}

@property (copy, nonatomic, readonly) NSArray *profiles;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfiles:(id)arg1;

@end

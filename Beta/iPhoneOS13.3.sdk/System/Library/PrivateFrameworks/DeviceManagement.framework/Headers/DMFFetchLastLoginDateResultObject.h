/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchLastLoginDateResultObject : CATTaskResultObject

{
    NSDictionary *_lastLoginDatesByAppleID;
}

@property (copy, nonatomic, readonly) NSDictionary *lastLoginDatesByAppleID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatesByAppleID:(id)arg1;

@end

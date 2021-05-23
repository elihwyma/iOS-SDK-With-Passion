/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class CLLocation;

@interface DMFFetchLocationResultObject : CATTaskResultObject

{
    CLLocation *_location;
}

@property (copy, nonatomic, readonly) CLLocation *location;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1;

@end

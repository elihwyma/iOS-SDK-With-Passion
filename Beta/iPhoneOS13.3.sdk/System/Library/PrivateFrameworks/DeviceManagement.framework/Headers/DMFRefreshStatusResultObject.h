/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSNumber;

@interface DMFRefreshStatusResultObject : CATTaskResultObject

{
    NSNumber *_numberOfUpdates;
}

@property (copy, nonatomic) NSNumber *numberOfUpdates;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

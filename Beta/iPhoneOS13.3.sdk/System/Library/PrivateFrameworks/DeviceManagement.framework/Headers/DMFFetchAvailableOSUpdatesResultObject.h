/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class DMFOSUpdate;

@interface DMFFetchAvailableOSUpdatesResultObject : CATTaskResultObject

{
    DMFOSUpdate *_update;
}

@property (copy, nonatomic, readonly) DMFOSUpdate *update;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdate:(id)arg1;

@end

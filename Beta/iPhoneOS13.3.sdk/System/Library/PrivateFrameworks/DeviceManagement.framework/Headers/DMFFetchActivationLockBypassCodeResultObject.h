/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchActivationLockBypassCodeResultObject : CATTaskResultObject

{
    NSString *_bypassCode;
}

@property (copy, nonatomic, readonly) NSString *bypassCode;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBypassCode:(id)arg1;

@end

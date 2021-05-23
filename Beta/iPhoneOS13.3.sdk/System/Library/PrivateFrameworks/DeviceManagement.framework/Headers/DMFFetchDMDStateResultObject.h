/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchDMDStateResultObject : CATTaskResultObject

{
    NSString *_dmdStateDescription;
}

@property (copy, nonatomic) NSString *dmdStateDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStateDescription:(id)arg1;

@end

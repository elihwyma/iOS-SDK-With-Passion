/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchDeclarationsResultObject : CATTaskResultObject

{
    NSArray *_payloadDescriptions;
}

@property (copy, nonatomic) NSArray *payloadDescriptions;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

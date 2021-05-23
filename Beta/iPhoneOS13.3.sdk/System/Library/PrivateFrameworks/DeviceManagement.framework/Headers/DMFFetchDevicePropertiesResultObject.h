/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class DMFDevice, NSDictionary;

@interface DMFFetchDevicePropertiesResultObject : CATTaskResultObject

{
    NSDictionary *_valuesByPropertyKey;
    NSDictionary *_errorsByPropertyKey;
}

@property (copy, nonatomic, readonly) NSDictionary *valuesByPropertyKey;
@property (copy, nonatomic, readonly) NSDictionary *errorsByPropertyKey;
@property (nonatomic, readonly) DMFDevice *device;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2;
- (id)valueForPropertyKey:(id)arg1 error:(id *)arg2;

@end

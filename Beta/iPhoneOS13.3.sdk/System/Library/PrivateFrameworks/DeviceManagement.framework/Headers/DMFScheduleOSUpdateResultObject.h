/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSError, NSString;

@interface DMFScheduleOSUpdateResultObject : CATTaskResultObject

{
    unsigned long long _action;
    NSString *_productKey;
    NSError *_error;
}

@property (nonatomic, readonly) unsigned long long action;
@property (copy, nonatomic, readonly) NSString *productKey;
@property (copy, nonatomic, readonly) NSError *error;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(unsigned long long)arg1 productKey:(id)arg2 error:(id)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchOSUpdateStatusResultObject : CATTaskResultObject

{
    NSString *_productKey;
    unsigned long long _status;
    double _downloadPercentComplete;
}

@property (copy, nonatomic) NSString *productKey;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double downloadPercentComplete;

+ (_Bool)supportsSecureCoding;
+ (id)descriptionForStatus:(unsigned long long)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductKey:(id)arg1 status:(unsigned long long)arg2 downloadPercentComplete:(double)arg3;

@end

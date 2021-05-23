/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchCertificatesResultObject : CATTaskResultObject

{
    NSArray *_certificates;
}

@property (copy, nonatomic, readonly) NSArray *certificates;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCertificates:(id)arg1;

@end

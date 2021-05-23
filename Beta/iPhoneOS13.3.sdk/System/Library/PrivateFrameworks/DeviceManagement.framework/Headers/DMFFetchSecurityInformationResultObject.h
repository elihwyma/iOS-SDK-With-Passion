/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class DMFSecurityInformation, NSDictionary;

@interface DMFFetchSecurityInformationResultObject : CATTaskResultObject

{
    DMFSecurityInformation *_securityInformation;
    NSDictionary *_valuesByPropertyKey;
    NSDictionary *_errorsByPropertyKey;
}

@property (copy, nonatomic, readonly) DMFSecurityInformation *securityInformation;
@property (copy, nonatomic, readonly) NSDictionary *valuesByPropertyKey;
@property (copy, nonatomic, readonly) NSDictionary *errorsByPropertyKey;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2;
- (id)initWithSecurityInformation:(id)arg1;

@end

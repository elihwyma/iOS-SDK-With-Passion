/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFEchoResultObject : CATTaskResultObject

{
    NSString *_echo;
    NSString *_resultStatus;
}

@property (copy, nonatomic) NSString *echo;
@property (copy, nonatomic) NSString *resultStatus;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

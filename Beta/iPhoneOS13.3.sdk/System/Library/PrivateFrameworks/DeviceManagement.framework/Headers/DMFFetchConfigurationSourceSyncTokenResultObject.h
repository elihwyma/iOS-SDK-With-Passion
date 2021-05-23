/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenResultObject : CATTaskResultObject

{
    NSString *_syncToken;
}

@property (copy, nonatomic) NSString *syncToken;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

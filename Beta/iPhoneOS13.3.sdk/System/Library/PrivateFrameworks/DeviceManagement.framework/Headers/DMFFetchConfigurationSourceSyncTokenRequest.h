/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenRequest

{
    NSString *_configurationSource;
}

@property (copy, nonatomic) NSString *configurationSource;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

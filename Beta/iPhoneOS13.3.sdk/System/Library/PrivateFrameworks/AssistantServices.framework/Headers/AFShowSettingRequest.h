/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriRequest.h>

@interface AFShowSettingRequest : AFSiriRequest

{
    long long _settingType;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createResponse;
- (long long)settingType;
- (id)_initWithSettingType:(long long)arg1;

@end

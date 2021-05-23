/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriResponse.h>

@class NSArray;

@interface AFSetSettingsResponse : AFSiriResponse

{
    NSArray *_settingChanges;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithRequest:(id)arg1 settingChanges:(id)arg2;
- (id)settingChanges;

@end

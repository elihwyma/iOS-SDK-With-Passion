/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/STSiriModelObject.h>

@interface STSettingChange : STSiriModelObject

{
    long long _settingType;
    id _valueBeforeUpdate;
    id _valueAfterUpdate;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingType:(long long)arg1 valueBeforeUpdate:(id)arg2 valueAfterUpdate:(id)arg3;
- (long long)settingType;
- (id)valueBeforeUpdate;
- (id)valueAfterUpdate;

@end

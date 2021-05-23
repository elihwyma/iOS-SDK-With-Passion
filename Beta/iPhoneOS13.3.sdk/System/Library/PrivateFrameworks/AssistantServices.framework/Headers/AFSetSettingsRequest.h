/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFSetSettingsRequest : AFSiriRequest

{
    NSArray *_settings;
    _Bool _applyChanges;
}

@property (copy, nonatomic, setter=_setSettings:) NSArray *settings;
@property (nonatomic, setter=_setApplyChanges:) _Bool applyChanges;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createResponse;
- (id)createResponseWithSettingChanges:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLSettingFeedbackMessage : CPLFeedbackMessage

{
    NSString *_settingName;
    NSString *_value;
}

@property (nonatomic, readonly) NSString *settingName;
@property (nonatomic, readonly) NSString *value;

+ (id)feedbackType;

- (id)serverMessage;
- (id)initWithSetting:(id)arg1 value:(id)arg2;

@end

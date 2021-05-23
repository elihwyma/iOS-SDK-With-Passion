/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@class NSString;

@interface TIUserModelSettingValueDescriptor

{
    NSString *_settingName;
}

@property (retain) NSString *settingName;

+ (id)configureSettingsValueDescriptors;

- (id)initWithValueName:(id)arg1 settingName:(id)arg2;

@end

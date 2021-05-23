/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class HMSettingGroup;

@protocol HMSettingsDelegate;

@protocol HMSettingsOwner

@property (weak) id <HMSettingsDelegate> delegate;
@property (readonly) HMSettingGroup *rootGroup;

@end

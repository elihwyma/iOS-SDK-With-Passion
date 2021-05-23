/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class NSSet;

@interface HUSmartDetectionSettingsItem : HFItem

{
    unsigned long long _motionDetectionType;
    NSSet *_cameraProfiles;
    unsigned long long _settingsContext;
}

@property (nonatomic, readonly) unsigned long long motionDetectionType;
@property (copy, nonatomic, readonly) NSSet *cameraProfiles;
@property (nonatomic, readonly) unsigned long long settingsContext;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithDetectionType:(unsigned long long)arg1 cameraProfiles:(id)arg2 settingsContext:(unsigned long long)arg3;

@end

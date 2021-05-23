/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class NSMutableSet, NSSet;

@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider

{
    NSMutableSet *_items;
    NSSet *_cameraProfiles;
    unsigned long long _settingsContext;
}

@property (nonatomic, readonly) NSMutableSet *items;
@property (copy, nonatomic, readonly) NSSet *cameraProfiles;
@property (nonatomic, readonly) unsigned long long settingsContext;

- (id)init;
- (id)reloadItems;
- (id)initWithCameraProfiles:(id)arg1 settingsContext:(unsigned long long)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

#import <UIKit/UIMutableApplicationSceneSettings.h>

@class NSString, _UILegibilitySettings;

@interface SPUIMutableLegibilitySceneSettings : UIMutableApplicationSceneSettings

@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)keyDescriptionForSetting:(long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3;

@end

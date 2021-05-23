/*
 Image: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
 */

#import <Preferences/PSListController.h>

@interface SHSSpeakersPrefController : PSListController

+ (_Bool)isVisible;

- (id)init;
- (void)dealloc;
- (void)update;
- (id)specifiers;
- (void)setEQIndex:(id)arg1 specifier:(id)arg2;
- (id)eqIndex:(id)arg1;

@end

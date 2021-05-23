/*
 Image: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
 */

#import <Preferences/PSListController.h>

@class NSString, PSSpecifier;

@interface SHSSoundsPrefController : PSListController

{
    float _volume;
    float _rateLimitedVolume;
    _Bool _hasTelephony;
    _Bool _volumeHUDsuppressed;
    double _lastTime;
    PSSpecifier *_voiceMailSpecifier;
    long long _voiceMailSpecifierIndex;
    _Bool _sliderActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)_deviceType;
- (void)endInterruption;
- (id)specifiers;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)didLock;
- (void)updateVolume;
- (void)volumeChangedExternally:(id)arg1;
- (void)updateVoiceMailVisibility;
- (void)didBackground;
- (void)willForeground;
- (_Bool)_canChangeRingtoneWithButtons;
- (void)setVolumeHUDsuppression:(_Bool)arg1;
- (void)willHideSlider;
- (void)willShowSlider;
- (void)setSystemHapticsEnabled:(id)arg1 specifier:(id)arg2;
- (id)systemHapticsEnabled:(id)arg1;
- (void)startRingtonePreview;
- (void)setVolumeAfterRateLimiting;
- (void)setSoundEffects:(id)arg1 specifier:(id)arg2;
- (id)soundEffects:(id)arg1;
- (id)volume:(id)arg1;
- (void)setVolume:(id)arg1 specifier:(id)arg2;
- (id)detailTextForToneWithSpecifier:(id)arg1;
- (id)shouldPlayCalendarSound:(id)arg1;
- (void)setPlayKeyboardSound:(id)arg1 specifier:(id)arg2;
- (id)canChangeRingtoneWithButtons:(id)arg1;
- (void)setCanChangeRingtoneWithButtons:(id)arg1 specifier:(id)arg2;

@end

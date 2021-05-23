/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <PrototypeTools/PTSettings.h>

@interface SBFLegibilitySettings : PTSettings

{
    double _slideToUnlockDarkShadowStrength;
    double _slideToUnlockLightShadowStrength;
    double _appIconGrabberDarkShadowStrength;
    double _appIconGrabberLightShadowStrength;
    double _timeDarkShadowStrength;
    double _timeLightShadowStrength;
    double _dateDarkShadowStrength;
    double _dateLightShadowStrength;
    double _statusTextDarkShadowStrength;
    double _statusTextLightShadowStrength;
    double _iconLabelDarkShadowStrength;
    double _iconLabelLightShadowStrength;
    double _folderTitleDarkShadowStrength;
    double _folderTitleLightShadowStrength;
    double _timerTextDarkShadowStrength;
    double _timerTextLightShadowStrength;
    double _timerDialDarkShadowStrength;
    double _timerDialLightShadowStrength;
    double _logoutButtonGlyphDarkShadowStrength;
    double _logoutButtonGlyphLightShadowStrength;
    double _logoutButtonTextDarkShadowStrength;
    double _logoutButtonTextLightShadowStrength;
    double _userPictureDarkShadowStrength;
    double _userPictureLightShadowStrength;
}

@property double slideToUnlockDarkShadowStrength;
@property double slideToUnlockLightShadowStrength;
@property double appIconGrabberDarkShadowStrength;
@property double appIconGrabberLightShadowStrength;
@property double timeDarkShadowStrength;
@property double timeLightShadowStrength;
@property double dateDarkShadowStrength;
@property double dateLightShadowStrength;
@property double statusTextDarkShadowStrength;
@property double statusTextLightShadowStrength;
@property double iconLabelDarkShadowStrength;
@property double iconLabelLightShadowStrength;
@property double folderTitleDarkShadowStrength;
@property double folderTitleLightShadowStrength;
@property double timerTextDarkShadowStrength;
@property double timerTextLightShadowStrength;
@property double timerDialDarkShadowStrength;
@property double timerDialLightShadowStrength;
@property double logoutButtonGlyphDarkShadowStrength;
@property double logoutButtonGlyphLightShadowStrength;
@property double logoutButtonTextDarkShadowStrength;
@property double logoutButtonTextLightShadowStrength;
@property double userPictureDarkShadowStrength;
@property double userPictureLightShadowStrength;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (double)slideToUnlockStrengthForStyle:(long long)arg1;
- (double)appIconGrabberStrengthForStyle:(long long)arg1;
- (double)timeStrengthForStyle:(long long)arg1;
- (double)dateStrengthForStyle:(long long)arg1;
- (double)statusTextStrengthForStyle:(long long)arg1;
- (double)iconLabelStrengthForStyle:(long long)arg1;
- (double)folderTitleStrengthForStyle:(long long)arg1;
- (double)timerTextStrengthForStyle:(long long)arg1;
- (double)timerDialStrengthForStyle:(long long)arg1;
- (double)logoutButtonGlyphStrengthForStyle:(long long)arg1;
- (double)logoutButtonTextStrengthForStyle:(long long)arg1;
- (double)userPictureStrengthForStyle:(long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/_UILegibilitySettings.h>

@class UIColor;

@interface SBLockScreenLegibilitySettings : _UILegibilitySettings

{
    _Bool _vibrancyDisabled;
    UIColor *_backgroundColorHint;
}

@property (retain, nonatomic) UIColor *backgroundColorHint;
@property (nonatomic) _Bool vibrancyDisabled;

+ (id)defaultSettings;

@end

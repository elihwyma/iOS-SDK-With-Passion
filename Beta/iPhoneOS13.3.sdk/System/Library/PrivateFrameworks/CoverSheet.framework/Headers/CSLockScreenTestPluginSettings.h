/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@class NSString;

@interface CSLockScreenTestPluginSettings : PTSettings

{
    _Bool _enablePlugin;
    _Bool _enableLostModePlugin;
    _Bool _restrictSiri;
    _Bool _restrictCamera;
    _Bool _restrictUnlock;
    _Bool _restrictLogout;
    _Bool _restrictTouchID;
    _Bool _restrictMediaControls;
    _Bool _restrictTodayCenter;
    _Bool _restrictControlCenter;
    _Bool _hideStatusBar;
    _Bool _hideTimeAndDate;
    _Bool _hideSubtitle;
    _Bool _disableOnUnlock;
    long long _presentationStyle;
    long long _backgroundStyle;
    long long _notificationBehavior;
    NSString *_subtitleValue;
}

@property _Bool enablePlugin;
@property _Bool enableLostModePlugin;
@property long long presentationStyle;
@property long long backgroundStyle;
@property long long notificationBehavior;
@property _Bool restrictSiri;
@property _Bool restrictCamera;
@property _Bool restrictUnlock;
@property _Bool restrictLogout;
@property _Bool restrictTouchID;
@property _Bool restrictMediaControls;
@property _Bool restrictTodayCenter;
@property _Bool restrictControlCenter;
@property _Bool hideStatusBar;
@property _Bool hideTimeAndDate;
@property _Bool hideSubtitle;
@property (retain) NSString *subtitleValue;
@property _Bool disableOnUnlock;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end

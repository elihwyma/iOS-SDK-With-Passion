/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUISettings.h>

@interface SBStatusBarStyleOverridesSettings : SBUISettings

{
    _Bool _exclusive;
    _Bool _showsWhenForeground;
    int _styleOverride;
}

@property (nonatomic) int styleOverride;
@property (nonatomic) _Bool exclusive;
@property (nonatomic) _Bool showsWhenForeground;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end

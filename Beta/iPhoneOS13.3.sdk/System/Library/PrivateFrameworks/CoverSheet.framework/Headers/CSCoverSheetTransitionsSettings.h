/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@class CSCoverSheetFlyInSettings, CSCoverSheetTransitionSettings;

@interface CSCoverSheetTransitionsSettings : PTSettings

{
    double _tension;
    double _friction;
    CSCoverSheetFlyInSettings *_flyInSettings;
    CSCoverSheetTransitionSettings *_sameWallpaperInitialTransitionSettings;
    CSCoverSheetTransitionSettings *_differentWallpaperInitialTransitionSettings;
    CSCoverSheetTransitionSettings *_sameWallpaperSubsequentTransitionSettings;
    CSCoverSheetTransitionSettings *_differentWallpaperSubsequentTransitionSettings;
    CSCoverSheetTransitionSettings *_overAppTransitionSettings;
}

@property (nonatomic) double tension;
@property (nonatomic) double friction;
@property (retain, nonatomic) CSCoverSheetFlyInSettings *flyInSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *sameWallpaperInitialTransitionSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *differentWallpaperInitialTransitionSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *sameWallpaperSubsequentTransitionSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *differentWallpaperSubsequentTransitionSettings;
@property (retain, nonatomic) CSCoverSheetTransitionSettings *overAppTransitionSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)setDefaultValuesForParallaxAndBlur;
- (void)setDefaultValuesForParallaxOnly;
- (void)setDefaultValuesForBlurOnly;

@end

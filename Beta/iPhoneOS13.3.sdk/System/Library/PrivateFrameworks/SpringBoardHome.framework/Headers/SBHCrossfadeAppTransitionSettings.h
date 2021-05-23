/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBHCrossfadeZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHCrossfadeAppTransitionSettings : SBHCrossfadeZoomSettings

{
    SBFAnimationSettings *_appSnapshotCornerRadiusSettings;
}

@property (retain, nonatomic) SBFAnimationSettings *appSnapshotCornerRadiusSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end

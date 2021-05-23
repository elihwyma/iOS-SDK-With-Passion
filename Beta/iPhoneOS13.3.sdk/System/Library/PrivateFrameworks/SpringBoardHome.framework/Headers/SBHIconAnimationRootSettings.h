/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <PrototypeTools/PTSettings.h>

@class SBHCenterAcceleratedAppSuspendSettings, SBHCenterAppLaunchSettings, SBHCenterAppSuspendSettings, SBHCrossfadeAcceleratedAppSuspendSettings, SBHCrossfadeAppLaunchSettings, SBHCrossfadeAppSuspendSettings, SBHFolderCloseSettings, SBHFolderOpenSettings, SBHReducedMotionFadeSettings, SBHUnlockSettings;

@interface SBHIconAnimationRootSettings : PTSettings

{
    SBHReducedMotionFadeSettings *_reducedMotionSettings;
    SBHUnlockSettings *_unlockSettings;
    SBHCenterAppLaunchSettings *_centerLaunchSettings;
    SBHCenterAppSuspendSettings *_centerSuspendSettings;
    SBHCenterAcceleratedAppSuspendSettings *_centerAcceleratedSuspendSettings;
    SBHCrossfadeAppLaunchSettings *_crossfadeLaunchSettings;
    SBHCrossfadeAppSuspendSettings *_crossfadeSuspendSettings;
    SBHCrossfadeAcceleratedAppSuspendSettings *_crossfadeAcceleratedSuspendSettings;
    double _maxAppSuspendHintProgress;
    double _maxAppLaunchWallpaperScale;
    SBHFolderOpenSettings *_folderOpenSettings;
    SBHFolderCloseSettings *_folderCloseSettings;
    double _maxFolderCloseHintProgress;
}

@property (retain, nonatomic) SBHReducedMotionFadeSettings *reducedMotionSettings;
@property (retain, nonatomic) SBHUnlockSettings *unlockSettings;
@property (retain, nonatomic) SBHCenterAppLaunchSettings *centerLaunchSettings;
@property (retain, nonatomic) SBHCenterAppSuspendSettings *centerSuspendSettings;
@property (retain, nonatomic) SBHCenterAcceleratedAppSuspendSettings *centerAcceleratedSuspendSettings;
@property (retain, nonatomic) SBHCrossfadeAppLaunchSettings *crossfadeLaunchSettings;
@property (retain, nonatomic) SBHCrossfadeAppSuspendSettings *crossfadeSuspendSettings;
@property (retain, nonatomic) SBHCrossfadeAcceleratedAppSuspendSettings *crossfadeAcceleratedSuspendSettings;
@property (nonatomic) double maxAppSuspendHintProgress;
@property (nonatomic) double maxAppLaunchWallpaperScale;
@property (retain, nonatomic) SBHFolderOpenSettings *folderOpenSettings;
@property (retain, nonatomic) SBHFolderCloseSettings *folderCloseSettings;
@property (nonatomic) double maxFolderCloseHintProgress;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end

/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMUserPreferencesMigrator : NSObject

+ (void)migrateLegacyPreferences;
+ (long long)_flashModeForLegacyFlashMode:(long long)arg1;
+ (long long)_HDRModeForLegacyHDRMode:(long long)arg1;
+ (long long)_captureModeForLegacyCameraMode:(long long)arg1;
+ (long long)_previewViewAspectModeForLegacyAspectMode:(long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@interface ASVUserDefaults : NSObject

+ (id)preferencesValueforKey:(struct __CFString *)arg1 domain:(struct __CFString *)arg2;
+ (_Bool)wantsAnimationDisabled;
+ (_Bool)wantsStatusBarHidden;
+ (_Bool)wants2DOverlayControlsHidden;
+ (_Bool)wantsObjectPlacedWithoutPlane;
+ (id)defaultPlanePosition;
+ (_Bool)wantsOpenInObjectMode;
+ (_Bool)wantsParentToCameraInARAndEnableProbes;
+ (id)checkoutFragment;
+ (_Bool)wantsRayTracedAmbientOcclusionEnabled;
+ (_Bool)forceDisableRayTracedAmbientOcclusion;
+ (_Bool)wantsSTAREnabled;
+ (_Bool)wantsDebugVisualizationEnabled;
+ (_Bool)wantsStatisticsShown;

@end

/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@protocol BWPortraitSceneMonitor <Swift>

@property (nonatomic) _Bool portraitSceneMonitoringRequiresStageThresholds;
@property (nonatomic, readonly) float focusDistanceToMaxAllowedFocusDistanceRatio;

- (unsigned short)setAutoFocusInProgress:focusLocked:oneShotFocusScanInProgress: /* Error: Ran out of types for this method. */;
- (unsigned short)focusScanDidComplete;
- (unsigned short)setSDOFBackgroundShiftSum:invalidShiftRatio:closeCanonicalDisparityAverage:faceCanonicalDisparityAverages:erodedForegroundRatio:foregroundRatio:occluded:faces: /* Error: Ran out of types for this method. */;
- (unsigned short)resolveSDOFStatusWithSampleBuffer:frameStatisticsByPortType:sceneFlags:flashWillFire:effectStatus:stagePreviewStatus: /* Error: Ran out of types for this method. */;

@end

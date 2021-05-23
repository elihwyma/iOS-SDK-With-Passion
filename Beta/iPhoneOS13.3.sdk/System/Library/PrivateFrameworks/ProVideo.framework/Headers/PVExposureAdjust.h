/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVHeliumEffect.h>

@interface PVExposureAdjust : PVHeliumEffect

+ (void)registerEffectWithID:(id)arg1 displayName:(id)arg2;

- (HGRef_265f9e4c)previewHGNodeForTime:(CDStruct_1b6d18a9)arg1 inputHGNode:(HGRef_265f9e4c)arg2 outputSize:(struct CGSize)arg3 renderer:(struct HGRenderer *)arg4;
- (HGRef_265f9e4c)hgNodeForTime:(CDStruct_1b6d18a9)arg1 inputs:(const PVInputHGNodeMap_d4d649d7 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;

@end

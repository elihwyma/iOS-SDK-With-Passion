/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVHeliumEffect.h>

@interface PVColorCorrectEffect : PVHeliumEffect

{
    int _look;
}

+ (void)registerEffects;

- (HGRef_265f9e4c)hgNodeForTime:(CDStruct_1b6d18a9)arg1 inputs:(const PVInputHGNodeMap_d4d649d7 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;

@end

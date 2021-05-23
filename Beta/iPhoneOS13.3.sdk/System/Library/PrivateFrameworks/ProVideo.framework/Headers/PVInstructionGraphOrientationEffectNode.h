/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVInstructionGraphEffectNode.h>

@class PVEffect;

@interface PVInstructionGraphOrientationEffectNode : PVInstructionGraphEffectNode

{
    _Bool _bypassOutOfRangeEffects;
    PVEffect *_effect;
}

+ (id)newOrientationEffectNodeWithInputs:(id)arg1 inputIDs:(id)arg2 effect:(id)arg3;

- (void)setEffect:(id)arg1;
- (id)effect;
- (void)setBypassOutOfRangeEffects:(_Bool)arg1;
- (HGRef_265f9e4c)internalHGNodeForTime:(CDStruct_1b6d18a9)arg1 trackInputs:(const PVInputHGNodeMap_cba5f928 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (id)dotTreeLabel:(HGRef_6bae45d3)arg1;
- (PCRect_3a266109)inputSizeForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (_Bool)bypassOutOfRangeEffects;

@end

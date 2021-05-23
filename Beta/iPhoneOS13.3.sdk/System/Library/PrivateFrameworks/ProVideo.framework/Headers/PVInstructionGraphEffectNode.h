/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVInstructionGraphNode.h>

@class PVEffect;

@interface PVInstructionGraphEffectNode : PVInstructionGraphNode

{
    struct map<unsigned int, PVInstructionGraphNode *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PVInstructionGraphNode *>>> _inputMap;
    _Bool _bypassOutOfRangeEffects;
    PVEffect *_effect;
}

@property (retain, nonatomic) PVEffect *effect;
@property (nonatomic) _Bool bypassOutOfRangeEffects;

+ (id)newEffectNodeToTransitionFrom:(id)arg1 to:(id)arg2 effect:(id)arg3;
+ (id)newEffectNodeToFilterInput:(id)arg1 effect:(id)arg2;
+ (id)newEffectNodeToOverlayInputs:(id)arg1 inputIDs:(id)arg2 effect:(id)arg3;
+ (id)newEffectNodeToAddTitle:(id)arg1 effect:(id)arg2;

- (id)init;
- (id).cxx_construct;
- (id)requiredSourceTrackIDs;
- (void)setInputNode:(id)arg1 forInputID:(unsigned int)arg2;
- (id)getAllSourceNodes;
- (void)loadIGNode:(HGRef_6bae45d3)arg1 returnLoadedEffects:(id)arg2;
- (struct PVIGHGNodeCacheKey)contextHGNodeCacheKeyAtTime:(CDStruct_1b6d18a9)arg1;
- (HGRef_265f9e4c)internalHGNodeForTime:(CDStruct_1b6d18a9)arg1 trackInputs:(const PVInputHGNodeMap_cba5f928 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (id)dotTreeLabel:(HGRef_6bae45d3)arg1;
- (id)instructionGraphNodeDescription;
- (void)unloadIGNode;
- (PCRect_3a266109)inputSizeForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (PCMatrix44Tmpl_93ed1289)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (void)addDotTreeLinks:(HGRef_6bae45d3)arg1;

@end

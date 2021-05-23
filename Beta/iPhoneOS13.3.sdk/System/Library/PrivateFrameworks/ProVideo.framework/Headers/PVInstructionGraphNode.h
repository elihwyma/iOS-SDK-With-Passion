/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVInstructionGraphNode : NSObject

{
    unsigned long long _uuid;
}

- (id)init;
- (id)description;
- (id)requiredSourceTrackIDs;
- (id)getAllSourceNodes;
- (void)loadIGNode:(HGRef_6bae45d3)arg1 returnLoadedEffects:(id)arg2;
- (struct PVIGHGNodeCacheKey)contextHGNodeCacheKeyAtTime:(CDStruct_1b6d18a9)arg1;
- (HGRef_265f9e4c)internalHGNodeForTime:(CDStruct_1b6d18a9)arg1 trackInputs:(const PVInputHGNodeMap_cba5f928 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (id)dotTreeLabel:(HGRef_6bae45d3)arg1;
- (id)instructionGraphNodeDescription;
- (_Bool)isPassthru;
- (void)loadIGNode:(HGRef_6bae45d3)arg1;
- (void)unloadIGNode;
- (HGRef_265f9e4c)hgNodeForTime:(CDStruct_1b6d18a9)arg1 trackInputs:(const PVInputHGNodeMap_cba5f928 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (PCRect_3a266109)inputSizeForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (PCMatrix44Tmpl_93ed1289)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVInstructionGraphSourceNode.h>

@class PVImageBuffer;

@interface PVInstructionGraphImageBufferSourceNode : PVInstructionGraphSourceNode

{
    PVImageBuffer *_imageBuffer;
    HGRef_9706a068 _renderManager;
}

- (id).cxx_construct;
- (id)initWithPVImageBuffer:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (HGRef_265f9e4c)internalHGNodeForTime:(CDStruct_1b6d18a9)arg1 trackInputs:(const PVInputHGNodeMap_cba5f928 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (id)dotTreeLabel:(HGRef_6bae45d3)arg1;
- (id)instructionGraphNodeDescription;
- (void)loadIGNode:(HGRef_6bae45d3)arg1;
- (PCRect_3a266109)inputSizeForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (PCMatrix44Tmpl_93ed1289)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;

@end

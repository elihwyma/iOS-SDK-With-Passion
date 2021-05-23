/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVInstructionGraphNode.h>

@class PVTransformAnimation;

@interface PVInstructionGraphSourceNode : PVInstructionGraphNode

{
    int _textureWrapMode;
    PVTransformAnimation *_transformAnimation;
    struct CGAffineTransform _transform;
}

@property (nonatomic) struct CGAffineTransform transform;
@property (retain, nonatomic) PVTransformAnimation *transformAnimation;
@property (nonatomic) int textureWrapMode;

- (id)init;
- (_Bool)isPortrait;
- (id)getAllSourceNodes;
- (id)instructionGraphNodeDescription;
- (HGRef_265f9e4c)applyWrapModeToInput:(HGRef_265f9e4c)arg1;

@end

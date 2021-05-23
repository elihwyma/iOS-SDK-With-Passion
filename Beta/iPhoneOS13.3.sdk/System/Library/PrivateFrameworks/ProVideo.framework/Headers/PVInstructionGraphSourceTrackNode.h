/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVInstructionGraphSourceNode.h>

@interface PVInstructionGraphSourceTrackNode : PVInstructionGraphSourceNode

{
    int _trackID;
    int _fillMode;
    struct CGSize _clipNaturalSize;
    struct CGRect _cropRect;
}

@property (nonatomic) int trackID;
@property (nonatomic) struct CGRect cropRect;
@property (nonatomic) int fillMode;
@property (nonatomic) struct CGSize clipNaturalSize;

+ (id)newSourceTrackNode:(int)arg1 animation:(id)arg2 fillMode:(int)arg3 clipNaturalSize:(struct CGSize)arg4;
+ (id)newSourceTrackNode:(int)arg1 transform:(struct CGAffineTransform)arg2 cropRect:(struct CGRect)arg3 clipNaturalSize:(struct CGSize)arg4;

- (_Bool)isPortrait;
- (id)requiredSourceTrackIDs;
- (HGRef_265f9e4c)internalHGNodeForTime:(CDStruct_1b6d18a9)arg1 trackInputs:(const PVInputHGNodeMap_cba5f928 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (id)dotTreeLabel:(HGRef_6bae45d3)arg1;
- (id)instructionGraphNodeDescription;
- (_Bool)isPassthru;
- (PCRect_3a266109)inputSizeForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (PCMatrix44Tmpl_93ed1289)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;

@end

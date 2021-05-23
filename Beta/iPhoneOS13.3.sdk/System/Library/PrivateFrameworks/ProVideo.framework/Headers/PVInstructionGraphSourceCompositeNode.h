/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVInstructionGraphSourceNode.h>

@class NSDictionary, NSObject, NSString, NSURL, PVImageBuffer, PVInstructionGraphNode;

@protocol PVCompositeDelegate, PVImageSeqDelegate;

@interface PVInstructionGraphSourceCompositeNode : PVInstructionGraphSourceNode

{
    HGRef_9706a068 _renderManager;
    int _nodeType;
    int _trackID;
    unsigned int _outputFormat;
    id <PVCompositeDelegate> _delegate;
    NSURL *_imageURL;
    NSString *_imageKey;
    PVImageBuffer *_imageBuffer;
    PVInstructionGraphNode *_graphNode;
    struct NSDictionary *_inputMap;
    id <PVImageSeqDelegate> _imageSeqDelegate;
    id <PVCompositeDelegate> _renderDelegate;
    NSObject *_metadata;
    struct CGSize _outputSize;
}

@property (nonatomic) int nodeType;
@property (nonatomic) int trackID;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSString *imageKey;
@property (retain, nonatomic) PVImageBuffer *imageBuffer;
@property (nonatomic) struct CGSize outputSize;
@property (nonatomic) unsigned int outputFormat;
@property (retain, nonatomic) PVInstructionGraphNode *graphNode;
@property (retain, nonatomic) NSDictionary *inputMap;
@property (retain, nonatomic) id <PVImageSeqDelegate> imageSeqDelegate;
@property (retain, nonatomic) id <PVCompositeDelegate> renderDelegate;
@property (retain, nonatomic) NSObject *metadata;
@property (retain, nonatomic) id <PVCompositeDelegate> delegate;

+ (id)newSourceCompositeNodeWithGraphNode:(id)arg1 outputSize:(struct CGSize)arg2 outputFormat:(unsigned int)arg3;
+ (id)newSourceCompositeNodeWithDelegate:(id)arg1 inputs:(id)arg2 metadata:(id)arg3 outputSize:(struct CGSize)arg4 outputFormat:(unsigned int)arg5;
+ (id)newSourceCompositeNodeWithURL:(id)arg1 key:(id)arg2 imageDelegate:(id)arg3;
+ (id)newSourceCompositeNodeWithPVImageBuffer:(id)arg1;
+ (id)newSourceCompositeNodeWithTrack:(int)arg1 outputSize:(struct CGSize)arg2;

- (id)init;
- (id).cxx_construct;
- (id)requiredSourceTrackIDs;
- (id)getAllSourceNodes;
- (void)loadIGNode:(HGRef_6bae45d3)arg1 returnLoadedEffects:(id)arg2;
- (HGRef_265f9e4c)internalHGNodeForTime:(CDStruct_1b6d18a9)arg1 trackInputs:(const PVInputHGNodeMap_cba5f928 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (id)dotTreeLabel:(HGRef_6bae45d3)arg1;
- (id)instructionGraphNodeDescription;
- (void)unloadIGNode;
- (PCRect_3a266109)inputSizeForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (PCMatrix44Tmpl_93ed1289)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (void)addDotTreeLinks:(HGRef_6bae45d3)arg1;
- (id)renderFrameForTime:(CDStruct_1b6d18a9)arg1 inputs:(id)arg2;
- (HGRef_265f9e4c)nodeForCompositeTrackMap:(const map_ba6fd08a *)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSourcePipeline.h>

@class BWNode, BWNodeOutput, BWSynchronizerNode;

@interface FigCaptureMetadataSourcePipeline : FigCaptureSourcePipeline

{
    BWNode *_sourceNode;
    BWSynchronizerNode *_synchronizerNode;
    struct OpaqueCMClock *_masterClock;
}

@property (nonatomic) struct OpaqueCMClock *masterClock;
@property (nonatomic, readonly) struct opaqueCMFormatDescription *sourceFormatDescription;
@property (nonatomic, readonly) BWNodeOutput *output;

+ (void)initialize;

- (void)dealloc;
- (void)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 errorOut:(int *)arg4;
- (int)_buildMetadataSourcePipeline:(id)arg1 graph:(id)arg2;

@end

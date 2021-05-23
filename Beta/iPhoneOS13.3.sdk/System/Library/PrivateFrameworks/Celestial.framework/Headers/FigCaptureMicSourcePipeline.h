/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSourcePipeline.h>

@class BWAudioSourceNode, BWFanOutNode, BWZoomCommandHandler;

@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline

{
    BWAudioSourceNode *_sourceNode;
    BWFanOutNode *_splitterNodesByMicSourcePosition[3];
    unsigned int _nextOutputIndexByMicSourcePosition[3];
    BWZoomCommandHandler *_zoomCommandHandlerForStereoAudioCapture;
}

@property (nonatomic, readonly) struct OpaqueCMClock *clock;
@property (nonatomic, readonly) BWAudioSourceNode *sourceNode;

+ (void)initialize;

- (void)dealloc;
- (id)nextOutputForMicSourcePosition:(int)arg1;
- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 cmSession:(struct opaqueCMSession *)arg4 renderDelegate:(id)arg5 isMultiCamSession:(_Bool)arg6;
- (int)_buildMicSourcePipelineWithConfiguration:(id)arg1 graph:(id)arg2 cmSession:(struct opaqueCMSession *)arg3 renderDelegate:(id)arg4 isMultiCamSession:(_Bool)arg5;

@end

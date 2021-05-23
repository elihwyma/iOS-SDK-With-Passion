/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCapturePipeline.h>

@class BWFanOutNode, BWOverCaptureFanOutNode, FigCaptureMovieFileSinkHeadPipeline, FigCaptureVISPipeline, NSMutableArray;

@interface FigCaptureMovieFileSinkMiddlePipeline : FigCapturePipeline

{
    FigCaptureVISPipeline *_visPipeline;
    BWFanOutNode *_videoFanOut;
    FigCaptureVISPipeline *_overCaptureVISPipeline;
    BWOverCaptureFanOutNode *_audioFanOut;
    NSMutableArray *_metadataFanOuts;
    FigCaptureMovieFileSinkHeadPipeline *_headPipeline;
    unsigned long long _numberOfTailsToSupport;
}

@property (nonatomic, readonly) FigCaptureVISPipeline *visPipeline;
@property (nonatomic, readonly) FigCaptureVISPipeline *overCaptureVISPipeline;

- (void)dealloc;
- (int)_buildMovieFileSinkExtendedCVISMiddleWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5;
- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5;
- (id)videoOutputForTailIndex:(unsigned long long)arg1;
- (id)audioOutputForTailIndex:(unsigned long long)arg1;
- (id)metadataOutputsForTailIndex:(unsigned long long)arg1;

@end

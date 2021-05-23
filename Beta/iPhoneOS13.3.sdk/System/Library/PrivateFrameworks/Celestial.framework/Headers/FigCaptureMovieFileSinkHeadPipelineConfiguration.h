/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWPipelineStage, FigCaptureMovieFileSinkPipelineConfiguration;

@interface FigCaptureMovieFileSinkHeadPipelineConfiguration : NSObject

{
    FigCaptureMovieFileSinkPipelineConfiguration *_movieFileSinkPipelineConfiguration;
    BWPipelineStage *_movieFilePipelineStage;
    BWPipelineStage *_transferPipelineStage;
    int _visMotionMetadataPreloadingMode;
}

@property (retain, nonatomic) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration;
@property (retain, nonatomic) BWPipelineStage *movieFilePipelineStage;
@property (retain, nonatomic) BWPipelineStage *transferPipelineStage;
@property (nonatomic) int visMotionMetadataPreloadingMode;

- (void)dealloc;

@end

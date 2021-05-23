/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWPipelineStage, FigCaptureMovieFileSinkPipelineConfiguration;

@interface FigCaptureMovieFileSinkMiddlePipelineConfiguration : NSObject

{
    FigCaptureMovieFileSinkPipelineConfiguration *_movieFileSinkPipelineConfiguration;
    BWPipelineStage *_movieFilePipelineStage;
}

@property (retain, nonatomic) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration;
@property (retain, nonatomic) BWPipelineStage *movieFilePipelineStage;

- (id)init;
- (void)dealloc;

@end

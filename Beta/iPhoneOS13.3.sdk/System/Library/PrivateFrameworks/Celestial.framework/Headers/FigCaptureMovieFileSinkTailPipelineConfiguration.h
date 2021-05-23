/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWNodeOutput, BWPhotoDecompressorNode, BWPipelineStage, FigCaptureMovieFileSinkPipelineConfiguration, NSArray;

@interface FigCaptureMovieFileSinkTailPipelineConfiguration : NSObject

{
    FigCaptureMovieFileSinkPipelineConfiguration *_movieFileSinkPipelineConfiguration;
    BWPipelineStage *_movieFilePipelineStage;
    BWPhotoDecompressorNode *_irisIntermediateJPEGPhotoDecompressorNode;
    BWNodeOutput *_videoSourceOutput;
    BWNodeOutput *_audioSourceOutput;
    NSArray *_metadataSourceOutputs;
    NSArray *_indexesOfDetectedObjectsInMetadataOutputs;
    int _indexOfVideoOrientationInMetadataOutputs;
    _Bool _vitalityScoringEnabled;
    _Bool _meaningfulSubjectTrackingEnabled;
}

@property (retain, nonatomic) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration;
@property (retain, nonatomic) BWPipelineStage *movieFilePipelineStage;
@property (retain, nonatomic) BWPhotoDecompressorNode *irisIntermediateJPEGPhotoDecompressorNode;
@property (retain, nonatomic) BWNodeOutput *videoSourceOutput;
@property (retain, nonatomic) BWNodeOutput *audioSourceOutput;
@property (retain, nonatomic) NSArray *metadataSourceOutputs;
@property (retain, nonatomic) NSArray *indexesOfDetectedObjectsInMetadataOutputs;
@property (nonatomic) int indexOfVideoOrientationInMetadataOutputs;
@property (nonatomic) _Bool vitalityScoringEnabled;
@property (nonatomic) _Bool meaningfulSubjectTrackingEnabled;

- (id)init;
- (void)dealloc;

@end

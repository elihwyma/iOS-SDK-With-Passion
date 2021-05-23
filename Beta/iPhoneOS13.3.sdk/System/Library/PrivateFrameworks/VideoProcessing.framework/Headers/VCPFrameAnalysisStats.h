/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, VCPVideoActivityDescriptor;

__attribute__((visibility("hidden")))
@interface VCPFrameAnalysisStats : NSObject

{
    _Bool _frameProcessedByVideoAnalyzer;
    _Bool _subMbMotionAvailable;
    _Bool _frameProcessedByHumanAnalyzer;
    _Bool _frameProcessedByFaceDetector;
    float _cameraMotionScore;
    float _subjectActionScore;
    float _interestingnessScore;
    float _obstructionScore;
    float _exposureScore;
    float _colorfulnessScore;
    float _faceArea;
    float _humanPoseScore;
    float _humanActionScore;
    NSMutableArray *_detectedFaces;
    VCPVideoActivityDescriptor *_videoActivityDescriptor;
}

@property (nonatomic) _Bool frameProcessedByVideoAnalyzer;
@property (nonatomic) float cameraMotionScore;
@property (nonatomic) float subjectActionScore;
@property (nonatomic) float interestingnessScore;
@property (nonatomic) float obstructionScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) float colorfulnessScore;
@property (nonatomic) _Bool subMbMotionAvailable;
@property (nonatomic) float faceArea;
@property (nonatomic) _Bool frameProcessedByHumanAnalyzer;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) float humanActionScore;
@property (nonatomic) _Bool frameProcessedByFaceDetector;
@property (retain, nonatomic) NSMutableArray *detectedFaces;
@property (retain, nonatomic) VCPVideoActivityDescriptor *videoActivityDescriptor;

- (id)init;
- (void)reset;

@end

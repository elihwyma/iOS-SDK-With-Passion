/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VCPCNNFaceLandmarkDetector, VCPPnPSolver, VCPVideoFacePoseFilter;

__attribute__((visibility("hidden")))
@interface VCPVideoFacePoseAnalyzer : NSObject

{
    VCPCNNFaceLandmarkDetector *_landmarkDetector;
    VCPPnPSolver *_poseEstimator;
    VCPVideoFacePoseFilter *_filter;
    float _focalLengthInPixels;
    CDStruct_1b6d18a9 _lastTimestamp;
    int _width;
    int _height;
    float _points2D[14];
    float _points3D[21];
    CDStruct_14d5dc5e _pose;
}

@property CDStruct_14d5dc5e pose;

- (id)init;
- (_Bool)updateFocalLengthInPixels:(float)arg1;
- (id)initWithFocalLengthInPixels:(float)arg1;
- (int)analyzeFrameForPose:(struct __CVBuffer *)arg1 withFaceRect:(struct CGRect)arg2 withTimestamp:(CDStruct_1b6d18a9)arg3;

@end

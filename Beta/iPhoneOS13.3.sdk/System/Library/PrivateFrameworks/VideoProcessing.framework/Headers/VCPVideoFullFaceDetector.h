/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoFaceDetector.h>

@class NSArray, NSMutableArray, NSMutableDictionary, VCPCNNPoseEstimator, VCPCNNSmileDetector, VCPFrameAnalysisStats;

__attribute__((visibility("hidden")))
@interface VCPVideoFullFaceDetector : VCPVideoFaceDetector

{
    int _latestTrackID;
    VCPCNNSmileDetector *_smileDetector;
    VCPCNNPoseEstimator *_poseEstimator;
    NSArray *_existingFaceprints;
    VCPFrameAnalysisStats *_frameStats;
    float _latestFrameArea;
    CDStruct_1b6d18a9 _timeLastTracking;
    NSMutableDictionary *_faceTrackers;
    NSMutableDictionary *_keyFaces;
    NSMutableArray *_reservedIDs;
    NSMutableDictionary *_facePrints;
    NSMutableArray *_allFaces;
    NSMutableDictionary *_faceRanges;
    NSMutableArray *_frameFaceResults;
}

- (void)dealloc;
- (id)initWithTransform:(struct CGAffineTransform)arg1;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (id)frameFaceResults;
- (id)initWithTransform:(struct CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3;
- (id)faceRanges;
- (_Bool)compareFace:(id)arg1 withFace:(id)arg2;
- (void)removeSmallestKeyFace;
- (int)detectTrackFacesInFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 faces:(id)arg3;
- (int)clusterFaces;
- (int)updateWithExistingFaces;
- (_Bool)locationChange:(struct CGRect)arg1 relativeTo:(struct CGRect)arg2 landscape:(_Bool)arg3;
- (float)minProcessTimeIntervalInSecs;
- (int)detectFaces:(struct __CVBuffer *)arg1 faces:(id)arg2;

@end

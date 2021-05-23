/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoFaceDetector.h>

@class VCPFrameAnalysisStats;

__attribute__((visibility("hidden")))
@interface VCPVideoLightFaceDetector : VCPVideoFaceDetector

{
    int _lastestFaceID;
    int _numFacesLastFrame;
    VCPFrameAnalysisStats *_frameStats;
}

- (void)dealloc;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (id)initWithTransform:(struct CGAffineTransform)arg1 frameStats:(id)arg2;
- (float)minProcessTimeIntervalInSecs;
- (int)detectFaces:(struct __CVBuffer *)arg1 faces:(id)arg2;

@end

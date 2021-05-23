/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSArray, NSMutableArray, NSMutableDictionary, VCPImageSaliencyAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPVideoSaliencyAnalyzer : VCPVideoAnalyzer

{
    NSMutableArray *_detections;
    NSMutableArray *_latestRegions;
    CDStruct_1b6d18a9 _timeLastDetection;
    CDStruct_1b6d18a9 _timeLastTracking;
    CDStruct_1b6d18a9 _start;
    VCPImageSaliencyAnalyzer *_saliencyAnalyer;
    NSMutableDictionary *_trackers;
    NSMutableDictionary *_confidences;
    NSArray *_activeRegions;
}

- (id)results;
- (id)initWithTransform:(struct CGAffineTransform)arg1;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (_Bool)isOutOfBoundary:(struct CGRect)arg1;
- (float)updateConfidence:(float)arg1 prevBound:(struct CGRect)arg2 newBound:(struct CGRect)arg3 width:(int)arg4 height:(int)arg5;
- (id)pruneRegions:(id)arg1 withOverlapRatio:(float)arg2;
- (float)boundDistance:(struct CGRect)arg1 relativeTo:(struct CGRect)arg2 landscape:(_Bool)arg3;

@end

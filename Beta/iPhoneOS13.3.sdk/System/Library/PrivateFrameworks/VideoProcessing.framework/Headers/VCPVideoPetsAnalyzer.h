/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSArray, NSMutableArray, VCPImagePetsAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPVideoPetsAnalyzer : VCPVideoAnalyzer

{
    NSMutableArray *_petsDetections;
    NSMutableArray *_petsFaceDetections;
    CDStruct_1b6d18a9 _timeLastProcess;
    CDStruct_1b6d18a9 _petsStart;
    CDStruct_1b6d18a9 _petsFaceStart;
    VCPImagePetsAnalyzer *_petsAnalyer;
    NSArray *_petsActiveRegions;
    NSArray *_petsFaceActiveRegions;
}

- (id)results;
- (id)initWithTransform:(struct CGAffineTransform)arg1;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (id)parseResults:(id)arg1 toDetections:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 fromTime:(CDStruct_1b6d18a9 *)arg4 addActiveRegions:(id)arg5;
- (void)addDetectionToDict:(CDStruct_e83c9415)arg1 withActiveRegions:(id)arg2 forPetsDetections:(id)arg3 fromTime:(CDStruct_1b6d18a9)arg4;

@end

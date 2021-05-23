/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, VCPSceneTaxonomy;

__attribute__((visibility("hidden")))
@interface VCPVideoSceneClassifier : VCPVideoAnalyzer

{
    CDStruct_1b6d18a9 _timeLastProcess;
    CDStruct_1b6d18a9 _start;
    NSMutableArray *_results;
    NSMutableDictionary *_existingScenes;
    VCPSceneTaxonomy *_sceneTaxomy;
    NSMutableDictionary *_internalFrameScenes;
    NSArray *_sceneResults;
}

@property (readonly) NSDictionary *frameScenes;
@property (retain) NSArray *sceneResults;

- (id)init;
- (void)dealloc;
- (id)results;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (void)addResult:(id)arg1 start:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 keyIsName:(_Bool)arg4;
- (_Bool)compareObjectsOfInterest:(id)arg1 withScenes:(id)arg2;
- (void)addAggregatedScenes:(id)arg1 timerange:(CDStruct_e83c9415)arg2;

@end

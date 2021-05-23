/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@interface VCPEffectsAnalyzer : NSObject

{
    _Bool _hasFace;
}

+ (_Bool)isAutoLoopFramworkAvailable;
+ (_Bool)usePHAssetScene;
+ (id)gatingResultKeyToIndex;
+ (id)getResultIndex:(id)arg1;
+ (id)gatingTypeKeys;

- (int)enumerateMatchingScenesOfAsset:(id)arg1 forLongExposureUsingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)generateStatsToBeCollectedFrom:(id)arg1;
- (_Bool)reportLivePhotoEffectAnalysisResults:(id)arg1;
- (id)performanSceneClassificationOfImageFileAtURL:(id)arg1;
- (id)matchingNodeForSceneClassification:(id)arg1 inSceneNames:(id)arg2;
- (id)initWithFlagHasFace:(_Bool)arg1;
- (int)analyzeAsset:(id)arg1 onDemand:(_Bool)arg2 cancel:(CDUnknownBlockType)arg3 statsFlags:(unsigned long long *)arg4 results:(id *)arg5;
- (id)initWithAnalysisResults:(id)arg1;

@end

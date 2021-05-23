/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNMPContext : NSObject

{
    _Bool _useTimestampAdjustedDistances;
    _Bool _performClustersPostprocessing;
    _Bool _performSceneClassification;
    int _debugMode;
    int _timerMode;
    int _clusterSplitDistanceType;
    float _roiAreaThreshold;
    float _inliersRatioThreshold;
    int _numberOfKeypointsToConsider;
    float _naturalClusteringDistanceThreshold;
    NSArray *_qualityCriteriaList;
}

@property int debugMode;
@property int timerMode;
@property int clusterSplitDistanceType;
@property (retain) NSArray *qualityCriteriaList;
@property _Bool useTimestampAdjustedDistances;
@property _Bool performClustersPostprocessing;
@property _Bool performSceneClassification;
@property float roiAreaThreshold;
@property float inliersRatioThreshold;
@property int numberOfKeypointsToConsider;
@property float naturalClusteringDistanceThreshold;

@end

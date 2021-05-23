/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPCluster : NSObject

{
    const CDStruct_1ec70fb1 *profile;
    unsigned int xCount;
    double *x;
    double *dx;
    unsigned int *dxOrderIndex;
    unsigned int interClusterMinIndex;
    double *ddx;
    unsigned int *ddxOrderIndex;
    unsigned int interLevelMinIndex;
    unsigned int minClusterSize;
    double maxClusterSpread;
    double minInterClusterDiff;
    double minInterLevel2ndDiff;
    unsigned int clusterCount;
    CDStruct_2a61e2ef *xStats;
    unsigned int levels;
    CDStruct_2a61e2ef *dxStats;
    _Bool ownData;
    _Bool ownDifferences;
}

+ (void)clusterTextLine:(id)arg1;
+ (unsigned int *)createOrderIndexFor:(double *)arg1 ofSize:(unsigned int)arg2;
+ (void)clusterTextLine:(id)arg1 withCluster:(id)arg2 atLevel:(unsigned int)arg3 withMaximumWordGap:(double *)arg4 andMaximumLetterGap:(double *)arg5;
+ (void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned int)arg2 count:(unsigned int *)arg3;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (unsigned int)levels;
- (id)initWithProfile:(const CDStruct_1ec70fb1 *)arg1;
- (void)dispose;
- (_Bool)joinLevelsFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)resetAnalysis;
- (void)splitSecondDifferences;
- (void)assembleDifferenceStats;
- (_Bool)coalesceFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)computeDataFromDifferences;
- (void)assembleDensityDifferenceStats;
- (void)computeDifferencesFromData;
- (void)analyzeDifferences;
- (void)analyzeDensities;
- (_Bool)splitLevelAtIndex:(unsigned int)arg1 betweenValue:(double)arg2 andValue:(double)arg3;
- (_Bool)joinClosestLevelPairFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)assembleDataStats;
- (void)setMinimumClusterSize:(unsigned int)arg1;
- (void)setMaximumClusterSpread:(double)arg1;
- (void)setMinimumRecognizedInterClusterDifference:(double)arg1;
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)arg1;
- (void)findClusters:(double *)arg1 count:(unsigned int)arg2;
- (void)findClustersFromDifferences:(double *)arg1 count:(unsigned int)arg2;
- (void)findDensityClusters:(double *)arg1 count:(unsigned int)arg2;
- (_Bool)applyDifferenceHints:(CDStruct_2a61e2ef *)arg1 count:(unsigned int)arg2;
- (unsigned int)clusterCount;
- (CDStruct_2a61e2ef)clusterStatisticsAtIndex:(unsigned int)arg1;
- (CDStruct_2a61e2ef)differenceClusterStatisticsAtIndex:(unsigned int)arg1;
- (CDStruct_2a61e2ef)largestClusterStatistics;
- (void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(_Bool)arg2;
- (void)makeWords:(CDStruct_2e2afed4 *)arg1 count:(unsigned int)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned int)arg4;
- (void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(CDStruct_2a61e2ef *)arg3;

@end

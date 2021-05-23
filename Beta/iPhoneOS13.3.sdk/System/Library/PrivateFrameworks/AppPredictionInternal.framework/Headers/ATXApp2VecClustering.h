/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXApp2VecMapping;

@interface ATXApp2VecClustering : NSObject

{
    ATXApp2VecMapping *_clusterCentroids;
    ATXApp2VecMapping *_appEmbeddings;
    long long _vectorLength;
    _Bool _loaded;
}

+ (id)sharedInstance;
+ (void)resetSharedInstance;

- (id)init;
- (id)getClusterCentroidsForBundleIds:(id)arg1;
- (id)_mergeClusterCentroids:(id)arg1 forBundleIds:(id)arg2;
- (id)getClosestClusterCentroidForBundleId:(id)arg1;
- (id)_getClosestClusterCentroidForVector:(const float *)arg1;
- (float)_getL2DistanceFrom:(const float *)arg1 to:(float *)arg2;

@end

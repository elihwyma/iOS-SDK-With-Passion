/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface PGRevGeoMetricEvent : NSObject

{
    NSString *_identifier;
    double _numberOfAssetClustersPerMomentMean;
    double _numberOfAssetClustersPerMomentStdDev;
    double _numberOfAssetsPerClusterMean;
    double _numberOfAssetsPerClusterStdDev;
    double _ratioAssetClustersWithin10mOfCenter;
    double _ratioAssetClustersWithin20mOfCenter;
    double _ratioAssetClustersWithin50mOfCenter;
    double _ratioAssetClustersWithin100mOfCenter;
    double _ratioAssetClusters100mPlusFromCenter;
}

@property (nonatomic, readonly) double numberOfAssetClustersPerMomentMean;
@property (nonatomic, readonly) double numberOfAssetClustersPerMomentStdDev;
@property (nonatomic, readonly) double numberOfAssetsPerClusterMean;
@property (nonatomic, readonly) double numberOfAssetsPerClusterStdDev;
@property (nonatomic, readonly) double ratioAssetClustersWithin10mOfCenter;
@property (nonatomic, readonly) double ratioAssetClustersWithin20mOfCenter;
@property (nonatomic, readonly) double ratioAssetClustersWithin50mOfCenter;
@property (nonatomic, readonly) double ratioAssetClustersWithin100mOfCenter;
@property (nonatomic, readonly) double ratioAssetClusters100mPlusFromCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *payload;

- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithNumberOfAssetClustersPerMomentMean:(double)arg1 numberOfAssetClustersPerMomentStdDev:(double)arg2 numberOfAssetsPerClusterMean:(double)arg3 numberOfAssetsPerClusterStdDev:(double)arg4 ratioAssetClustersWithin10mOfCenter:(double)arg5 ratioAssetClustersWithin20mOfCenter:(double)arg6 ratioAssetClustersWithin50mOfCenter:(double)arg7 ratioAssetClustersWithin100mOfCenter:(double)arg8 ratioAssetClusters100mPlusFromCenter:(double)arg9;

@end

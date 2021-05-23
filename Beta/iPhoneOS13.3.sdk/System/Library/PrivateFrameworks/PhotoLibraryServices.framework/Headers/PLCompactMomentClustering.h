/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLCompactMomentClustering : NSObject

- (id)createAssetClustersForAssetsInDay:(id)arg1;
- (id)_runDBSCANClusteringWithAssets:(id)arg1;
- (id)_mergeAssetClustersWithLocation:(id)arg1 withAssetClustersWithoutLocation:(id)arg2;
- (id)_assetClustersFromDataClusters:(id)arg1;
- (id)_clusterAssetsWithUsableLocation:(id)arg1;
- (id)_clusterAssetsWithUnusableLocation:(id)arg1;

@end

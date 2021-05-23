/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PGGraphAssetRevGeocodeEnrichmentProcessor : NSObject

{
    NSArray *_homeLocations;
    double _sumNumberOfAssetClustersPerMoment;
    double _sumSquareNumberOfAssetClustersPerMoment;
    double _sumNumberOfAssetsPerCluster;
    double _sumSquareNumberOfAssetsPerCluster;
    double _numberOfAssetClustersWithin10mOfCenter;
    double _numberOfAssetClustersWithin20mOfCenter;
    double _numberOfAssetClustersWithin50mOfCenter;
    double _numberOfAssetClustersWithin100mOfCenter;
    double _numberOfAssetClusters100mPlusFromCenter;
    unsigned long long _numberOfMomentsRevGeocoded;
    unsigned long long _numberOfAssetClustersRevGeocoded;
}

@property (retain, nonatomic) NSArray *homeLocations;
@property (nonatomic, readonly) double sumNumberOfAssetClustersPerMoment;
@property (nonatomic, readonly) double sumSquareNumberOfAssetClustersPerMoment;
@property (nonatomic, readonly) double sumNumberOfAssetsPerCluster;
@property (nonatomic, readonly) double sumSquareNumberOfAssetsPerCluster;
@property (nonatomic, readonly) double numberOfAssetClustersWithin10mOfCenter;
@property (nonatomic, readonly) double numberOfAssetClustersWithin20mOfCenter;
@property (nonatomic, readonly) double numberOfAssetClustersWithin50mOfCenter;
@property (nonatomic, readonly) double numberOfAssetClustersWithin100mOfCenter;
@property (nonatomic, readonly) double numberOfAssetClusters100mPlusFromCenter;
@property (nonatomic, readonly) unsigned long long numberOfMomentsRevGeocoded;
@property (nonatomic, readonly) unsigned long long numberOfAssetClustersRevGeocoded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (_Bool)supportsBackgroundJob;
+ (id)_homeLocationsWithManager:(id)arg1;

- (id)init;
- (_Bool)revGeocodeAssets:(id)arg1 manager:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (_Bool)revGeoProviderDidChangeForPhotoLibrary:(id)arg1;
- (void)setCurrentGeoProviderForPhotoLibrary:(id)arg1;
- (void)invalidateReverseLocationDataForRevGeoProviderChangeUsingManager:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_momentsRequiringRevGeocodingWithIdentifiers:(id)arg1 inPhotoLibrary:(id)arg2 defaultToAllAssets:(_Bool)arg3;
- (id)_clusterAssetsInMoment:(id)arg1 assetsWithInvalidLocationInMoment:(id *)arg2 withPhotoLibrary:(id)arg3;
- (_Bool)_revGeocodeAssetClusters:(id)arg1 manager:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)_processMetricsOfAssetClustersInMoment:(id)arg1;
- (_Bool)_populateCacheWithRegions:(id)arg1 manager:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3;
- (void)_updateGeoInfoForAssetClusters:(id)arg1 manager:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)_revGeoLocationDataForRegion:(id)arg1 manager:(id)arg2;
- (_Bool)_setRevGeoLocationData:(id)arg1 onAssets:(id)arg2 withPhotoLibrary:(id)arg3;
- (_Bool)_regionIsHome:(id)arg1;

@end

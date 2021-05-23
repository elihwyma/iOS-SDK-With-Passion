/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <PlacesKit/PXPlacesMapLayout.h>

@interface PXPlacesMapGeometricClusterLayout : PXPlacesMapLayout

{
    double _clusteringDistance;
}

@property (nonatomic) double clusteringDistance;

- (id)init;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)_clusterGeotaggables:(id)arg1 forViewPort:(id)arg2;
- (id)_findClusterOverlappingGeotaggable:(id)arg1 fromClusters:(id)arg2 forViewPort:(id)arg3;
- (_Bool)_shapeAtCoordinate:(struct CLLocationCoordinate2D)arg1 overlapsShapeAtCoordinate:(struct CLLocationCoordinate2D)arg2 forViewPort:(id)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGGraphPlacesResolver : NSObject

+ (id)resolvePlacesForMomentNode:(id)arg1 feeder:(id)arg2;
+ (id)poiStringFromSpatialLookupCategory:(long long)arg1;
+ (id)resolvedPlaceForRegion:(id)arg1 withPlaceItems:(id)arg2;
+ (id)_clusteredRegionsFromFeeder:(id)arg1;
+ (id)_businessItemsAtCoordinate:(struct CLLocationCoordinate2D)arg1 inCache:(id)arg2;

@end

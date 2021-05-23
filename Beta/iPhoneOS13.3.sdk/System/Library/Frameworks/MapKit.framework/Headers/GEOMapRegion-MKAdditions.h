/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <GeoServices/GEOMapRegion.h>

@interface GEOMapRegion (MKAdditions)

+ (id)_mapkit_mapRegionEnclosingAnnotations:(id)arg1;
+ (id)_mapkit_mapRegionForCoordinateRegion:(CDStruct_b7cb895d)arg1;
+ (id)_mapkit_mapRegionForLatitude:(double)arg1 longitude:(double)arg2 latSpan:(double)arg3 longSpan:(double)arg4;

@end

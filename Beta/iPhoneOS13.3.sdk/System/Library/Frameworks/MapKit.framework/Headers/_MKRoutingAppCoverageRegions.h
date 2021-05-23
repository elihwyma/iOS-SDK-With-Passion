/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class _MKMultiPolygonGeoRegion;

@interface _MKRoutingAppCoverageRegions : NSObject

{
    _MKMultiPolygonGeoRegion *_regions;
}

- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;

@end

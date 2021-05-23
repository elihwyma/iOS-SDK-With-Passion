/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MKPolygonGeoRegion : NSObject

{
    struct CLLocationCoordinate2D *_polygon;
    unsigned long long _vertexCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)coordinateLiesInRegion:(struct CLLocationCoordinate2D)arg1;
- (_Bool)_loadWithJSONObject:(id)arg1 error:(id *)arg2;
- (id)initWithJSONObject:(id)arg1 error:(id *)arg2;

@end

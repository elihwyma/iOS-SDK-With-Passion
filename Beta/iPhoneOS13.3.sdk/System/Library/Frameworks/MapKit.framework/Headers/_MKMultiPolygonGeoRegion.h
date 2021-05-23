/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _MKMultiPolygonGeoRegion : NSObject

{
    NSArray *_polygons;
}

@property (retain, nonatomic) NSArray *polygons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (_Bool)coordinateLiesInRegion:(struct CLLocationCoordinate2D)arg1;
- (_Bool)_loadWithRootJSONObject:(id)arg1 error:(id *)arg2;
- (_Bool)_loadWithJSONObject:(id)arg1 error:(id *)arg2;
- (id)initWithJSONObject:(id)arg1 error:(id *)arg2;

@end

/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKMultiPoint.h>

@class NSArray, NSString;

@interface MKPolygon : MKMultiPoint

{
    struct CLLocationCoordinate2D _centroid;
    NSArray *_interiorPolygons;
    _Bool _isDefinitelyConvex;
    struct GEOOnce_s _determinedSimple;
    _Bool _simple;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool _isDefinitelyConvex;
@property (nonatomic, readonly, getter=_isSimple) _Bool simple;
@property (readonly) NSArray *interiorPolygons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) CDStruct_02837cd9 boundingMapRect;

+ (_Bool)supportsSecureCoding;
+ (id)polygonWithPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
+ (id)polygonEnclosingMapPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (id)_polygonWithMapRect:(CDStruct_02837cd9)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id *)arg2;
- (id)_initWithGeoJSONCoordinateArrays:(id)arg1 error:(id *)arg2;
- (id)_initWithPointsNoCopy:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
- (void)_calculateBounds;
- (void)_determineSimple;

@end

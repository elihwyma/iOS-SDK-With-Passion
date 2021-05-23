/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKMultiPoint.h>

@class NSString;

@interface MKPolyline : MKMultiPoint

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) CDStruct_02837cd9 boundingMapRect;

+ (id)polylineWithCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;

- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id *)arg2;
- (id)_initWithGeoJSONPoints:(struct NSArray *)arg1 error:(id *)arg2;
- (void)_calculateBounds;

@end

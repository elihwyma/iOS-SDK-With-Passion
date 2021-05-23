/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSValue.h>

@interface NSValue (MKAdditions)

@property (readonly) struct CLLocationCoordinate2D MKCoordinateValue;
@property (readonly) CDStruct_c3b9c2ee MKCoordinateSpanValue;

+ (id)_mapkit_valueWithCGPoint:(struct CGPoint)arg1;
+ (id)valueWithMKCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (id)valueWithMKCoordinateSpan:(CDStruct_c3b9c2ee)arg1;
+ (id)_mapkit_valueWithCGAffineTransform:(struct CGAffineTransform)arg1;

- (id)_mapkit_initWithCGPoint:(struct CGPoint)arg1;
- (id)_mapkit_initWithCADoublePoint:(struct CGPoint)arg1;
- (struct CGPoint)CADoublePointValue;
- (id)_mapkit_initWithCADoubleRect:(struct CGRect)arg1;
- (struct CGRect)CADoubleRectValue;
- (id)_mapkit_initWithCGRect:(struct CGRect)arg1;
- (id)_mapkit_initWithZoomRegion:(CDStruct_c0a8b48f)arg1;
- (CDStruct_c0a8b48f)_mapkit_zoomRegionValue;
- (id)_mapkit_initWithMKMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)MKMapRectValue;
- (struct CGRect)_mapkit_CGRectValue;
- (struct CGPoint)_mapkit_CGPointValue;
- (struct CGAffineTransform)_mapkit_CGAffineTransformValue;

@end

/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKShape.h>

@class NSString;

@interface MKMultiPoint : MKShape

{
    CDStruct_c3b9c2ee *_points;
    unsigned long long _pointCount;
    CDStruct_02837cd9 _boundingRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long pointCount;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CLLocationCoordinate2D)coordinate;
- (CDStruct_c3b9c2ee *)points;
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id *)arg2;
- (void)_assignPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (CDStruct_02837cd9)boundingMapRect;
- (void)_setPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (void)_setCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (void)_setBounds:(CDStruct_02837cd9)arg1;
- (void)_calculateBounds;
- (void)_wrapAroundTheDateline:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (void)_pointsDidChange;
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2;

@end

/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKShape.h>

@class NSString;

@interface MKCircle : MKShape

{
    struct CLLocationCoordinate2D _coordinate;
    double _radius;
    CDStruct_02837cd9 _boundingMapRect;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) CDStruct_02837cd9 boundingMapRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;

+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
+ (id)circleWithMapRect:(CDStruct_02837cd9)arg1;

- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
- (id)_initWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;

@end

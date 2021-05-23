/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKShape.h>

@class NSArray, NSString;

@interface MKMultiPolyline : MKShape

{
    NSArray *_polylines;
    CDStruct_02837cd9 _boundingMapRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *polylines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) CDStruct_02837cd9 boundingMapRect;

- (id)init;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id *)arg2;
- (id)initWithPolylines:(id)arg1;

@end

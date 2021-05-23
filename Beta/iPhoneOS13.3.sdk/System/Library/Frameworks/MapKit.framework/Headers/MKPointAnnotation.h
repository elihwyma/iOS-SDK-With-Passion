/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKShape.h>

@class CLLocation, NSString, VKCustomFeature;

@interface MKPointAnnotation : MKShape

{
    struct CLLocationCoordinate2D _coordinate;
    long long _representation;
    VKCustomFeature *_customFeature;
    CLLocation *_location;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long representation;
@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double course;
@property (nonatomic, readonly) _Bool showsBalloonCallout;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (retain, nonatomic) CLLocation *location;

- (id)init;
- (void)prepareForReuse;
- (id)feature;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (_Bool)isPersistent;
- (id)reuseIdentifier;
- (id)annotation;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id *)arg2;
- (id)viewRepresentation;
- (_Bool)_shouldDeselectWhenDragged;
- (void)_setHiddenForOffscreen:(_Bool)arg1;
- (_Bool)shouldRepresentSelf;
- (void)_invalidateCachedCoordinate;
- (_Bool)_isPendingSelectionAnimated;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)setShowsBalloonCallout:(_Bool)arg1;

@end

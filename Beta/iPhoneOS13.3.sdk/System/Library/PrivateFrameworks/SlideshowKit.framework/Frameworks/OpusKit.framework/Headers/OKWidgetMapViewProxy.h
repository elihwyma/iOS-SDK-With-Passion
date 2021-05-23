/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@class MKMapView, NSString, OKMKMapView;

@interface OKWidgetMapViewProxy : OKWidgetView

{
    OKMKMapView *_mapView;
    CDStruct_b7cb895d _region;
    _Bool _zoomToFitAnnotations;
}

@property (retain, nonatomic, readonly) MKMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)initWithWidget:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)supportsReadiness;
- (void)setAntialiasing:(_Bool)arg1;
- (_Bool)settingScrollEnabled;
- (void)setSettingScrollEnabled:(_Bool)arg1;
- (void)selectAnnotationWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)zoomToAnnotationsWithIdentifiers:(id)arg1 animated:(_Bool)arg2;
- (void)setSettingShowsPointsOfInterest:(_Bool)arg1;
- (_Bool)settingShowsPointsOfInterest;
- (void)setSettingShowsBuildings:(_Bool)arg1;
- (_Bool)settingShowsBuildings;
- (unsigned long long)settingMapType;
- (void)setSettingMapType:(unsigned long long)arg1;
- (_Bool)settingZoomEnabled;
- (void)setSettingZoomEnabled:(_Bool)arg1;
- (_Bool)settingScrollWheelEnabled;
- (void)setSettingScrollWheelEnabled:(_Bool)arg1;
- (_Bool)settingShowsUserLocation;
- (void)setSettingShowsUserLocation:(_Bool)arg1;
- (CDStruct_b7cb895d)settingRegion;
- (void)setSettingRegion:(CDStruct_b7cb895d)arg1;
- (struct CLLocationCoordinate2D)settingCenterCoordinate;
- (void)setSettingCenterCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)setSettingAnnotations:(id)arg1;
- (void)setSettingZoomToFitAnnotations:(_Bool)arg1;

@end

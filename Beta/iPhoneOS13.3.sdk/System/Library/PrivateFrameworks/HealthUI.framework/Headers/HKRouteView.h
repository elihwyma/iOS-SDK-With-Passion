/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKLocationReadings, MKMapView, NSString, UIButton;

@interface HKRouteView : UIView

{
    MKMapView *_mapView;
    HKLocationReadings *_locationReadings;
    UIButton *_toggleMapTypeButton;
}

@property (retain, nonatomic) UIButton *toggleMapTypeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)setLocationReadings:(id)arg1;
- (void)_clearMapViewIfNeeded;
- (void)_setRouteMapType:(unsigned long long)arg1;
- (void)_addAnnotation:(id)arg1 isStartPoint:(_Bool)arg2;
- (void)_displayMapRouteForLocationReadings;
- (id)routeImageForSharing;
- (void)_toggleMapType;

@end

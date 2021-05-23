/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKAnnotationView.h>

@class MKMapView;

__attribute__((visibility("hidden")))
@interface _MKLabelMarkerView : MKAnnotationView

{
    MKMapView *_mapView;
}

@property (weak, nonatomic) MKMapView *mapView;

+ (_Bool)_followsTerrain;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setAnnotation:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (_Bool)updateCalloutViewIfNeededAnimated:(_Bool)arg1;
- (_Bool)shouldShowCallout;
- (void)_deregisterObserver;
- (void)_registerObserver;
- (void)_updateAnchorOffset;

@end

/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIViewController.h>

@class MKMapView, NSArray, NSDateFormatter, NSMutableArray, NSString;

@interface WFKnownNetworkGeoTagViewController : UIViewController

{
    NSArray *_geoTags;
    MKMapView *_mapView;
    NSMutableArray *_annotations;
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) MKMapView *mapView;
@property (retain, nonatomic) NSMutableArray *annotations;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSArray *geoTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)addMap;
- (void)addAnnotations;
- (void)setVisibleMapRegion;
- (void)showPinsOnMap;
- (void)addAnnotationForGeotag:(id)arg1;

@end

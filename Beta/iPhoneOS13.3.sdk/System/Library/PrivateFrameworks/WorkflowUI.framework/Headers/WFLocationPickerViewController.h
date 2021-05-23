/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class CLLocation, CLLocationManager, HULocationTriggerEditorMapDragRadiusView, MKLocalSearch, MKMapView, NSArray, NSIndexPath, NSLayoutConstraint, NSString, UISearchBar, UITableView, UIView, WFLocationValue;

@protocol WFLocationPickerViewControllerDelegate;

@interface WFLocationPickerViewController : UIViewController <Swift>

{
    _Bool _allowsTextOnlyLocation;
    _Bool _allowsPickingCurrentLocation;
    _Bool _resolvesCurrentLocationToPlacemark;
    int _currentAppLocationAuthorizationStatus;
    id <WFLocationPickerViewControllerDelegate> _delegate;
    unsigned long long _pickerType;
    WFLocationValue *_value;
    unsigned long long _regionCondition;
    UISearchBar *_searchBar;
    UIView *_dividerView;
    UITableView *_tableView;
    MKMapView *_mapView;
    HULocationTriggerEditorMapDragRadiusView *_dragView;
    NSIndexPath *_selectedIndexPath;
    NSArray *_constraints;
    NSLayoutConstraint *_mapHeightConstraint;
    NSArray *_recents;
    MKLocalSearch *_localSearch;
    NSArray *_localSearchResults;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
}

@property (retain, nonatomic) WFLocationValue *value;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MKMapView *mapView;
@property (retain, nonatomic) HULocationTriggerEditorMapDragRadiusView *dragView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *mapHeightConstraint;
@property (copy, nonatomic) NSArray *recents;
@property (retain, nonatomic) MKLocalSearch *localSearch;
@property (copy, nonatomic) NSArray *localSearchResults;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) int currentAppLocationAuthorizationStatus;
@property (retain, nonatomic) CLLocation *currentLocation;
@property (weak, nonatomic) id <WFLocationPickerViewControllerDelegate> delegate;
@property (nonatomic, readonly) unsigned long long pickerType;
@property (nonatomic) _Bool allowsTextOnlyLocation;
@property (nonatomic) _Bool allowsPickingCurrentLocation;
@property (nonatomic) unsigned long long regionCondition;
@property (nonatomic) _Bool resolvesCurrentLocationToPlacemark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateViewConstraints;
- (void)done:(id)arg1;
- (_Bool)hasLocation;
- (void)cancel:(id)arg1;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)updateUI;
- (void)checkLocationAuthorization;
- (void)mapRadiusView:(id)arg1 radiusDidChange:(double)arg2;
- (CDStruct_90e2a262)mapRadiusView:(id)arg1 boundingMapRectForOverlay:(id)arg2;
- (id)mapRadiusView:(id)arg1 overlayForRadius:(double)arg2;
- (id)initWithPickerType:(unsigned long long)arg1 value:(id)arg2;
- (_Bool)showsMapView;
- (void)updateUIWithValue:(id)arg1;
- (void)updateRecentsWithSearchText:(id)arg1;
- (_Bool)shouldShowCurrentLocationItem;
- (long long)currentLocationRowIndex;
- (long long)firstRecentRowIndex;
- (long long)lastRecentRowIndex;
- (long long)firstLocalSearchResultRowIndex;
- (void)setupMap;
- (double)mapHeight;
- (void)updateMapHeight;
- (unsigned long long)proximityType;
- (void)displayLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)getMapItemFromRecentContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPlacemarkFromLocation:(id)arg1 streetAddress:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)locationFromRecentContact:(id)arg1;
- (void)showMapRegionForCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (id)circularRegion;
- (_Bool)hasSufficientLocationAuthorization;
- (void)updateValueWithMapItem:(id)arg1;
- (void)updateValueWithRadius:(double)arg1;
- (void)setLocationValueWithPlacemark:(id)arg1;
- (void)setRegionValueWithPlacemark:(id)arg1 radius:(double)arg2;
- (id)overlayWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (void)resetSearchResults;

@end

/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, HULocationTriggerEditorMapDragRadiusView, HULocationTriggerRegion, MKLocalSearch, MKMapView, NSArray, NSIndexPath, NSLayoutConstraint, NSString, UISearchBar, UITableView, UIView;

@protocol HULocationTriggerRegionEditorViewControllerDelegate;

@interface HULocationTriggerRegionEditorViewController : UIViewController <Swift>

{
    HULocationTriggerRegion *_region;
    HMHome *_home;
    id <HULocationTriggerRegionEditorViewControllerDelegate> _delegate;
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
}

@property (retain, nonatomic) HULocationTriggerRegion *region;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MKMapView *mapView;
@property (retain, nonatomic) HULocationTriggerEditorMapDragRadiusView *dragView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *mapHeightConstraint;
@property (retain, nonatomic) NSArray *recents;
@property (retain, nonatomic) MKLocalSearch *localSearch;
@property (retain, nonatomic) NSArray *localSearchResults;
@property (nonatomic, readonly) HMHome *home;
@property (weak, nonatomic) id <HULocationTriggerRegionEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_homeImage;
+ (id)_pinImage;

- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_reloadData;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateViewConstraints;
- (void)_updateUI;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (double)_mapHeight;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (_Bool)_hasLocation;
- (void)mapRadiusView:(id)arg1 radiusDidChange:(double)arg2;
- (CDStruct_02837cd9)mapRadiusView:(id)arg1 boundingMapRectForOverlay:(id)arg2;
- (id)mapRadiusView:(id)arg1 overlayForRadius:(double)arg2;
- (void)_resetSearchResults;
- (id)hu_preloadContent;
- (id)initWithRegion:(id)arg1 home:(id)arg2 delegate:(id)arg3;
- (void)_updateRecentsWithSearchText:(id)arg1;
- (long long)_homeRowIndex;
- (void)_setupMap;
- (void)_updateMapHeight;
- (void)_updateUIWithRegion:(id)arg1;
- (unsigned long long)_proximityType;
- (long long)_firstRecentRowIndex;
- (long long)_lastRecentRowIndex;
- (void)_displayLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_showMapRegionForCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (id)_overlayWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (long long)_firstLocalSearchResultRowIndex;
- (id)_locationForRecentMetadataDictionary:(id)arg1;
- (id)showLocationRegionInvalidAlert;

@end

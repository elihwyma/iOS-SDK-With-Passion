/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIViewController.h>

@class ACAccount, MKMapView, NSArray, NSBundle, NSObject, NSString, SLPlace, SLSheetPlaceSearchController, UISearchBar, UISearchDisplayController, UITableView;

@protocol SLPlaceDataSource, SLSheetPlaceViewControllerDelegate;

@interface SLSheetPlaceViewController : UIViewController

{
    NSArray *_places;
    SLPlace *_selectedPlace;
    NSBundle *_effectiveBundle;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    SLSheetPlaceSearchController *_placeSearchController;
    MKMapView *_mapView;
    _Bool _searchPresented;
    _Bool _searchAnimationComplete;
    double _mapHeight;
    _Bool _searchEnabled;
    NSObject<SLSheetPlaceViewControllerDelegate> *_selectionDelegate;
    ACAccount *_account;
    NSObject<SLPlaceDataSource> *_placeDataSource;
}

@property (retain) ACAccount *account;
@property (retain) NSObject<SLPlaceDataSource> *placeDataSource;
@property (retain) NSArray *places;
@property (weak) NSObject<SLSheetPlaceViewControllerDelegate> *selectionDelegate;
@property (nonatomic) _Bool searchEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (void)_centerMapWithSelectedPlace:(id)arg1;
- (void)_calculatePreferredContentSize;
- (double)_mapHeightForInterfaceOrientation:(long long)arg1;
- (double)_preferredViewHeight;
- (void)_layoutNormal;
- (void)_layoutForSearch;
- (void)_presentSearch;
- (void)_restoreFromSearch;
- (_Bool)_forceSelectPlace:(id)arg1 setMapAnnotation:(_Bool)arg2;
- (void)_centerMapForPlaces;
- (CDStruct_2b0c6e0b)_regionForPlaces:(id)arg1;
- (id)_placeForRow:(long long)arg1;
- (id)initWithPlaceDataSource:(id)arg1 effectiveBundle:(id)arg2;
- (void)setSelectedPlace:(id)arg1;

@end

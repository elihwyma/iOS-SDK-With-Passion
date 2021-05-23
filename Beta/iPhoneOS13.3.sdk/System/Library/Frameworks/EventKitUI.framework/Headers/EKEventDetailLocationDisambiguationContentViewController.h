/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class EKStructuredLocation, MKCircleRenderer, MKMapView, MKPointAnnotation, NSCache, NSMutableArray, NSObject, NSSet, NSString, UISearchBar, UITableView, UIView;

@protocol OS_dispatch_queue;

@interface EKEventDetailLocationDisambiguationContentViewController : UIViewController

{
    EKStructuredLocation *_location;
    NSMutableArray *_pois;
    CDUnknownBlockType _completionBlock;
    UISearchBar *_searchBar;
    MKMapView *_mapView;
    UIView *_separatorLine;
    UITableView *_tableView;
    MKPointAnnotation *_pin;
    MKCircleRenderer *_circleRenderer;
    _Bool _textChanged;
    _Bool _geocoding;
    _Bool _done;
    NSObject<OS_dispatch_queue> *_iconRenderQueue;
    NSCache *_iconCache;
    _Bool _rowSelectionInitialized;
    unsigned long long _currentLayoutParadigm;
    NSSet *_tallConstraints;
    NSSet *_iPadConstraints;
    NSSet *_splitConstraints;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)updateViewConstraints;
- (void)_createConstraints;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)_selectRow:(unsigned long long)arg1;
- (id)initWithLocation:(id)arg1 pois:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_constraintsForParadigm:(unsigned long long)arg1;
- (void)cancelTapped:(id)arg1;
- (void)doneTapped:(id)arg1;
- (void)_selectCircle;
- (void)_updateMapRegion;
- (void)_deselectCircle;
- (_Bool)_shouldEnableAddButton;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, PHAsset, PXPlacesMapFetchResultController, UIBarButtonItem;

@protocol PXPlacesAssetsSelectionDelegate, PXPlacesGeotaggable, PXPlacesMapBarButtonsDelegate, PXPlacesMapGeotaggableInfoDelegate;

@interface PXPlacesMapFetchResultViewController : UIViewController

{
    _Bool _showNavigationBar;
    _Bool _autoRefocusOnDataChange;
    id <PXPlacesAssetsSelectionDelegate> _assetSelectionDelegate;
    id <PXPlacesMapBarButtonsDelegate> _barButtonsDelegate;
    UIViewController *_pxOneUpPresentationViewController;
    unsigned long long _style;
    PXPlacesMapFetchResultController *_mapFetchResultsController;
    PHAsset<PXPlacesGeotaggable> *_selectedGeotaggable;
    id <PXPlacesMapGeotaggableInfoDelegate> _geotaggableInfoDelegate;
    UIBarButtonItem *_filterAssetsBtn;
}

@property (retain, nonatomic) PXPlacesMapFetchResultController *mapFetchResultsController;
@property (retain) PHAsset<PXPlacesGeotaggable> *selectedGeotaggable;
@property (retain, nonatomic) id <PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate;
@property (retain, nonatomic) UIBarButtonItem *filterAssetsBtn;
@property (weak, nonatomic) id <PXPlacesAssetsSelectionDelegate> assetSelectionDelegate;
@property (weak, nonatomic) id <PXPlacesMapBarButtonsDelegate> barButtonsDelegate;
@property (weak, nonatomic) UIViewController *pxOneUpPresentationViewController;
@property (nonatomic) unsigned long long style;
@property (nonatomic) _Bool showNavigationBar;
@property _Bool autoRefocusOnDataChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)didSelectGeotaggableItems:(id)arg1 fromMapView:(id)arg2;
- (void)locationServiceAuthorizationChanged;
- (void)mapRegionDidChange:(id)arg1;
- (void)dataSourceDidChange:(id)arg1;
- (void)reloadStyle;
- (void)_placeBarButtonItems:(id)arg1;
- (void)_reloadContentModeDisplay:(unsigned long long)arg1;
- (void)tapFilterAssetsBtn:(id)arg1;
- (void)tapCountToolbarButton:(id)arg1;
- (void)tapInfoToolbarButton:(id)arg1;
- (void)tapShowAll:(id)arg1;
- (void)_selectedGeotaggables:(id)arg1;
- (id)_fetchHydratedAssetForPlacesAsset:(id)arg1;
- (id)dataSourceForAssets:(id)arg1;
- (void)didEnterForeground:(id)arg1;
- (void)ppt_performPlacesScrollTest:(id)arg1 iterations:(long long)arg2 screenDelta:(long long)arg3 delay:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)ppt_performPlacesZoomTest:(id)arg1 iterations:(long long)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;

@end

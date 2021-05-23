/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class PXPlacesMapController, PXPlacesMapPipeline, PXPlacesMapView, PXPlacesPhotoAssetsStore;

@protocol OS_dispatch_queue, PXPlacesMapControllerAccess, PXPlacesMapGeotaggableInfoDelegate;

@interface PXPlacesMapFetchResultController : NSObject

{
    id <PXPlacesMapControllerAccess> _mapViewController;
    unsigned long long _contentMode;
    id <PXPlacesMapGeotaggableInfoDelegate> _geotaggableInfoDelegate;
    PXPlacesPhotoAssetsStore *_providedAssetStore;
    PXPlacesMapPipeline *_providedPipeline;
    PXPlacesPhotoAssetsStore *_albumAssetStore;
    PXPlacesMapPipeline *_albumPipeline;
    PXPlacesMapPipeline *_currentPipeline;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) id <PXPlacesMapControllerAccess> mapViewController;
@property (weak, nonatomic) id <PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate;
@property (retain) PXPlacesPhotoAssetsStore *providedAssetStore;
@property (retain) PXPlacesMapPipeline *providedPipeline;
@property (retain, nonatomic) PXPlacesPhotoAssetsStore *albumAssetStore;
@property (retain, nonatomic) PXPlacesMapPipeline *albumPipeline;
@property (retain, nonatomic) PXPlacesMapPipeline *currentPipeline;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) PXPlacesMapView *mapView;
@property (nonatomic, readonly) PXPlacesMapController *mapController;
@property (nonatomic) unsigned long long contentMode;

- (void)resumeWithCompletion:(CDUnknownBlockType)arg1;
- (void)focusOnGeotaggablesAnimated:(_Bool)arg1;
- (id)visibleGeotaggables;
- (void)reloadContentModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)focusOnProvidedAssetsAnimated:(_Bool)arg1;
- (id)initWithGeotaggableInfoDelegate:(id)arg1 andMapViewController:(id)arg2;
- (void)loadProvidedAssetStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadFetchResults:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadFetchResult:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)currentAssetStore;
- (void)focusOnProvidedAssetsImmediately;
- (void)focusOnMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;

@end

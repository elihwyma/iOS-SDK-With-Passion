/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsDataSourceManager.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary, NSPredicate, NSString, PXAssetsDataSource, PXCuratedLibraryAssetsDataSourceManagerConfiguration, PXPhotoKitAssetsDataSourceManager, PXUpdater, PXVisualPositionsChangeDetails;

@protocol PXCuratedLibraryAssetsDataSourceManagerDelegate;

@interface PXCuratedLibraryAssetsDataSourceManager : PXAssetsDataSourceManager <Swift>

{
    struct {
        _Bool isSelectingAssets;
        _Bool visibleAssetCollections;
        _Bool willTransitionFromZoomLevelToZoomLevel;
        _Bool didTransitionFromZoomLevelToZoomLevel;
        _Bool dominantAssetCollectionReferenceForZoomLevel;
        _Bool transitionTypeFromZoomLevelToZoomLevel;
    } _delegateRespondsTo;
    NSDictionary *_dataSourceManagerByZoomLevel;
    _Bool _isForcingSections;
    _Bool _canLoadData;
    _Bool _wantsCuration;
    id <PXCuratedLibraryAssetsDataSourceManagerDelegate> _delegate;
    long long _zoomLevel;
    NSPredicate *_allPhotosFilterPredicate;
    PXUpdater *_updater;
    PXCuratedLibraryAssetsDataSourceManagerConfiguration *_configuration;
    long long _zoomLevelForCurrentDataSourceManager;
    PXAssetsDataSource *_currentDataSource;
    long long _currentDataSourceZoomLevel;
    PXVisualPositionsChangeDetails *_lastVisualPositionsChangeDetails;
    long long _lastTransitionType;
    unsigned long long _lastVisualPositionsChangeFromDataSourceIdentifier;
    unsigned long long _lastVisualPositionsChangeToDataSourceIdentifier;
}

@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) PXCuratedLibraryAssetsDataSourceManagerConfiguration *configuration;
@property (nonatomic) _Bool canLoadData;
@property (nonatomic) long long zoomLevelForCurrentDataSourceManager;
@property (nonatomic) _Bool wantsCuration;
@property (copy, nonatomic) NSPredicate *allPhotosFilterPredicate;
@property (retain, nonatomic) PXAssetsDataSource *currentDataSource;
@property (nonatomic, readonly) PXAssetsDataSourceManager *currentAssetsDataSourceManager;
@property (nonatomic) long long currentDataSourceZoomLevel;
@property (retain, nonatomic) PXVisualPositionsChangeDetails *lastVisualPositionsChangeDetails;
@property (nonatomic) long long lastTransitionType;
@property (nonatomic) unsigned long long lastVisualPositionsChangeFromDataSourceIdentifier;
@property (nonatomic) unsigned long long lastVisualPositionsChangeToDataSourceIdentifier;
@property (weak, nonatomic) id <PXCuratedLibraryAssetsDataSourceManagerDelegate> delegate;
@property (nonatomic, readonly) long long zoomLevel;
@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *currentPhotoKitAssetsDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)setNeedsUpdate;
- (void)setZoomLevel:(long long)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)loadIfNeeded;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didPerformChanges;
- (id)assetsInAssetCollection:(id)arg1;
- (id)createInitialDataSource;
- (void)_updateDataSource;
- (void)_invalidateDataSource;
- (void)setCurationEnabled:(_Bool)arg1 forAssetCollection:(id)arg2;
- (_Bool)forceAccurateAllSectionsIfNeeded;
- (_Bool)forceAccurateSectionsIfNeeded:(id)arg1;
- (_Bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (_Bool)forceAccurateSectionsIfNeeded:(id)arg1 inZoomLevel:(long long)arg2;
- (void)setTransientKeyAsset:(id)arg1 forAssetCollection:(id)arg2 zoomLevel:(long long)arg3;
- (void)resumeChangeDelivery:(id)arg1;
- (id)visualPositionsChangeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;
- (long long)transitionTypeFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;
- (id)dataSourceManagerForZoomLevel:(long long)arg1;
- (id)dataSourceForZoomLevel:(long long)arg1;
- (unsigned long long)libraryStateForZoomLevel:(long long)arg1;
- (id)_photosDataSourceForZoomLevel:(long long)arg1;
- (void)ensureLastSectionHasContent;
- (_Bool)forceAllPhotosAccurateIfNeeded;
- (id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2;
- (id)assetCollectionReferencesInDataSourceForZoomLevel:(long long)arg1 withParentAssetCollectionReference:(id)arg2 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)arg3;
- (id)firstAssetCollectionReferenceInDataSourceForZoomLevel:(long long)arg1 withParent:(id)arg2;
- (void)_invalidatePropertiesDerivedFromZoomLevel;
- (void)_updatePropertiesDerivedFromZoomLevel;
- (void)_invalidateDataSourceManagers;
- (void)_updateDataSourceManagers;
- (void)_invalidateCuration;
- (void)_updateCuration;

@end

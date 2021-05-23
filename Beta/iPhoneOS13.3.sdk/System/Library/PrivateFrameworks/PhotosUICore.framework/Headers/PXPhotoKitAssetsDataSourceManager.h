/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@class NSNumber, NSString, PXPhotoKitAssetsDataSource, PXPhotosDataSource;

@protocol PXPhotosDataSourceProvider;

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager

{
    PXPhotosDataSource *_photosDataSource;
    NSNumber *_backgroundFetchOriginSection;
    id <PXPhotosDataSourceProvider> _photosDataSourceProvider;
}

@property (retain, nonatomic) id <PXPhotosDataSourceProvider> photosDataSourceProvider;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (nonatomic, readonly) PXPhotoKitAssetsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long backgroundFetchOriginSection;

+ (id)dataSourceManagerWithAsset:(id)arg1;
+ (id)dataSourceManagerForAssetCollection:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)createInitialDataSource;
- (id)photosDataSourceInterestingAssetReferences:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)photosDataSourceDidFinishBackgroundFetching:(id)arg1;
- (void)setCurationEnabled:(_Bool)arg1 forAssetCollection:(id)arg2;
- (_Bool)forceAccurateSectionsIfNeeded:(id)arg1;
- (_Bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (void)startBackgroundFetchIfNeeded;
- (id)initWithPhotosDataSource:(id)arg1;
- (id)initWithPhotosDataSourceProvider:(id)arg1;
- (void)_ensurePhotosDataSource;
- (id)_createAssetsDataSourceWithPhotosDataSource:(id)arg1 withChange:(id)arg2;
- (void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2;
- (void)setPhotosDataSource:(id)arg1 publishIntermediateEmptySnapshot:(_Bool)arg2;

@end

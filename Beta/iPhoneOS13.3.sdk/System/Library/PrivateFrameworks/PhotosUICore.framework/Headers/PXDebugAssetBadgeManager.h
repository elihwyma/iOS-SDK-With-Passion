/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetBadgeManager.h>

@class NSSet, NSString, PHFetchResult, PXMiroMovieProvider, PXPhotosDataSource;

@interface PXDebugAssetBadgeManager : PXAssetBadgeManager

{
    PXPhotosDataSource *_curatedPhotosDataSource;
    PXMiroMovieProvider *_miroMovieProvider;
    PXPhotosDataSource *_photosDataSource;
    PHFetchResult *__photosGraphCurationAssets;
    NSSet *__miroCurationAssets;
}

@property (retain, nonatomic, setter=_setPhotosGraphCurationAssets:) PHFetchResult *_photosGraphCurationAssets;
@property (retain, nonatomic, setter=_setMiroCurationAssets:) NSSet *_miroCurationAssets;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (struct PXAssetBadgeInfo)badgeInfoForAsset:(id)arg1 inCollection:(id)arg2 options:(unsigned long long)arg3;
- (void)_updateAssets;
- (_Bool)_isAssetContainedInMiroCuration:(id)arg1;
- (_Bool)_isAssetContainedInPhotosGraphCuration:(id)arg1;

@end

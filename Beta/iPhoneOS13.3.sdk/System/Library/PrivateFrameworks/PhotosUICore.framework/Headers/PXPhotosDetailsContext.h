/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary, NSString, PHFetchResult, PXDisplayTitleInfo, PXPhotosDataSource, PXPhotosDetailsViewModel;

@interface PXPhotosDetailsContext : PXObservable <Swift>

{
    _Bool _shouldShowMovieHeader;
    _Bool _hasLocation;
    _Bool _shouldUseKeyFace;
    PXPhotosDataSource *_photosDataSource;
    PXDisplayTitleInfo *_displayTitleInfo;
    PXPhotosDetailsContext *_parentContext;
    PHFetchResult *_keyAssetsFetchResult;
    unsigned long long _viewSourceOrigin;
    PXPhotosDetailsViewModel *_viewModel;
    unsigned long long _contextHierarchyDepth;
    PHFetchResult *_assetCollections;
    NSDictionary *_assetsByCollection;
    PHFetchResult *_people;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    NSString *_titleFontName;
}

@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;
@property (nonatomic, readonly) PXDisplayTitleInfo *displayTitleInfo;
@property (weak, nonatomic, readonly) PXPhotosDetailsContext *parentContext;
@property (nonatomic, readonly) PHFetchResult *keyAssetsFetchResult;
@property (nonatomic, readonly) unsigned long long viewSourceOrigin;
@property (nonatomic, readonly) PXPhotosDetailsViewModel *viewModel;
@property (nonatomic, readonly) unsigned long long contextHierarchyDepth;
@property (nonatomic, readonly) PHFetchResult *assetCollections;
@property (copy, nonatomic, readonly) NSDictionary *assetsByCollection;
@property (nonatomic, readonly) PHFetchResult *people;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (copy, nonatomic, readonly) NSString *localizedSubtitle;
@property (copy, nonatomic, readonly) NSString *titleFontName;
@property (nonatomic, readonly) _Bool shouldShowMovieHeader;
@property (nonatomic, readonly) _Bool hasLocation;
@property (nonatomic, readonly) _Bool shouldShowHeaderTitle;
@property (nonatomic, readonly) _Bool shouldUseKeyFace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 viewSourceOrigin:(unsigned long long)arg3;
+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 keyAssets:(id)arg3 enableCuration:(_Bool)arg4 enableKeyAssets:(_Bool)arg5 useVerboseSmartDescription:(_Bool)arg6 viewSourceOrigin:(unsigned long long)arg7;
+ (id)photosDetailsContextForMemory:(id)arg1;
+ (id)photosDetailsContextForMemory:(id)arg1 enableCuration:(_Bool)arg2 enableKeyAssets:(_Bool)arg3;
+ (id)photosDetailsContextForAsset:(id)arg1 parentContext:(id)arg2;

- (id)init;
- (void)setLocalizedTitle:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setHasLocation:(_Bool)arg1;
- (void)setViewModel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (void)setTitleFontName:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)setPhotosDataSource:(id)arg1;
- (void)setAssetCollections:(id)arg1;
- (void)setAssetsByCollection:(id)arg1;
- (void)setKeyAssetsFetchResult:(id)arg1;
- (void)setShouldShowMovieHeader:(_Bool)arg1;
- (void)setViewSourceOrigin:(unsigned long long)arg1;
- (id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4;
- (void)_updatePropertiesDerivedFromPhotosDataSource;
- (void)_updatePropertiesDerivedFromDisplayTitleInfo;

@end

/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PHCachingImageManager, PHImageRequestOptions, PUAlbumListCellContentViewHelperConfiguration, PUFontManager, PXAssetBadgeManager, PXCollectionTileLayoutTemplate, PXExtendedTraitCollection, PXFeatureSpec, PXFeatureSpecManager, PXPhotoKitCollectionsDataSourceManager, UIImage;

__attribute__((visibility("hidden")))
@interface PUAlbumListCellContentViewHelper : NSObject <Swift>

{
    _Bool _didInitializeMemoriesTitleSupport;
    PXExtendedTraitCollection *_traitCollection;
    PUAlbumListCellContentViewHelperConfiguration *_configuration;
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;
    PUFontManager *_fontManager;
    UIImage *_emptyAlbumPlaceholderImage;
    UIImage *_emptySharedAlbumPlaceholderImage;
    UIImage *_addSharedAlbumPlaceholderImage;
    UIImage *_hiddenAlbumPlaceholderImage;
    UIImage *_recentlyDeletedAlbumPlaceholderImage;
    PHImageRequestOptions *_imageRequestOptions;
    PHCachingImageManager *_cachingImageManager;
    PXFeatureSpecManager *_featureSpecManager;
    PXFeatureSpec *_featureSpec;
    PXAssetBadgeManager *_badgeManager;
    PXCollectionTileLayoutTemplate *_collectionTileLayoutTemplate;
    struct CGSize _albumCellSize;
}

@property (nonatomic, readonly) PUAlbumListCellContentViewHelperConfiguration *configuration;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PUFontManager *fontManager;
@property (nonatomic) struct CGSize albumCellSize;
@property (retain, nonatomic) UIImage *emptyAlbumPlaceholderImage;
@property (retain, nonatomic) UIImage *emptySharedAlbumPlaceholderImage;
@property (retain, nonatomic) UIImage *addSharedAlbumPlaceholderImage;
@property (retain, nonatomic) UIImage *hiddenAlbumPlaceholderImage;
@property (retain, nonatomic) UIImage *recentlyDeletedAlbumPlaceholderImage;
@property (retain, nonatomic) PHImageRequestOptions *imageRequestOptions;
@property (retain, nonatomic) PHCachingImageManager *cachingImageManager;
@property (retain, nonatomic) PXFeatureSpecManager *featureSpecManager;
@property (retain, nonatomic) PXFeatureSpec *featureSpec;
@property (retain, nonatomic) PXAssetBadgeManager *badgeManager;
@property (retain, nonatomic) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate;
@property (nonatomic) _Bool didInitializeMemoriesTitleSupport;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_placeholderImageWithSize:(struct CGSize)arg1 backgroundColor:(id)arg2 glyphImageName:(id)arg3 glyphAlpha:(double)arg4;

- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithConfiguration:(id)arg1 dataSourceManager:(id)arg2 extendedTraitCollection:(id)arg3;
- (void)configureAlbumListCellContentView:(id)arg1 forCollection:(id)arg2 title:(id)arg3 animated:(_Bool)arg4 enabled:(_Bool)arg5 editing:(_Bool)arg6;
- (long long)estimatedIndexOfAssetForStackItemAtIndex:(long long)arg1 inCollection:(id)arg2 albumListCellContentView:(id)arg3;
- (void)reconfigureImageInAlbumListCellContentView:(id)arg1 withPlaceholderImage:(id)arg2;
- (void)_invalidateAlbumCellSize;
- (void)_recalculateAlbumCellSize;
- (unsigned long long)_editCapabilitiesForAlbum:(id)arg1;
- (id)_visibleAssetsForCollection:(id)arg1 correspondingCollections:(out id *)arg2;
- (id)_visibleAssetsForCollection:(id)arg1 maximumNumberOfVisibleAssets:(long long)arg2 correspondingCollections:(out id *)arg3;
- (void)_updateStackView:(id)arg1 forFaces:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 memoriesCollection:(id)arg3 memories:(id)arg4 withCustomEmptyPlaceholderImage:(id)arg5;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_updateAlbumListCellContentViewForPlacesAlbum:(id)arg1;
- (void)_updateAlbumListCellContentViewForPeopleAlbum:(id)arg1;
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3 withCustomEmptyPlaceHolderImage:(id)arg4;
- (id)subtitleForCollection:(id)arg1;
- (id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(long long)arg2;
- (void)_getDisplayableAssets:(id *)arg1 indexes:(id *)arg2 forCollection:(id)arg3 maximumCount:(long long)arg4 useCache:(_Bool)arg5;
- (id)_getDisplayableAssetsForStandInCollectionList:(id)arg1 maximumCount:(long long)arg2 useCache:(_Bool)arg3 correspondingCollections:(out id *)arg4;
- (void)_initializeMemoriesTitleSupportIfNeeded;

@end

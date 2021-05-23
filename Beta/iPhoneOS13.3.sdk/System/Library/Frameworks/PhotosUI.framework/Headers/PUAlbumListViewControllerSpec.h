/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PULegacyViewControllerSpec.h>

@class NSString, PUFeedViewControllerSpec, PUFontManager, PUPhotoDecoration, PUPhotosAlbumViewControllerSpec, PUPhotosGridViewControllerSpec, PUPhotosPanoramaViewControllerSpec, PUPhotosPickerViewControllerSpec, PXLayoutMetricInterpolator, UIImage;

@interface PUAlbumListViewControllerSpec : PULegacyViewControllerSpec

{
    UIImage *_emptyAlbumPlaceholderImage;
    UIImage *_emptySharedAlbumPlaceholderImage;
    UIImage *_addSharedAlbumPlaceholderImage;
    UIImage *_hiddenAlbumPlaceholderImage;
    UIImage *_recentlyDeletedAlbumPlaceholderImage;
    PUPhotoDecoration *_stackPhotoDecoration;
    PUPhotoDecoration *_emptyStackPhotoDecoration;
    _Bool _shouldUseTableView;
    _Bool _showsDeleteButtonOnCellContentView;
    _Bool _usesStackTransitionToGrid;
    _Bool _shouldUseCollageForCloudFeedPlaceholder;
    _Bool _shouldUseShortTitleForStandInAlbumList;
    _Bool _canShowVirtualCollections;
    PUFontManager *__fontManager;
    unsigned long long _stackViewStyle;
    unsigned long long _folderStackViewStyle;
    double _posterSquareCornerRadius;
    double _posterSubitemCornerRadius;
    long long _collageImageContentMode;
    double _collageSpacing;
    long long _cellContentViewLayout;
    double _sectionHeaderHeight;
    double _sectionFooterHeight;
    long long _albumDeletionConfirmationStyle;
    PUPhotosGridViewControllerSpec *_gridViewControllerSpec;
    PUPhotosAlbumViewControllerSpec *_albumViewControllerSpec;
    PUPhotosPanoramaViewControllerSpec *_panoramaViewControllerSpec;
    PUPhotosPickerViewControllerSpec *_photosPickerViewControllerSpec;
    PUFeedViewControllerSpec *_feedViewControllerSpec;
    struct CGSize _imageSize;
    struct CGSize _stackSize;
    struct UIOffset _stackOffset;
    struct UIOffset _stackPerspectiveOffset;
    struct CGSize _collageImageSize;
    struct UIEdgeInsets _stackPerspectiveInsets;
}

@property (nonatomic, readonly) PUFontManager *_fontManager;
@property (nonatomic, readonly) PXLayoutMetricInterpolator *_insetsInterpolator;
@property (nonatomic, readonly) PXLayoutMetricInterpolator *_stackWidthInterpolator;
@property (readonly) _Bool shouldUseTableView;
@property (nonatomic, readonly) struct CGSize contentSizeForViewInPopover;
@property (readonly) struct CGSize imageSize;
@property (readonly) long long imageContentMode;
@property (nonatomic, readonly) unsigned long long stackViewStyle;
@property (nonatomic, readonly) unsigned long long folderStackViewStyle;
@property (nonatomic, readonly) PUPhotoDecoration *stackPhotoDecoration;
@property (nonatomic, readonly) PUPhotoDecoration *emptyStackPhotoDecoration;
@property (nonatomic, readonly) struct CGSize stackSize;
@property (nonatomic, readonly) struct UIOffset stackOffset;
@property (nonatomic, readonly) struct UIEdgeInsets stackPerspectiveInsets;
@property (nonatomic, readonly) struct UIOffset stackPerspectiveOffset;
@property (nonatomic, readonly) double posterSquareCornerRadius;
@property (nonatomic, readonly) double posterSubitemCornerRadius;
@property (readonly) struct CGSize collageImageSize;
@property (readonly) long long collageImageContentMode;
@property (nonatomic, readonly) double collageSpacing;
@property (nonatomic, readonly) _Bool showsDeleteButtonOnCellContentView;
@property (nonatomic, readonly) long long cellContentViewLayout;
@property (nonatomic, readonly) _Bool usesStackTransitionToGrid;
@property (nonatomic, readonly) double sectionHeaderHeight;
@property (nonatomic, readonly) double sectionFooterHeight;
@property (nonatomic, readonly) _Bool shouldShowSectionHeaders;
@property (nonatomic, readonly) NSString *nameOfEmptyAlbumPlaceholderImage;
@property (nonatomic, readonly) NSString *nameOfAddSharedAlbumPlaceholderImage;
@property (nonatomic, readonly) NSString *nameOfEmptySharedAlbumPlaceholderImage;
@property (nonatomic, readonly) NSString *nameOfHiddenAlbumPlaceholderImage;
@property (nonatomic, readonly) NSString *nameOfRecentlyDeletedAlbumPlaceholderImage;
@property (nonatomic, readonly) _Bool shouldUseCollageForCloudFeedPlaceholder;
@property (nonatomic, readonly) _Bool shouldUseShortTitleForStandInAlbumList;
@property (nonatomic, readonly) _Bool canShowVirtualCollections;
@property (nonatomic, readonly) long long albumDeletionConfirmationStyle;
@property (nonatomic, readonly) PUAlbumListViewControllerSpec *standInAlbumListViewControllerSpec;
@property (nonatomic, readonly) PUPhotosGridViewControllerSpec *gridViewControllerSpec;
@property (nonatomic, readonly) PUPhotosAlbumViewControllerSpec *albumViewControllerSpec;
@property (nonatomic, readonly) PUPhotosPanoramaViewControllerSpec *panoramaViewControllerSpec;
@property (nonatomic, readonly) PUPhotosPickerViewControllerSpec *photosPickerViewControllerSpec;
@property (nonatomic, readonly) PUFeedViewControllerSpec *feedViewControllerSpec;

+ (id)phoneSpec;
+ (id)padSpec;

- (struct CGSize)imageSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)stackSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeForStackSize:(struct CGSize)arg1;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (void)_getStackSize:(struct CGSize *)arg1 outEdgeInsets:(struct UIEdgeInsets *)arg2 forLayoutReferenceSize:(struct CGSize)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4;
- (void)configureCollectionViewAlbumListLayout:(id)arg1 forBounds:(struct CGRect)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGSize)tileSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2 stackViewStyle:(unsigned long long)arg3;
- (id)emptyAlbumPlaceholderImageForWindow:(id)arg1;
- (id)emptySharedAlbumPlaceholderImageForWindow:(id)arg1;
- (id)addSharedAlbumPlaceholderImageForWindow:(id)arg1;
- (id)hiddenAlbumPlaceholderImageForWindow:(id)arg1;
- (id)recentlyDeletedAlbumPlaceholderImageForWindow:(id)arg1;
- (id)_centeredTintedGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize)arg3 window:(id)arg4;
- (id)_centeredGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize)arg3 imageAlpha:(double)arg4 window:(id)arg5;
- (struct CGPoint)_pixelRoundedOriginForCenteredImage:(id)arg1 inRect:(struct CGRect)arg2 window:(id)arg3;

@end

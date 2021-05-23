/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAlbumListViewControllerSpec.h>

@interface PUAlbumListViewControllerPadSpec : PUAlbumListViewControllerSpec

- (struct CGSize)stackSize;
- (struct CGSize)imageSize;
- (double)sectionHeaderHeight;
- (double)sectionFooterHeight;
- (unsigned long long)stackViewStyle;
- (_Bool)shouldShowSectionHeaders;
- (_Bool)showsDeleteButtonOnCellContentView;
- (long long)cellContentViewLayout;
- (unsigned long long)folderStackViewStyle;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (struct UIOffset)stackOffset;
- (struct UIOffset)stackPerspectiveOffset;
- (struct UIEdgeInsets)stackPerspectiveInsets;
- (double)posterSquareCornerRadius;
- (double)posterSubitemCornerRadius;
- (struct CGSize)imageSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)stackSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeForStackSize:(struct CGSize)arg1;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (id)stackPhotoDecoration;
- (id)emptyStackPhotoDecoration;
- (id)gridViewControllerSpec;
- (id)albumViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (id)feedViewControllerSpec;
- (long long)albumDeletionConfirmationStyle;
- (_Bool)shouldUseCollageForCloudFeedPlaceholder;
- (struct CGSize)collageImageSize;
- (long long)collageImageContentMode;
- (double)collageSpacing;
- (_Bool)usesStackTransitionToGrid;
- (_Bool)canShowVirtualCollections;

@end

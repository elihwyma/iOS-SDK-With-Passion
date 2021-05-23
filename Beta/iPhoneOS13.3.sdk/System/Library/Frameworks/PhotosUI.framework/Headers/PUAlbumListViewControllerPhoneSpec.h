/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAlbumListViewControllerCommonPhoneSpec.h>

@interface PUAlbumListViewControllerPhoneSpec : PUAlbumListViewControllerCommonPhoneSpec

- (struct CGSize)stackSize;
- (struct CGSize)imageSize;
- (double)sectionHeaderHeight;
- (double)sectionFooterHeight;
- (unsigned long long)stackViewStyle;
- (_Bool)shouldShowSectionHeaders;
- (_Bool)shouldUseTableView;
- (long long)cellContentViewLayout;
- (unsigned long long)folderStackViewStyle;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (struct CGSize)imageSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)stackSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeForStackSize:(struct CGSize)arg1;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;

@end

/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAlbumListViewControllerCommonPhoneSpec.h>

@interface PUAlbumListViewControllerCommonImagePickerSpec : PUAlbumListViewControllerCommonPhoneSpec

- (struct CGSize)stackSize;
- (struct CGSize)imageSize;
- (double)sectionHeaderHeight;
- (double)sectionFooterHeight;
- (unsigned long long)stackViewStyle;
- (_Bool)showsDeleteButtonOnCellContentView;
- (_Bool)shouldUseTableView;
- (long long)cellContentViewLayout;
- (unsigned long long)folderStackViewStyle;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (_Bool)shouldUseCollageForCloudFeedPlaceholder;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;

@end

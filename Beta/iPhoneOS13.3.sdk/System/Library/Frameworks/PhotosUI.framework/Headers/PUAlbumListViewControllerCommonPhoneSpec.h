/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAlbumListViewControllerSpec.h>

@interface PUAlbumListViewControllerCommonPhoneSpec : PUAlbumListViewControllerSpec

- (double)sectionHeaderHeight;
- (double)sectionFooterHeight;
- (_Bool)showsDeleteButtonOnCellContentView;
- (struct UIOffset)stackOffset;
- (struct UIOffset)stackPerspectiveOffset;
- (struct UIEdgeInsets)stackPerspectiveInsets;
- (double)posterSquareCornerRadius;
- (double)posterSubitemCornerRadius;
- (id)stackPhotoDecoration;
- (id)emptyStackPhotoDecoration;
- (id)gridViewControllerSpec;
- (id)albumViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (id)feedViewControllerSpec;
- (long long)albumDeletionConfirmationStyle;
- (_Bool)shouldUseCollageForCloudFeedPlaceholder;

@end

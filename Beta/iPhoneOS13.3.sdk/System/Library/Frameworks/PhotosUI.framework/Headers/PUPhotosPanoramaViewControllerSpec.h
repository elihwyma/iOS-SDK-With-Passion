/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PULegacyViewControllerSpec.h>

@interface PUPhotosPanoramaViewControllerSpec : PULegacyViewControllerSpec

+ (id)phoneSpec;
+ (id)padSpec;

- (unsigned long long)supportedInterfaceOrientations;
- (double)sectionHeaderHeight;
- (double)globalFooterHeight;
- (unsigned short)thumbnailImageFormat;
- (long long)cellFillMode;
- (id)gridSpec;
- (struct CGSize)_itemSizeForWidth:(double)arg1;
- (unsigned short)fastThumbnailImageFormat;
- (void)configureCollectionViewGridLayout:(id)arg1 referenceWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;

@end

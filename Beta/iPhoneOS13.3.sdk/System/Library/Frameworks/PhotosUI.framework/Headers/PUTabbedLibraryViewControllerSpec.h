/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PULegacyViewControllerSpec.h>

@interface PUTabbedLibraryViewControllerSpec : PULegacyViewControllerSpec

+ (id)phoneSpec;
+ (id)padSpec;

- (id)feedViewControllerSpec;
- (id)albumListViewControllerSpec;
- (id)createAlbumListViewController;
- (id)createSharedAlbumListViewController;
- (id)zoomableGridViewControllerSpec;

@end

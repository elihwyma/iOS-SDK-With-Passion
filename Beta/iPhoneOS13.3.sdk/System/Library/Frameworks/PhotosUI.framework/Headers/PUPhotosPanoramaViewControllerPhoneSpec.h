/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosPanoramaViewControllerSpec.h>

@class PUPhotosGridViewControllerSpec;

@interface PUPhotosPanoramaViewControllerPhoneSpec : PUPhotosPanoramaViewControllerSpec

{
    PUPhotosGridViewControllerSpec *_gridSpec;
}

- (id)gridSpec;
- (struct CGSize)_itemSizeForWidth:(double)arg1;

@end

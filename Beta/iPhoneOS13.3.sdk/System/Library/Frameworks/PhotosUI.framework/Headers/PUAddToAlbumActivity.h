/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXActivity.h>

@class PUAlbumPickerViewController;

__attribute__((visibility("hidden")))
@interface PUAddToAlbumActivity : PXActivity

{
    PUAlbumPickerViewController *_albumPickerViewController;
}

+ (long long)activityCategory;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)_activityBundleImageConfiguration;

@end

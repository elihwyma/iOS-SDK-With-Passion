/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXActivity.h>

__attribute__((visibility("hidden")))
@interface PUInternalGIFExportActivity : PXActivity

+ (long long)activityCategory;

- (id)activityType;
- (id)_asset;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;

@end

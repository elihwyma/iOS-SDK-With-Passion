/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXActivity.h>

@class PUAssetHidingHelper;

__attribute__((visibility("hidden")))
@interface PUHideActivity : PXActivity

{
    PUAssetHidingHelper *_assetHidingHelper;
}

+ (long long)activityCategory;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)setItemSourceController:(id)arg1;
- (id)_assetHidingHelper;

@end

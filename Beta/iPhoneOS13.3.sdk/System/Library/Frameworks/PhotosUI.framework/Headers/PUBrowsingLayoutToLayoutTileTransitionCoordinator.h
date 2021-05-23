/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUDefaultLayoutToLayoutTileTransitionCoordinator.h>

__attribute__((visibility("hidden")))
@interface PUBrowsingLayoutToLayoutTileTransitionCoordinator : PUDefaultLayoutToLayoutTileTransitionCoordinator

- (id)newTileAnimationOptions;
- (_Bool)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;

@end

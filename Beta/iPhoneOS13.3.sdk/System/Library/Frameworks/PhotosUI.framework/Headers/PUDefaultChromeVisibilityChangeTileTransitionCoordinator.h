/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@class PUBrowsingViewModel;

__attribute__((visibility("hidden")))
@interface PUDefaultChromeVisibilityChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

{
    PUBrowsingViewModel *_viewModel;
}

@property (retain, nonatomic) PUBrowsingViewModel *viewModel;

- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;

@end

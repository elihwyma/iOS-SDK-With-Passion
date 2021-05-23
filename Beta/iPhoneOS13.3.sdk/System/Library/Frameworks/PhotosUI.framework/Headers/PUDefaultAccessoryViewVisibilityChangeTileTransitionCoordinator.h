/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@class PUBrowsingViewModel;

__attribute__((visibility("hidden")))
@interface PUDefaultAccessoryViewVisibilityChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator

{
    _Bool _shouldAnimateContent;
    _Bool _shouldAnimateAccessory;
    _Bool _shouldSlideAccessory;
    PUBrowsingViewModel *_viewModel;
}

@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (nonatomic) _Bool shouldAnimateContent;
@property (nonatomic) _Bool shouldAnimateAccessory;
@property (nonatomic) _Bool shouldSlideAccessory;

- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;

@end

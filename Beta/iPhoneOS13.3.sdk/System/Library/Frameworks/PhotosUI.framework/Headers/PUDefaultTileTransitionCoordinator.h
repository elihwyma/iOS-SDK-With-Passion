/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileTransitionCoordinator.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface PUDefaultTileTransitionCoordinator : PUTileTransitionCoordinator

{
    NSNumber *_animationDuration;
}

@property (copy, nonatomic) NSNumber *animationDuration;

- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (void)configureOptions:(id)arg1 forSpringAnimationsZommingIn:(_Bool)arg2;
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;
- (struct CGAffineTransform)_adjustDefaultDisappearanceTransform:(struct CGAffineTransform)arg1;

@end

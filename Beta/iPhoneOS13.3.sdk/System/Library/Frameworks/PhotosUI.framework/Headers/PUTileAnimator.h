/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@protocol PUTilingViewControllerTransition;

__attribute__((visibility("hidden")))
@interface PUTileAnimator : NSObject

{
    id <PUTilingViewControllerTransition> _currentTransition;
}

@property (weak, nonatomic, readonly) id <PUTilingViewControllerTransition> currentTransition;

- (void)animateTileController:(id)arg1 toLayoutInfo:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)prepareTileControllerForAnimation:(id)arg1 withInitialLayoutInfo:(id)arg2;
- (void)updateAnimationForTileController:(id)arg1 withRepositionedTargetLayoutInfo:(id)arg2;
- (id)freezeTileController:(id)arg1;
- (void)transitionWillBeginAnimation:(id)arg1;
- (void)transitionDidBeginAnimation:(id)arg1;
- (void)transition:(id)arg1 didComplete:(_Bool)arg2;

@end

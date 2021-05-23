/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileAnimator.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface PUTileViewAnimator : PUTileAnimator

{
    NSMapTable *__synchronizedAnimationGroupsByTransition;
}

@property (nonatomic, readonly) NSMapTable *_synchronizedAnimationGroupsByTransition;

- (id)init;
- (void)animateTileController:(id)arg1 toLayoutInfo:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)prepareTileControllerForAnimation:(id)arg1 withInitialLayoutInfo:(id)arg2;
- (void)updateAnimationForTileController:(id)arg1 withRepositionedTargetLayoutInfo:(id)arg2;
- (void)transition:(id)arg1 didComplete:(_Bool)arg2;
- (void)_performAnimations:(CDUnknownBlockType)arg1 withOptions:(id)arg2;

@end

/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUSectionedGridLayout;

__attribute__((visibility("hidden")))
@interface PULayoutAnimationsHelper : NSObject

{
    _Bool _shouldAnimateTemporaryImageView;
    PUSectionedGridLayout *_layout;
}

@property (weak, nonatomic, readonly) PUSectionedGridLayout *layout;
@property (nonatomic) _Bool shouldAnimateTemporaryImageView;

+ (double)zoomTransitionAnimationPreferredDurationWhenZoomingIn:(_Bool)arg1;
+ (CDUnknownBlockType)stackedTransitionAnimationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 shouldUseSpringAnimations:(_Bool)arg3;
+ (double)stackedTransitionAnimationPreferredDurationUsingSpringAnimations:(_Bool)arg1;

- (id)initWithSectionedGridLayout:(id)arg1;
- (CDUnknownBlockType)animationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (void)didFinishLayoutTransitionAnimations:(_Bool)arg1 transitionIsAppearing:(_Bool)arg2;
- (id)_createDefaultZoomingOutAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_createDefaultZoomingInAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_defaultAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustCellAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustSectionHeaderAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustRenderedStripAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustDecorationViewAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (void)_configureAnimationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_applyDefaultLayoutAttributes:(id)arg1 toView:(id)arg2;

@end

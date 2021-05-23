/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardSplitTransitionView.h>

@class CALayer, NSMutableDictionary, UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardSliceTransitionView : UIKeyboardSplitTransitionView

{
    struct CGImage *_defaultKeyplaneImage;
    struct CGImage *_splitKeyplaneImage;
    CALayer *_leftKeys;
    CALayer *_rightKeys;
    CALayer *_spaceFill;
    NSMutableDictionary *_controlKeys;
    CALayer *_topEdgeHighlight;
    UIKBCacheToken *_keyplaneToken;
    long long _orientation;
    struct {
        unsigned int position:1;
        unsigned int slices:1;
        unsigned int backgroundAndShadows:1;
        unsigned int backgroundGradients:1;
        unsigned int topEdgeHighlight:1;
        unsigned int shiftKeys:1;
        unsigned int returnKeys:1;
        unsigned int moreIntlKeys:1;
    } _rebuildFlags;
}

- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (_Bool)canDisplayTransition;
- (void)updateWithProgress:(double)arg1;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)transformForProgress:(double)arg1;
- (struct CGImage *)defaultKeyboardImage;
- (struct CGImage *)splitKeyboardImage;
- (void)initializeLayers;
- (void)rebuildMoreIntlKeys;
- (void)rebuildShiftSlices;
- (void)rebuildReturnSlices;
- (void)updateTransition;
- (void)_delayedUpdateTransition;
- (void)setRebuildFlags;
- (id)crossfadeOpacityAnimation;
- (double)adjustedLeftWidthAtMergePoint;
- (double)adjustedRightWidthAtMergePoint;
- (void)rebuildTopEdgeHighlightTransition;
- (void)rebuildShadows;
- (struct CGImage *)getKeyboardImageAsSplit:(_Bool)arg1;
- (void)updateTransitionForSlice:(id)arg1 withStart:(id)arg2 startContents:(id)arg3 end:(id)arg4 endContents:(id)arg5 updateContents:(_Bool)arg6;
- (id)meshTransformForProgress:(double)arg1;
- (void)rebuildPositionTransition;
- (void)rebuildBackgroundAndShadowTransitions;
- (void)rebuildBackgroundGradientTransitions;
- (void)refreshKeyplaneImages;
- (void)rebuildSliceTransitions;

@end

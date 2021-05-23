/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CADisplayLink, NSArray, UIKeyboardSliceSet;

@protocol UIKeyboardKeyplaneTransitionDelegate, UIKeyboardSplitTransitionDataSource;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitTransitionView : UIView

{
    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _completionBlock;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    id <UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
    id <UIKeyboardSplitTransitionDataSource> _transitionDataSource;
    _Bool _centerFilled;
    _Bool _isRebuilding;
    _Bool _isSplitTranslation;
    UIKeyboardSliceSet *_sliceSet;
}

@property (copy) CDUnknownBlockType completionBlock;
@property (nonatomic) id <UIKeyboardKeyplaneTransitionDelegate> splitTransitionDelegate;
@property (nonatomic) id <UIKeyboardSplitTransitionDataSource> splitTransitionDataSource;
@property (readonly) NSArray *shadowLayers;
@property (readonly) NSArray *backgroundLayers;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (_Bool)canDisplayTransition;
- (void)finishWithProgress:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateWithProgress:(double)arg1;
- (void)finalizeTransition;
- (void)transitionToFinalState:(id)arg1;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (id)topDropShadow;
- (id)centerDropShadow;
- (id)bottomDropShadow;
- (id)outerCenterDropShadow;
- (id)colorsForBackgroundLayer:(int)arg1;
- (_Bool)shouldAllowRubberiness;
- (_Bool)transitionIsVisible;
- (void)transformForProgress:(double)arg1;
- (struct CGImage *)defaultKeyboardImage;
- (struct CGImage *)splitKeyboardImage;
- (void)initializeLayers;
- (struct CGSize)sizeForShadowLayer:(int)arg1;
- (struct CGRect)rectEnclosingKeyplane:(id)arg1;
- (struct CGImage *)keyImageWithToken:(id)arg1;
- (_Bool)showIntlKey;
- (_Bool)showDictationKey;

@end

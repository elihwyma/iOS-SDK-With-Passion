/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIKBBackdropView, _UIVisualEffectBackdropView;

__attribute__((visibility("hidden")))
@interface UIKBInputBackdropView : UIView

{
    UIKBBackdropView *_inputBackdropFullView;
    UIKBBackdropView *_inputBackdropLeftView;
    UIKBBackdropView *_inputBackdropRightView;
    unsigned long long _innerCorners;
    _Bool _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    long long _style;
    _Bool _hasStartRect;
    _Bool _hasEndRect;
    struct CGRect _savedStartRect;
    struct CGRect _savedEndRect;
    _UIVisualEffectBackdropView *_captureView;
}

@property (retain, nonatomic) UIKBBackdropView *inputBackdropFullView;
@property (retain, nonatomic) UIKBBackdropView *inputBackdropLeftView;
@property (retain, nonatomic) UIKBBackdropView *inputBackdropRightView;
@property (retain, nonatomic) _UIVisualEffectBackdropView *captureView;
@property (readonly) long long style;

+ (_Bool)requiresConstraintBasedLayout;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;
- (_Bool)_isTransitioning;
- (int)textEffectsVisibilityLevel;
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect)arg1 andRightViewRect:(struct CGRect)arg2 innerCorners:(unsigned long long)arg3;
- (void)layoutInputBackdropToFullWithRect:(struct CGRect)arg1;
- (void)_setProgress:(double)arg1 withFrame:(struct CGRect)arg2;
- (void)transitionToStyle:(long long)arg1 isSplit:(_Bool)arg2;
- (void)_setFrame:(struct CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 innerCorners:(unsigned long long)arg5;
- (void)_setInitialProgressWithFrame:(struct CGRect)arg1;
- (void)_setFrame:(struct CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4;
- (void)prepareForSnapshotting;
- (void)restoreFromSnapshotting;

@end

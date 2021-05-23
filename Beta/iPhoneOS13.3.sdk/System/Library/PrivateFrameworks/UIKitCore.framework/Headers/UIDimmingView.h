/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIColor, UIImageView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView <Swift>

{
    UIBarButtonItem *_highlightedBarButtonItem;
    UIImageView *_highlightedImageView;
    UIImageView *_backgroundGlow;
    NSArray *_passthroughViews;
    _Bool _ignoresTouches;
    _Bool _inPassthroughHitTest;
    UIColor *_dimmingColor;
    UITapGestureRecognizer *_singleFingerTapRecognizer;
    _Bool _suppressesBackdrops;
    id _delegate;
    double _percentDisplayed;
    double _percentLightened;
}

@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (nonatomic) _Bool ignoresTouches;
@property (nonatomic, readonly) _Bool displayed;
@property (nonatomic) double percentDisplayed;
@property (nonatomic) double percentLightened;
@property (retain, nonatomic) UIColor *dimmingColor;
@property (nonatomic) _Bool suppressesBackdrops;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultDimmingColor;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)display:(_Bool)arg1;
- (void)display:(_Bool)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;
- (int)textEffectsVisibilityLevel;
- (void)_simulateTap;
- (void)handleSingleTap:(id)arg1;
- (void)updateBackgroundColor;
- (id)_backdropViewsToAnimate;
- (void)dimmingRemovalAnimationDidStop;
- (void)mouseUp:(struct __GSEvent *)arg1;

@end

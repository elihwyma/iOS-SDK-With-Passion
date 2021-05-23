/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSUUID, UIScreen, UIView, UIViewFloatAnimatableProperty, UIViewPropertyAnimator, UIVisualEffectView, _UIInteractiveHighlightEffectWindow;

__attribute__((visibility("hidden")))
@interface _UIInteractiveHighlightEnvironment : NSObject

{
    UIScreen *_containerScreen;
    _UIInteractiveHighlightEffectWindow *_containerWindow;
    UIView *_containerView;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_contentView;
    UIView *_contentClipView;
    UIView *_contentOverlayView;
    UIViewPropertyAnimator *_backgroundEffectAnimator;
    UIViewFloatAnimatableProperty *_backgroundEffectProgress;
    NSArray *_viewRecords;
    _UIInteractiveHighlightEnvironment *_parentEnvironment;
    _UIInteractiveHighlightEnvironment *_childEnvironment;
    NSUUID *_backgroundAnimationIdentifier;
    UIView *_customBackgroundEffectView;
    CDUnknownBlockType _backgroundEffectApplyBlock;
}

@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *contentClipView;
@property (retain, nonatomic) UIView *customBackgroundEffectView;
@property (copy, nonatomic) CDUnknownBlockType backgroundEffectApplyBlock;

+ (id)requestInteractiveHighlightEnvironmentForView:(id)arg1;
+ (id)interactiveHighlightEnvironmentForContainerView:(id)arg1;

- (void)dealloc;
- (void)reset;
- (id)initWithContainerView:(id)arg1;
- (id)initWithContainerScreen:(id)arg1;
- (void)setUserInteractionOnContainerEnabled:(_Bool)arg1;
- (void)initContainerWindowIfNeeded;
- (void)initContentViewIfNeeded;
- (long long)indexOfViewRecordForView:(id)arg1;
- (id)newViewRecordForView:(id)arg1 options:(unsigned long long)arg2;
- (void)initBackgroundEffectViewIfNeeded;
- (id)newBackgroundEffectAnimator;
- (void)finalizeBackgroundEffect;
- (void)removeViewRecordsIfNeeded;
- (void)disableClippingForView:(id)arg1 ancestorView:(id)arg2;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAllViewRecords;
- (void)finalizeViewRecord:(id)arg1;
- (void)finalizeContentViewIfNeeded;
- (void)finalizeContainerWindowIfNeeded;
- (id)backgroundVisualEffectForProgress:(double)arg1;
- (void)applyContentInsets:(struct UIEdgeInsets)arg1;
- (id)initWithParentEnvironment:(id)arg1;
- (id)interactiveHighlightEffectForView:(id)arg1 options:(unsigned long long)arg2;
- (void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeInteractiveHighlightEffect:(id)arg1;

@end

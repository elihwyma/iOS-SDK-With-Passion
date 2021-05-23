/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, NSUUID, UIControl, UIView, _UIInteractiveHighlightEffect;

@protocol UIInteraction, _UIInteractiveHighlighting;

@interface _UIPreviewInteractionHighlighter : NSObject <Swift>

{
    UIView *_view;
    id <_UIInteractiveHighlighting> _interactiveHighlightView;
    UIControl *_compatibilityHighlightView;
    _UIInteractiveHighlightEffect *_interactiveHighlightEffect;
    NSArray *_accessoryHighlightEffects;
    _UIInteractiveHighlightEffect *_presentationControllerHighlightEffect;
    id <UIInteraction> _interaction;
    _Bool _active;
    _Bool _animatesContentEffects;
    NSUUID *_contentAnimationIdentifier;
    _Bool _animatesBackgroundEffects;
    long long _preferredAnimationStyle;
    double _preferredMinimumScale;
    double _preferredMaximumScale;
    _Bool _shouldApplyEffectsOnProxyView;
    _Bool _shouldApplyContentEffects;
    _Bool _shouldApplyBackgroundEffects;
    _Bool _shouldEndWithCancelAnimation;
    _Bool _shouldTransferViewOwnership;
    _Bool _cancelsInteractionWhenScrolling;
    CDUnknownBlockType _completionBlock;
    unsigned long long _clickEffectPhase;
    CDUnknownBlockType _privateCompletionBlock;
    UIView *_customContainerView;
    UIView *_customBackgroundEffectView;
    CDUnknownBlockType _backgroundEffectApplyBlock;
}

@property (nonatomic) _Bool shouldApplyEffectsOnProxyView;
@property (nonatomic) _Bool shouldEndWithCancelAnimation;
@property (nonatomic) unsigned long long clickEffectPhase;
@property (nonatomic, readonly) _UIInteractiveHighlightEffect *interactiveHighlightEffect;
@property (copy, nonatomic) CDUnknownBlockType privateCompletionBlock;
@property (weak, nonatomic) UIView *customContainerView;
@property (retain, nonatomic) UIView *customBackgroundEffectView;
@property (nonatomic) _Bool shouldTransferViewOwnership;
@property (nonatomic) _Bool shouldApplyContentEffects;
@property (nonatomic) _Bool shouldApplyBackgroundEffects;
@property (nonatomic) _Bool cancelsInteractionWhenScrolling;
@property (copy, nonatomic) CDUnknownBlockType backgroundEffectApplyBlock;
@property (weak, nonatomic, readonly) UIView *view;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)initWithView:(id)arg1;
- (void)_animateForDelayedViewControllerPresentation;
- (void)_delayedViewControllerPresentationDidCancel;
- (void)_animateAlongsideViewControllerPresentationDismiss;
- (void)_viewControllerPresentationDidEnd;
- (void)_prepareForViewControllerPresentation:(id)arg1;
- (void)_prepareForInteraction:(id)arg1;
- (void)_updateFromInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(_Bool)arg3;
- (void)_prepareAccessoryViewsForScrollView:(id)arg1 environment:(id)arg2;
- (void)_prepareContentEffectsForInteraction:(id)arg1;
- (void)_setHighlighted:(_Bool)arg1 forViewIfNeeded:(id)arg2;
- (void)_finalizeAfterInteractionIfNeeded;
- (void)_finalizeAfterInteraction;
- (void)_applyHighlightEffectsToViewControllerDuringCancellation:(id)arg1;

@end

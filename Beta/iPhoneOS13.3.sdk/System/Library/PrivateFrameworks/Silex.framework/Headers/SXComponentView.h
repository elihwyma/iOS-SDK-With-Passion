/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

#import <Silex/Swift-Protocol.h>

@class NSString, SXColumnLayout, SXFillView, SXUnitConverter, SXViewport;

@protocol SXComponent, SXComponentHosting, SXComponentLayout, SXComponentStyle, SXComponentStyleRenderer, SXComponentStyleRendererFactory, SXDOMObjectProviding, SXPresentationDelegate;

@interface SXComponentView : UIView <Swift>

{
    _Bool _hasRenderedContents;
    _Bool _requiresThoroughFrameCalculations;
    _Bool _isDraggable;
    _Bool _animationsAndBehaviorsEnabled;
    _Bool _highlighted;
    _Bool _allowViewHierarchyRemoval;
    _Bool _hasAnimation;
    _Bool _hasBehaviors;
    _Bool _hasRenderedComponentStyle;
    CDStruct_1cc9d0d0 _presentationChanges;
    id <SXComponentLayout> _componentLayout;
    id <SXComponent> _component;
    id <SXDOMObjectProviding> _DOMObjectProvider;
    SXViewport *_viewport;
    id <SXPresentationDelegate> _presentationDelegate;
    long long _visibilityState;
    long long _presentationState;
    UIView *_contentView;
    UIView *_backgroundView;
    SXFillView *_fillView;
    SXColumnLayout *_documentColumnLayout;
    SXUnitConverter *_unitConverter;
    UIView *_highlightView;
    id <SXComponentStyleRendererFactory> _componentStyleRendererFactory;
    id <SXComponentStyleRenderer> _componentStyleRenderer;
    id <SXComponentStyle> _componentStyle;
    id <SXComponentHosting> _componentHost;
    unsigned long long _componentIndex;
    struct CGRect _absoluteFrame;
    struct UIEdgeInsets _componentLayoutMargins;
    struct UIEdgeInsets _borderInsets;
    struct CGRect _contentFrame;
    struct CGRect _backgroundViewFrame;
    struct CGRect _originalFrame;
    struct CGRect _presentationFrame;
}

@property (nonatomic, readonly) id <SXComponentStyleRendererFactory> componentStyleRendererFactory;
@property (nonatomic, readonly) id <SXComponentStyleRenderer> componentStyleRenderer;
@property (retain, nonatomic) id <SXComponentStyle> componentStyle;
@property (nonatomic) struct CGRect originalFrame;
@property (nonatomic) _Bool allowViewHierarchyRemoval;
@property (nonatomic) _Bool requiresThoroughFrameCalculations;
@property (nonatomic) _Bool hasAnimation;
@property (nonatomic) _Bool hasBehaviors;
@property (nonatomic) _Bool hasRenderedComponentStyle;
@property (weak, nonatomic) id <SXComponentHosting> componentHost;
@property (nonatomic) unsigned long long componentIndex;
@property (nonatomic) struct UIEdgeInsets componentLayoutMargins;
@property (nonatomic) struct CGRect contentFrame;
@property (nonatomic) struct CGRect absoluteFrame;
@property (nonatomic) struct CGRect backgroundViewFrame;
@property (nonatomic) struct UIEdgeInsets borderInsets;
@property (retain, nonatomic) SXColumnLayout *documentColumnLayout;
@property (nonatomic) struct CGRect presentationFrame;
@property (nonatomic) CDStruct_1cc9d0d0 presentationChanges;
@property (nonatomic, readonly) id <SXComponent> component;
@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) SXViewport *viewport;
@property (weak, nonatomic, readonly) id <SXPresentationDelegate> presentationDelegate;
@property (nonatomic, readonly) id <SXComponentLayout> componentLayout;
@property (nonatomic) long long visibilityState;
@property (nonatomic) long long presentationState;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *backgroundView;
@property (weak, nonatomic) SXFillView *fillView;
@property (nonatomic, readonly) _Bool hasRenderedContents;
@property (nonatomic, readonly) _Bool isDraggable;
@property (nonatomic) _Bool animationsAndBehaviorsEnabled;
@property (nonatomic, readonly) SXUnitConverter *unitConverter;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, readonly) UIView *highlightView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *transitionContainerView;
@property (nonatomic, readonly) UIView *transitionContentView;
@property (nonatomic, readonly) _Bool transitionViewIsVisible;
@property (nonatomic, readonly) _Bool transitionViewShouldFadeInContent;
@property (nonatomic, readonly) struct CGRect transitionVisibleFrame;
@property (nonatomic, readonly) struct CGRect transitionContainerFrame;
@property (nonatomic, readonly) struct CGRect transitionContentFrame;
@property (nonatomic, readonly) _Bool isTransitionable;

- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didMoveToWindow;
- (void)configure;
- (void)animationDidStart:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)discardContents;
- (id)classification;
- (void)assistiveTechnologyStatusDidChange;
- (_Bool)gestureShouldBegin:(id)arg1;
- (struct CGRect)originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (_Bool)allowHierarchyRemoval;
- (void)loadComponent:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)invalidateComponentStyle;
- (void)setupComponentStyleRendererForStyle:(id)arg1;
- (void)prepareComponentStyleRendererForStyle:(id)arg1;
- (void)renderComponentStyle;
- (void)updateAllowHierarchyRemovalWithComponent:(id)arg1 componentStyle:(id)arg2;
- (void)provideInfosLayoutTo:(id)arg1;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (_Bool)usesThumbnailWithImageIdentifier:(id)arg1;
- (_Bool)userInteractable;
- (void)renderContentsIfNeeded;
- (void)willPresentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (id)contentViewForBehavior:(id)arg1;
- (void)restoreBehavior;
- (void)animationDidFinish:(id)arg1;
- (void)didApplyBehavior:(id)arg1;

@end

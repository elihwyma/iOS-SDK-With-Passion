/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIView.h>

@class NSCountedSet, NSString, SBSceneHandle;

@protocol SBScenePlaceholderContentContext, SBScenePlaceholderContentView, SBScenePlaceholderContentViewProvider, SBSceneViewDelegate, UIScenePresentation, UIScenePresenter, UISceneSnapshotPresentation;

@interface SBSceneView : UIView

{
    SBSceneHandle *_sceneHandle;
    struct CGSize _referenceSize;
    long long _orientation;
    long long _requestedDisplayMode;
    long long _effectiveDisplayMode;
    _Bool _invalidated;
    id <UIScenePresenter> _presenter;
    long long _hostingPriority;
    NSString *_hostingIdentifier;
    id <SBScenePlaceholderContentContext> _placeholderContentContext;
    UIView *_sceneContentContainerView;
    UIView *_customContentView;
    UIView<SBScenePlaceholderContentView> *_placeholderContentView;
    UIView<UISceneSnapshotPresentation> *_liveSnapshotView;
    UIView<UIScenePresentation> *_hostView;
    UIView *_crossfadeView;
    UIView *_backgroundView;
    NSCountedSet *_liveContentDisableReasons;
    _Bool _placeholderContentEnabled;
    _Bool _shouldRasterizeHostView;
    id <SBScenePlaceholderContentViewProvider> _placeholderContentProvider;
    NSString *_hostViewMinificationFilter;
    id <SBSceneViewDelegate> _delegate;
}

@property (nonatomic, readonly) id <UIScenePresenter> presenter;
@property (nonatomic, readonly) SBSceneHandle *sceneHandle;
@property (nonatomic, readonly) struct CGSize referenceSize;
@property (nonatomic, readonly) long long orientation;
@property (retain, nonatomic) id <SBScenePlaceholderContentViewProvider> placeholderContentProvider;
@property (retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property (nonatomic) _Bool placeholderContentEnabled;
@property (nonatomic, readonly) long long displayMode;
@property (nonatomic, readonly) long long effectiveDisplayMode;
@property (nonatomic) _Bool shouldRasterizeHostView;
@property (copy, nonatomic) NSString *hostViewMinificationFilter;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (weak, nonatomic) id <SBSceneViewDelegate> delegate;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultDisplayModeAnimationFactory;

- (void)dealloc;
- (void)invalidate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)newSnapshot;
- (void)_refresh;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (id)initWithSceneHandle:(id)arg1 referenceSize:(struct CGSize)arg2 orientation:(long long)arg3 hostRequester:(id)arg4;
- (void)_invalidateHostPresenter;
- (void)_transitionFromDisplayMode:(long long)arg1 showingView:(id)arg2 toDisplayMode:(long long)arg3 showingView:(id)arg4 withAnimationFactory:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_reloadPlaceholderContentIfNecessary;
- (void)_updateLiveContentRasterization;
- (void)_evaluateEffectiveDisplayModeWithAnimationFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureSceneSnapshotContext:(id)arg1;
- (void)_clearSnapshotViews;
- (void)_layoutLiveHostView:(id)arg1;
- (void)_hotSwapPlaceholderContentView;
- (void)_hotSwapLiveSnapshotView;
- (void)_setOrientation:(long long)arg1;
- (void)_enableHostingIfPossible;
- (_Bool)_shouldObserveSceneHostContentState;
- (void)_recheckLiveContentDependencies;
- (void)_invalidateSceneLiveHostView:(id)arg1;
- (void)_configureViewForEffectiveDisplayMode:(long long)arg1;
- (id)_viewForDisplayMode:(long long)arg1;
- (long long)_bestDisplayModeLessThanMode:(long long)arg1;
- (id)_transitionViewForHostView;
- (_Bool)_addContentLikeViewToHierarchyForTransitionIfPossible:(id)arg1;
- (_Bool)_shouldViewBeInHierarchyForTransition:(id)arg1;
- (void)_configurePlaceholderContentView;
- (void)_configureLiveSnapshotView;
- (void)_configureHostView;
- (void)_placeholderVisibilityChanged;
- (void)_configureBackgroundColorForLiveSnapshot:(_Bool)arg1;
- (void)_configureSceneLiveHostView:(id)arg1;
- (void)placeholderContentViewProviderContentDidUpdate:(id)arg1;
- (id)initWithSceneHandle:(id)arg1 referenceSize:(struct CGSize)arg2 orientation:(long long)arg3;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)acquireLiveContentDisableAssertionForReason:(id)arg1;
- (_Bool)_representsTranslucentContent;
- (void)_updateReferenceSize:(struct CGSize)arg1 andOrientation:(long long)arg2;
- (void)_containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;

@end

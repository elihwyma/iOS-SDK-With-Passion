/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXDisplayLink, PXGAccessibilityContentInfoManager, PXGAccessibilityRenderer, PXGAnimator, PXGChangeDetails, PXGLayout, PXGMetalRenderer, PXGSpriteDataStore, PXGSpriteMetadataStore, PXGTextureManager, PXGViewEnvironment, PXGViewRenderer, PXScrollViewController, PXScrollViewSpeedometer;

@protocol PXGEngineDelegate;

@interface PXGEngine : NSObject <Swift>

{
    PXGAnimator *_animator;
    PXGSpriteDataStore *_layoutSpriteDataStore;
    PXGChangeDetails *_layoutChangeDetails;
    struct CGPoint _viewportShift;
    struct CGPoint _previousVisibleOrigin;
    PXGSpriteDataStore *_animationPresentationSpriteDataStore;
    PXGSpriteDataStore *_animationTargetSpriteDataStore;
    PXGLayout *_animationLayout;
    PXGChangeDetails *_animationChangeDetails;
    PXGSpriteMetadataStore *_presentationSpriteMetadaStore;
    CDStruct_d97c9657 _updateFlags;
    unsigned long long _previousUpdateEntities;
    CDStruct_93894d6c _previousInteractionState;
    unsigned long long _pendingUpdateEntities;
    _Bool _keepDisplayLinkAlive;
    double _renderForTargetTimestamp;
    _Bool _animatorWasAnimatingAtBeginningOfFrame;
    _Bool _isUpdatingScrollView;
    _Bool _viewSizeDidChange;
    _Bool _isInitialLoad;
    _Bool _didRenderThisFrame;
    _Bool _expectingScrollEvents;
    _Bool _gotScrollEventThisFrame;
    _Bool _missedScrollEventThisFrame;
    _Bool _visible;
    _Bool _statsTrackingEnabled;
    _Bool _slowAnimationsEnabled;
    _Bool _accessibilityEnabled;
    PXScrollViewController *_scrollViewController;
    PXScrollViewSpeedometer *_scrollViewSpeedometer;
    PXGLayout *_layout;
    PXGTextureManager *_textureManager;
    CDUnknownBlockType _animationRenderingCompletionHandler;
    double _lastScrollEventTime;
    id <PXGEngineDelegate> _delegate;
    PXGMetalRenderer *_metalRenderer;
    PXGViewRenderer *_viewRenderer;
    NSArray *_renderers;
    PXGViewEnvironment *_viewEnvironment;
    CDStruct_58b866b9 *_stats;
    PXDisplayLink *_displayLink;
    PXGAccessibilityRenderer *_accessibilityRenderer;
    PXGAccessibilityContentInfoManager *_contentInfoManager;
    CDStruct_93894d6c _interactionState;
    struct _PXGEngineScrollState _scrollState;
}

@property (nonatomic, readonly) struct _PXGEngineScrollState scrollState;
@property (nonatomic) CDStruct_93894d6c interactionState;
@property (nonatomic, readonly) long long currentFrameTime;
@property (nonatomic) _Bool isInitialLoad;
@property (nonatomic) _Bool didRenderThisFrame;
@property (nonatomic) _Bool expectingScrollEvents;
@property (nonatomic) _Bool gotScrollEventThisFrame;
@property (nonatomic) double lastScrollEventTime;
@property (nonatomic) _Bool missedScrollEventThisFrame;
@property (weak, nonatomic) id <PXGEngineDelegate> delegate;
@property (nonatomic, readonly) PXGMetalRenderer *metalRenderer;
@property (nonatomic, readonly) PXGViewRenderer *viewRenderer;
@property (nonatomic, readonly) NSArray *renderers;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (retain, nonatomic) PXGViewEnvironment *viewEnvironment;
@property (nonatomic) _Bool statsTrackingEnabled;
@property (nonatomic, readonly) CDStruct_58b866b9 *stats;
@property (nonatomic, readonly) PXDisplayLink *displayLink;
@property (nonatomic, readonly) _Bool debugEngineUpdates;
@property (nonatomic) _Bool slowAnimationsEnabled;
@property (nonatomic, readonly) PXGAnimator *ppt_animator;
@property (nonatomic, getter=isAccessibilityEnabled) _Bool accessibilityEnabled;
@property (nonatomic, readonly) PXGAccessibilityRenderer *accessibilityRenderer;
@property (nonatomic, readonly) PXGAccessibilityContentInfoManager *contentInfoManager;
@property (retain, nonatomic) PXScrollViewController *scrollViewController;
@property (retain, nonatomic) PXScrollViewSpeedometer *scrollViewSpeedometer;
@property (retain, nonatomic) PXGLayout *layout;
@property (nonatomic, readonly) PXGTextureManager *textureManager;
@property (copy, nonatomic) CDUnknownBlockType animationRenderingCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_updateLayout;
- (void)handleDisplayLink:(id)arg1;
- (_Bool)_isInBackground;
- (void)_updateDisplayLink;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_setNeedsRender;
- (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)tilingScrollControllerDidScroll:(id)arg1;
- (void)tilingScrollControllerDidUpdate:(id)arg1;
- (void)textureManagerNeedsUpdate:(id)arg1;
- (void)layoutNeedsUpdate:(id)arg1;
- (void)metalRendererDidChangeTextureConverter:(id)arg1;
- (void)renderer:(id)arg1 viewportSizeWillChange:(struct CGSize)arg2;
- (void)rendererNeedsUpdate:(id)arg1;
- (void)rendererPerformRender:(id)arg1;
- (id)initWithAnimator:(id)arg1 textureManager:(id)arg2 metalRenderer:(id)arg3 viewRenderer:(id)arg4 displayLinkClass:(Class)arg5;
- (void)handleScreensDidWakeNotification:(id)arg1;
- (void)test_installRenderSnapshotHandler:(CDUnknownBlockType)arg1;
- (void)_invalidateOrDefer:(unsigned long long)arg1;
- (void)_deferredInvalidate:(unsigned long long)arg1;
- (void)_forceInvalidate:(unsigned long long)arg1;
- (void)__setNeedsUpdate;
- (void)_ensureUpdatedLayout;
- (void)_updateIfNeededWithReason:(id)arg1;
- (void)_updateAnimatorWithTargetTimestamp:(double)arg1;
- (void)_updateInteractionState;
- (void)_updateTextureManager;
- (void)_enumerateRenderers:(CDUnknownBlockType)arg1;
- (_Bool)_shouldDeferRenderUntilNextFrame;
- (_Bool)_shouldWaitForScrollEvent;
- (_Bool)_shouldDeferContentOffsetUpdates;
- (void)_render;
- (void)_resetChangeDetails;
- (void)_updateScrollStateWithReason:(unsigned long long)arg1;

@end

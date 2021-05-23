/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface _UISizeTrackingView : UIView

{
    _UIRemoteViewController *_remoteViewController;
    id _viewControllerOperatorProxy;
    id _textEffectsOperatorProxy;
    struct CGSize _intrinsicContentSize;
    struct CGRect _formerTextEffectsContentFrame;
    _Bool _observingTextEffectsWindowRotation;
    struct {
        unsigned int hasIntrinsicContentSize:1;
        unsigned int observingBoundingPathChanges:1;
        unsigned int needsRemoteViewServiceBoundingPathUpdate:1;
        unsigned int remoteViewServiceBoundingPathUpdateScheduled:1;
    } _sizeTrackingViewFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *remoteViewController;

+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (_Bool)isScrollEnabled;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_willMoveToWindow:(id)arg1;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(_Bool)arg2;
- (void)_updateTextEffectsGeometriesImmediately;
- (void)_updateTextEffectsGeometries:(struct CGRect)arg1;
- (void)_updateTextEffectsGeometries:(struct CGRect)arg1 textEffectsWindow:(id)arg2;
- (void)_textEffectsWindowDidRotate:(id)arg1;
- (_Bool)_needsTextEffectsUpdateToFrame:(struct CGRect)arg1;
- (id)_boundingPathForRemoteViewService;
- (void)_clearNeedsRemoteViewServiceBoundingPathUpdate;
- (long long)_interfaceOrientationForScene:(id)arg1;
- (void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2;
- (_Bool)_canSendViewServiceActualBoundingPath;
- (void)_setNeedsRemoteViewServiceBoundingPathUpdate;
- (void)updateIntrinsicContentSize:(struct CGSize)arg1;
- (_Bool)_fencingEffectsAreVisible;

@end

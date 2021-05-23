/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKCalloutView.h>

@class MKSmallCalloutView, UIMotionEffectGroup, UIView, UIVisualEffectView, _MKCalloutLayer, _MKStandardCalloutMaskView;

__attribute__((visibility("hidden")))
@interface MKStandardCalloutView : MKCalloutView

{
    struct {
        struct CGPoint origin;
        struct CGPoint offset;
        long long position;
        struct CGPoint desiredPoint;
        struct CGRect desiredBounds;
    } _anchor;
    struct CGRect _frame;
    struct {
        unsigned int animated:1;
        unsigned int didMoveCalled:1;
        unsigned int hasPendingAnimatedLayout:1;
        unsigned int needsCalloutUpdate:1;
        unsigned int isObserving:1;
        unsigned int reserved:26;
    } _flags;
    _Bool _animatingMapToShow;
    _Bool _dismissed;
    _MKStandardCalloutMaskView *_maskView;
    _MKCalloutLayer *_maskLayer;
    _MKCalloutLayer *_contentStrokeLayer;
    UIView *_contentView;
    MKSmallCalloutView *_calloutView;
    UIVisualEffectView *_backdropView;
    UIMotionEffectGroup *_motionEffect;
}

+ (Class)layerClass;
+ (double)defaultHeight;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setTitle:(id)arg1;
- (void)setOffset:(struct CGPoint)arg1;
- (id)subtitle;
- (struct CGPoint)offset;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGPoint)anchorPoint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)didMoveToWindow;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_stopObservingAnnotationView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(_Bool)arg2;
- (void)setDetailView:(id)arg1 animated:(_Bool)arg2;
- (id)initWithAnnotationView:(id)arg1;
- (void)_adaptToUserInterfaceStyle;
- (void)_updateCalloutAnimated:(_Bool)arg1;
- (void)setSubtitle:(id)arg1 animated:(_Bool)arg2;
- (struct CGPoint)_originForScale:(double)arg1;
- (void)_frameDidChange;
- (void)_layoutSubviews:(_Bool)arg1;
- (void)_calculateActualAnchorPoint:(struct CGPoint *)arg1 frame:(struct CGRect *)arg2 forDesiredAnchorPoint:(struct CGPoint)arg3 boundaryRect:(struct CGRect)arg4;
- (void)completeBounceAnimation;
- (void)_runBounceAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_markDidMoveCalled;
- (void)forceAnchorPosition:(long long)arg1;
- (void)_showFromAnchorPoint:(struct CGPoint)arg1 boundaryRect:(struct CGRect)arg2 animate:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_startObservingAnnotationView:(id)arg1;
- (void)_removeAccessoryTargetForView:(id)arg1;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (void)setLeftView:(id)arg1 backgroundColor:(id)arg2 animated:(_Bool)arg3;
- (void)_addAccessoryTargetForView:(id)arg1;
- (void)_updateCallout;
- (void)_setNeedsCalloutUpdate;
- (void)_setOriginForScale:(double)arg1;
- (long long)anchorPosition;
- (_Bool)isLeftAnchored;
- (void)motionEffectDidUpdate:(id)arg1;
- (_Bool)hasPendingVisibility;
- (void)showAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

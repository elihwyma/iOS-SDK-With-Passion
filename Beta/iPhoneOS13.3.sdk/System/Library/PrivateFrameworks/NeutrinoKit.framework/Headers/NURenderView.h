/*
 Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

#import <UIView.h>

@class CALayer, NSString, NUImageGeometry, _NUBackfillLayer, _NUContainerLayer, _NUROILayer;

@interface NURenderView : UIView

{
    _NUBackfillLayer *_backfillLayer;
    _NUROILayer *_roiLayer;
    _NUContainerLayer *_containerLayer;
    NUImageGeometry *_geometry;
    _Bool _transitionAnimationInFlight;
    _Bool _shouldRemoveAnimation;
    CALayer *_geometryAnimationLayer;
    _Bool _debugMode;
}

@property (nonatomic) _Bool debugMode;
@property (retain, nonatomic) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (_Bool)inLiveResize;
- (id)_containerLayer;
- (id)_backfillLayer;
- (id)_roiLayer;
- (void)renderFrameReachedTargetSize;
- (struct CGRect)convertRectToImage:(struct CGRect)arg1;
- (void)transitionToSize:(struct CGSize)arg1 duration:(double)arg2 animationCurve:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transitionToSize:(struct CGSize)arg1 offset:(struct CGPoint)arg2 duration:(double)arg3 animationCurve:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

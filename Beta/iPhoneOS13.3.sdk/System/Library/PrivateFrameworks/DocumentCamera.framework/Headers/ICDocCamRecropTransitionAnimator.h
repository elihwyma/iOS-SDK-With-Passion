/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@class ICDocCamImageQuad, NSIndexPath, NSString, UIImage, UIView;

@interface ICDocCamRecropTransitionAnimator : NSObject

{
    _Bool _presenting;
    UIImage *_filteredImage;
    UIImage *_unfilteredImage;
    NSIndexPath *_indexPath;
    double _duration;
    CDUnknownBlockType _completion;
    long long _orientation;
    UIView *_startView;
    ICDocCamImageQuad *_quadForOverlay;
    struct CGRect _containerViewFrame;
}

@property (retain, nonatomic) UIImage *filteredImage;
@property (retain, nonatomic) UIImage *unfilteredImage;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) double duration;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect containerViewFrame;
@property (weak, nonatomic) UIView *startView;
@property (retain, nonatomic) ICDocCamImageQuad *quadForOverlay;
@property (nonatomic) _Bool presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)performPushTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (void)performPopTransitionFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (id)scrollViewTransform:(_Bool)arg1;
- (id)imageMeshTransform:(_Bool)arg1;
- (void)performSimpleFadeInFromViewController:(id)arg1 toViewController:(id)arg2 transitionContext:(id)arg3;
- (union _GLKMatrix3)matrixTransformingQuadForOverlayToImageView:(_Bool *)arg1;
- (void)sortPoints:(struct CGPoint *)arg1 sorted:(struct CGPoint *)arg2;
- (union _GLKMatrix3)matrixTransformingToUnitSquareWithPoints:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 x2:(double)arg5 y2:(double)arg6 x3:(double)arg7 y3:(double)arg8;
- (id)initWithImage:(id)arg1 unfilteredImage:(id)arg2 orientation:(long long)arg3 indexPath:(id)arg4 duration:(double)arg5 completion:(CDUnknownBlockType)arg6;

@end

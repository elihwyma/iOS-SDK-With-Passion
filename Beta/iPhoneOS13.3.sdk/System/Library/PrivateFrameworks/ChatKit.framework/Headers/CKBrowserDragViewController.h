/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CADisplayLink, CALayer, CKAnimatedImage, CKElasticFunction, NSArray, NSMutableDictionary, NSString, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView;

@protocol CKBrowserDragViewControllerDelegate;

@interface CKBrowserDragViewController : UIViewController

{
    _Bool _canScale;
    _Bool _canRotate;
    _Bool _canPeel;
    _Bool _pressed;
    _Bool _scaledDown;
    _Bool _hasMovedToWindow;
    id <CKBrowserDragViewControllerDelegate> _delegate;
    double _dragViewScale;
    UILongPressGestureRecognizer *_gestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CKAnimatedImage *_dragImage;
    NSMutableDictionary *_peelMaskImageCache;
    UIImage *_currentFrameImage;
    NSArray *_dragImageFrames;
    UIView *_dragView;
    UIView *_plusImageView;
    UIView *_whiteBackground;
    CALayer *_peelImageLayer;
    CALayer *_peelMaskLayer;
    double _initialScale;
    double _rotationAngle;
    CALayer *_shineLayer;
    CALayer *_shadowLayer;
    CALayer *_dropShadowLayer;
    CALayer *_peelLayer;
    CALayer *_meshLayer;
    CALayer *_perspectiveLayer;
    CADisplayLink *_displayLink;
    double _elasticLastTime;
    double _elasticRemainingTime;
    CKElasticFunction *_elasticFunctionPositionX;
    CKElasticFunction *_elasticFunctionPositionY;
    CKElasticFunction *_elasticFunctionRotation;
    double _elasticRotationAngle;
    CKElasticFunction *_elasticFunctionScaleX;
    CKElasticFunction *_elasticFunctionScaleY;
    double _elasticScaleX;
    double _elasticScaleY;
    struct CGPoint _anchorOffset;
    struct CGSize _initialSize;
    struct CGPoint _initialDragStartPosition;
    struct CGSize _rasterizedImageSize;
    struct CGPoint _previousPanLocationInView;
    struct CGPoint _meshLayerStartPosition;
    struct CGPoint _peelLayerStartPosition;
    struct CGPoint _shineLayerStartPosition;
    struct CGPoint _shadowLayerStartPosition;
    struct CGPoint _dropShadowLayerStartPosition;
    struct CGRect _sourceRect;
}

@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) CKAnimatedImage *dragImage;
@property (retain, nonatomic) NSMutableDictionary *peelMaskImageCache;
@property (retain, nonatomic) UIImage *currentFrameImage;
@property (retain, nonatomic) NSArray *dragImageFrames;
@property (retain, nonatomic) UIView *dragView;
@property (retain, nonatomic) UIView *plusImageView;
@property (retain, nonatomic) UIView *whiteBackground;
@property (retain, nonatomic) CALayer *peelImageLayer;
@property (retain, nonatomic) CALayer *peelMaskLayer;
@property (nonatomic) struct CGRect sourceRect;
@property (nonatomic) struct CGPoint anchorOffset;
@property (nonatomic) struct CGSize initialSize;
@property (nonatomic) double initialScale;
@property (nonatomic) struct CGPoint initialDragStartPosition;
@property (nonatomic) struct CGSize rasterizedImageSize;
@property (nonatomic) double dragViewScale;
@property (nonatomic) double rotationAngle;
@property (nonatomic) struct CGPoint previousPanLocationInView;
@property (nonatomic) CALayer *shineLayer;
@property (nonatomic) CALayer *shadowLayer;
@property (nonatomic) CALayer *dropShadowLayer;
@property (nonatomic) CALayer *peelLayer;
@property (nonatomic) CALayer *meshLayer;
@property (nonatomic) CALayer *perspectiveLayer;
@property (nonatomic) struct CGPoint meshLayerStartPosition;
@property (nonatomic) struct CGPoint peelLayerStartPosition;
@property (nonatomic) struct CGPoint shineLayerStartPosition;
@property (nonatomic) struct CGPoint shadowLayerStartPosition;
@property (nonatomic) struct CGPoint dropShadowLayerStartPosition;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double elasticLastTime;
@property (nonatomic) double elasticRemainingTime;
@property (retain, nonatomic) CKElasticFunction *elasticFunctionPositionX;
@property (retain, nonatomic) CKElasticFunction *elasticFunctionPositionY;
@property (retain, nonatomic) CKElasticFunction *elasticFunctionRotation;
@property (nonatomic) double elasticRotationAngle;
@property (retain, nonatomic) CKElasticFunction *elasticFunctionScaleX;
@property (retain, nonatomic) CKElasticFunction *elasticFunctionScaleY;
@property (nonatomic) double elasticScaleX;
@property (nonatomic) double elasticScaleY;
@property (nonatomic, getter=isPressed) _Bool pressed;
@property (nonatomic, getter=isScaledDown) _Bool scaledDown;
@property (nonatomic) _Bool hasMovedToWindow;
@property (weak, nonatomic) id <CKBrowserDragViewControllerDelegate> delegate;
@property (nonatomic) _Bool canScale;
@property (nonatomic) _Bool canRotate;
@property (nonatomic) _Bool canPeel;
@property (nonatomic, readonly) struct CGPoint dragViewCenter;
@property (nonatomic, readonly) double dragViewRotation;
@property (nonatomic, readonly) double absoluteScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)meshTransform;
+ (_Bool)supportsForceTouch;
+ (id)springAnimationWithKeyPath:(id)arg1 speed:(float)arg2;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)gestureRecognized:(id)arg1;
- (void)updateAnimationTimerObserving;
- (void)animationTimerFired:(unsigned long long)arg1;
- (id)initWithDragImage:(id)arg1 inSourceRect:(struct CGRect)arg2 withSourcePoint:(struct CGPoint)arg3 withGestureRecognizer:(id)arg4;
- (void)setPlusImageViewHidden:(_Bool)arg1;
- (void)animateBackToSourceCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animatePlacementAtPoint:(struct CGPoint)arg1 shouldShrink:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)reversePeelAnimationToPoint:(struct CGPoint)arg1 forPlacement:(_Bool)arg2 shouldShrink:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setUpPeelLayers;
- (void)panGestureRecognized:(id)arg1;
- (void)animatePeelWithCompletion:(CDUnknownBlockType)arg1;
- (void)_attachElasticEffectsForLocation:(struct CGPoint)arg1;
- (void)_updateElasticEffectsForLocation:(struct CGPoint)arg1;
- (_Bool)_orbScalingEnabled;
- (void)_detachElasticEffects;
- (void)commitDrag;
- (void)_displayLinkCallback:(id)arg1;
- (void)animateScaleDown;
- (void)applyTransforms;
- (double)dragViewScaleUp;
- (id)peelMaskImageFromImage:(id)arg1;
- (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
- (void)manuallyInitializeDragAtPoint:(struct CGPoint)arg1;
- (void)manuallyUpdateDragPositionToPoint:(struct CGPoint)arg1;

@end

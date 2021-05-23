/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSString, PXViewSpec, UIFont;

@interface UIView (PXLayoutParticipant)

@property (nonatomic) struct CGRect frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIFont *px_bannerTitleFont;
@property (nonatomic, readonly) struct CGPoint px_bannerTitlePosition;
@property (retain, nonatomic, setter=px_setSpec:) PXViewSpec *px_spec;
@property (nonatomic, readonly) _Bool px_intersectsWindowBounds;
@property (nonatomic, readonly) double px_screenScale;
@property (nonatomic, readonly) struct UIEdgeInsets px_peripheryInsets;
@property (nonatomic, readonly) _Bool px_hasHiddenAncestor;

+ (struct CGSize)px_videoOverlayButtonSize;
+ (id)px_videoOverlayButtonWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(_Bool)arg2;
+ (void)px_preloadResourcesForVideoOverlayButtonWithStyle:(long long)arg1;
+ (id)px_videoOverlayButtonWithStyle:(long long)arg1;
+ (void)px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 withDuration:(double)arg5 delay:(double)arg6 usingSpringWithDamping:(double)arg7 initialVelocity:(struct PXDisplayVelocity)arg8 options:(unsigned long long)arg9 completion:(CDUnknownBlockType)arg10;
+ (void)px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 usingDefaultDampedSpringWithDelay:(double)arg5 initialVelocity:(struct PXDisplayVelocity)arg6 options:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)px_animateUsingDefaultDampedEaseInEaseOutWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)px_circularGlyphViewWithName:(id)arg1 backgroundColor:(id)arg2;
+ (void)_px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 withInitialVelocity:(struct PXDisplayVelocity)arg5 usingSpringAnimation:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;

- (id)px_allGridKitViews;
- (void)pxg_configureWithTexture:(id)arg1 geometry:(CDStruct_3ab912e1 *)arg2 info:(CDStruct_9d1ebe49 *)arg3 style:(CDStruct_506f5052 *)arg4 textureInfo:(CDStruct_183601bc *)arg5 resizableCapInsets:(CDStruct_0054b44d *)arg6;
- (void)pxg_becomeReusable;
- (void)pxg_addToScrollViewController:(id)arg1;
- (void)pxg_prepareForReuse;
- (void)pxg_shiftPosition:(struct CGPoint)arg1;
- (void)px_animateAlpha:(_Bool)arg1 transformType:(long long)arg2 withZoomTransitionContext:(id)arg3;
- (void)px_animateWithZoomTransitionContext:(id)arg1;
- (void)px_transferToSuperview:(id)arg1 forZoomTransitionWithContex:(id)arg2;
- (void)px_enumerateDescendantSubviewsWithBlock:(CDUnknownBlockType)arg1;

@end

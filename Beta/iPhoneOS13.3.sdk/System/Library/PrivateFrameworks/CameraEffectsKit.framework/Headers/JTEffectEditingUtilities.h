/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface JTEffectEditingUtilities : NSObject

+ (void)setStreamingMode:(_Bool)arg1;
+ (void)addTransformToEffect:(id)arg1 transform:(struct CGAffineTransform)arg2 relativeToBounds:(struct CGRect)arg3 time:(CDStruct_1b6d18a9)arg4 restrictToBounds:(_Bool)arg5;
+ (void)updateEffectText:(id)arg1 newText:(id)arg2;
+ (_Bool)canApplyEffectAsTracked;
+ (void)configureOverlayForInsertion:(id)arg1 atScaleRelativeToComposition:(double)arg2 includeTracking:(_Bool)arg3 previewViewCorrectionTransform:(struct CGAffineTransform)arg4;
+ (void)configureOverlayForInsertion:(id)arg1 atNormalizedCompositionPoint:(struct CGPoint)arg2 scaleX:(double)arg3 scaleY:(double)arg4 rotationAngle:(double)arg5 includeTracking:(_Bool)arg6 previewViewCorrectionTransform:(struct CGAffineTransform)arg7;
+ (_Bool)canEditTextForEffect:(id)arg1;
+ (void)updateEffectVisibility:(id)arg1 value:(_Bool)arg2;
+ (id)hitTestEffectsAtPosterFrame:(id)arg1 atNormalizedPoint:(struct CGPoint)arg2 atTime:(CDStruct_1b6d18a9)arg3 includeTracking:(_Bool)arg4 minimumHitTestArea:(CDStruct_c3b9c2ee)arg5;
+ (void)disableAnimationForEffects:(id)arg1;
+ (id)textForEffect:(id)arg1;
+ (id)hitTestEffectsAtPosterFrame:(id)arg1 atPoint:(struct CGPoint)arg2 relativeToBounds:(struct CGRect)arg3 atTime:(CDStruct_1b6d18a9)arg4 includeTracking:(_Bool)arg5;
+ (struct CGRect)frameForEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 relativeToBounds:(struct CGRect)arg3 includeTracking:(_Bool)arg4 minimumHitTestArea:(CDStruct_c3b9c2ee)arg5;
+ (id)viewInfoForEffect:(id)arg1 forViewBoundsAtPosterFrame:(struct CGRect)arg2 time:(CDStruct_1b6d18a9)arg3 includeDropShadow:(_Bool)arg4;
+ (struct CGPoint)removeButtonPositionForEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 atPosterFrameRelativeToBounds:(struct CGRect)arg3 includeTracking:(_Bool)arg4 viewCorrectionTransform:(struct CGAffineTransform)arg5;
+ (id)createTextEditingPropertiesForEffect:(id)arg1 relativeTo:(struct CGRect)arg2 atTime:(CDStruct_1b6d18a9)arg3 displayScale:(double)arg4;
+ (void)beginTextEditingForEffect:(id)arg1;
+ (void)updateEffectToDefaultTextIfEmpty:(id)arg1;
+ (void)endTextEditingForEffect:(id)arg1;
+ (unsigned long long)maximumTextLengthForEffect:(id)arg1;
+ (struct CGPoint)spacingBetweenCenterPointOfEffect:(id)arg1 point:(struct CGPoint)arg2 relativeToBounds:(struct CGRect)arg3 atTime:(CDStruct_1b6d18a9)arg4 includeTracking:(_Bool)arg5;
+ (id)trackingTransformWithEffect:(id)arg1 effectFrame:(id)arg2 objectTransform:(id)arg3 fractionComplete:(double)arg4;
+ (id)hitTestEffects:(id)arg1 atPoint:(struct CGPoint)arg2 relativeToBounds:(struct CGRect)arg3 atTime:(CDStruct_1b6d18a9)arg4 includeTracking:(_Bool)arg5;
+ (void)changeTrackingTypeIfNecessary:(id)arg1 forTouchPoint:(struct CGPoint)arg2 withBounds:(struct CGRect)arg3 completion:(CDUnknownBlockType)arg4;
+ (struct CGRect)frameForEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 relativeToBounds:(struct CGRect)arg3;
+ (void)enableAnimationForEffects:(id)arg1 animationStartTime:(CDStruct_1b6d18a9)arg2;
+ (struct CGRect)compositionBounds;
+ (struct CGRect)rectForCustomizedOverlay:(id)arg1 relativeToBounds:(struct CGRect)arg2 scaleX:(double)arg3 scaleY:(double)arg4;
+ (struct CGRect)CFX_motionRectForEffectFromFaceTrackRect:(struct CGRect)arg1 forEffect:(id)arg2 relativeToSize:(struct CGSize)arg3;
+ (struct CGSize)CFX_compositionSize;
+ (struct CGPoint)CFX_placementPointForOverlay:(id)arg1 withBounds:(struct CGRect)arg2 inCompositionRect:(struct CGRect)arg3;
+ (struct CGRect)CFX_frameForEffect:(id)arg1 fitToBounds:(struct CGRect)arg2;
+ (struct CGRect)CFX_screenRectForOverlayRect:(struct CGRect)arg1 inCompositionRect:(struct CGRect)arg2 withFaceAnchor:(id)arg3;
+ (struct CGPoint)CFX_screenPointFromCompositionPoint:(struct CGPoint)arg1 locatedOnFace:(_Bool)arg2 withFaceAnchor:(id)arg3 bufferSize:(struct CGSize)arg4;
+ (id)CFX_hitTestEffects:(id)arg1 withinEffectPoints:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 forcePosterFrame:(_Bool)arg4 includeTracking:(_Bool)arg5 minimumHitTestArea:(CDStruct_c3b9c2ee)arg6;
+ (int)CFX_trackingTypeForOverlayIntersectionWithFaceRect:(id)arg1 withCurrentTrackingType:(int)arg2;
+ (struct CGRect)CFX_faceTrackRectForEffectFromUIKitCGRect:(struct CGRect)arg1 forEffect:(id)arg2 relativeToSize:(struct CGSize)arg3;
+ (struct CGPoint)CFX_compositionPointFromScreenPoint:(struct CGPoint)arg1 locatedOnFace:(_Bool)arg2 withFaceAnchor:(id)arg3 bufferSize:(struct CGSize)arg4;
+ (struct CGPoint)CFX_faceTrackPointFromCGPoint:(struct CGPoint)arg1 overlay:(id)arg2 relativeToSize:(struct CGSize)arg3;
+ (struct CGPoint)CFX_convertPoint:(struct CGPoint)arg1 fromSize:(struct CGSize)arg2 toSize:(struct CGSize)arg3 invertY:(_Bool)arg4;
+ (struct CGPoint)CFX_originAfterApplyingCenteredCropOnPoint:(struct CGPoint)arg1 outerSize:(struct CGSize)arg2 innerSize:(struct CGSize)arg3;
+ (struct CGPoint)CFX_closeButtonInsetForEffect:(id)arg1 viewBounds:(struct CGRect)arg2;
+ (void)CFX_ApplyTextFlipIfNeeded:(id)arg1 transform:(struct CGAffineTransform)arg2;
+ (_Bool)isStreamingMode;
+ (_Bool)shouldRenderTextWithMotionWhileEditingTextForEffect:(id)arg1;
+ (void)setTextRenderingEnabledForEffect:(id)arg1 value:(_Bool)arg2;
+ (id)hitTestEffectsAtPosterFrame:(id)arg1 atNormalizedPoints:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 includeTracking:(_Bool)arg4;
+ (id)hitTestEffects:(id)arg1 atNormalizedPoint:(struct CGPoint)arg2 atTime:(CDStruct_1b6d18a9)arg3 includeTracking:(_Bool)arg4;
+ (id)overlayHitTestPointsForFrame:(struct CGRect)arg1 compositionSize:(struct CGSize)arg2;
+ (_Bool)areFaceTrackedEffects:(id)arg1;
+ (struct CGRect)currentFaceRectRelativeToBounds:(struct CGRect)arg1;
+ (void)setTrackingTypeForEffect:(id)arg1 trackingType:(int)arg2;

@end

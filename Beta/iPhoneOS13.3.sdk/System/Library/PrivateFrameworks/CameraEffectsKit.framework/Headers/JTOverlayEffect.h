/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTTextEffect.h>

@class JTTrackedEffectProperties, NSString;

@interface JTOverlayEffect : JTTextEffect

{
    NSString *_accessibilityOverlayEffectLabel;
    JTTrackedEffectProperties *_trackingProps;
}

@property float opacity;
@property (copy, nonatomic) NSString *accessibilityOverlayEffectLabel;
@property (nonatomic, getter=isTextFlipped) _Bool flipText;
@property (nonatomic, getter=isTailFlipped) _Bool flipTail;
@property (retain, nonatomic) JTTrackedEffectProperties *trackingProps;

+ (_Bool)supportsSecureCoding;
+ (id)effectIDToImageSequenceIDMap;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maxCharacters;
- (id)accessibilityName;
- (void)setForceRenderAtPosterFrame:(_Bool)arg1;
- (void)setTransformAnimation:(id)arg1;
- (_Bool)enablePresentationState:(_Bool)arg1;
- (id)initWithEffectID:(id)arg1;
- (struct CGRect)imageFrame:(CDStruct_1b6d18a9)arg1 atPosterFrameTimeRelativeTo:(struct CGRect)arg2 basisOrigin:(int)arg3 includeDropShadow:(_Bool)arg4;
- (void)applyScaleToFitFrame:(struct CGRect)arg1 withComponentTime:(CDStruct_1b6d18a9)arg2 relativeRect:(struct CGRect)arg3;
- (_Bool)setImageSequencePathToDownloadedAssets;
- (double)pickerScale;
- (void)setSingleLineScaleThreshold:(double)arg1;
- (double)customPickerRotation;
- (id)customPrimaryFillColor;
- (id)serializableEffectParameters;
- (_Bool)supportsFlippingText;
- (void)imagePoints:(struct CGPoint *)arg1 time:(CDStruct_1b6d18a9)arg2 relativeTo:(struct CGRect)arg3 basisOrigin:(int)arg4 includeDropShadow:(_Bool)arg5;
- (void)imagePointsAtPosterFrameTime:(struct CGPoint *)arg1 time:(CDStruct_1b6d18a9)arg2 relativeTo:(struct CGRect)arg3 basisOrigin:(int)arg4 includeDropShadow:(_Bool)arg5;
- (struct CGRect)JT_convertBounds:(struct CGRect)arg1 relativeTo:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (id)JT_convertTransform:(id)arg1 relativeTo:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (void)applyInverseOfTransformAnimation:(id)arg1 withComponentTime:(CDStruct_1b6d18a9)arg2 relativeRect:(struct CGRect)arg3;
- (_Bool)objectBoundsAtPosterFrame:(struct CGRect *)arg1 relativeTo:(struct CGRect)arg2 basisOrigin:(int)arg3 includeDropShadow:(_Bool)arg4 includeMasks:(_Bool)arg5;
- (_Bool)objectBounds:(struct CGRect *)arg1 time:(CDStruct_1b6d18a9)arg2 relativeTo:(struct CGRect)arg3 basisOrigin:(int)arg4 includeDropShadow:(_Bool)arg5 includeMasks:(_Bool)arg6;
- (id)transformAtPosterFrame:(CDStruct_1b6d18a9)arg1 relativeTo:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (id)transformAtTime:(CDStruct_1b6d18a9)arg1 relativeTo:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (id)objectTransformRelativeTo:(struct CGRect)arg1 basisOrigin:(int)arg2;
- (id)clipTransformAtTime:(CDStruct_1b6d18a9)arg1 relativeTo:(struct CGRect)arg2 basisOrigin:(int)arg3;
- (id)JT_viewInfoForViewBounds:(struct CGRect)arg1 time:(CDStruct_1b6d18a9)arg2 isPosterFrame:(_Bool)arg3 includeDropShadow:(_Bool)arg4;
- (_Bool)hitTest:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2 relativeTo:(struct CGRect)arg3 basisOrigin:(int)arg4 withMinimumOverlaySize:(struct CGSize)arg5;
- (_Bool)JT_isPoint:(struct CGPoint)arg1 inPolyWithPoints:(struct CGPoint *)arg2 numPoints:(unsigned int)arg3 withMinimumOverlaySize:(struct CGSize)arg4;
- (_Bool)hitTestAtPosterFrameTime:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2 relativeTo:(struct CGRect)arg3 basisOrigin:(int)arg4 withMinimumOverlaySize:(struct CGSize)arg5;
- (struct CGPoint)hitAreaScale;
- (_Bool)isAppearanceEqual:(id)arg1;
- (void)setRenderStartOffset:(CDStruct_1b6d18a9)arg1;
- (_Bool)supportsFlippingTail;
- (struct CGRect)imageFrame:(CDStruct_1b6d18a9)arg1 relativeTo:(struct CGRect)arg2 basisOrigin:(int)arg3 includeDropShadow:(_Bool)arg4;
- (id)copyOfOverlayWithFrameAt:(struct CGRect)arg1 withClip:(id)arg2 relativeToRect:(struct CGRect)arg3 currentPlaybackTime:(int)arg4;
- (id)viewInfoForViewBoundsAtPosterFrame:(struct CGRect)arg1 time:(CDStruct_1b6d18a9)arg2 includeDropShadow:(_Bool)arg3;
- (id)viewInfoForViewBounds:(struct CGRect)arg1 atTime:(CDStruct_1b6d18a9)arg2 includeDropShadow:(_Bool)arg3;
- (_Bool)hitTest:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2 relativeTo:(struct CGRect)arg3 basisOrigin:(int)arg4;
- (_Bool)hitTestAtPosterFrameTime:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2 relativeTo:(struct CGRect)arg3 basisOrigin:(int)arg4;
- (struct CGPoint)closeButtonInset;
- (_Bool)includeDropShadowWhenPositioningCloseButton;

@end

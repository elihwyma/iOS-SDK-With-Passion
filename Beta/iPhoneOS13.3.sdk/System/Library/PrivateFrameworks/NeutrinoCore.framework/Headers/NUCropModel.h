/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class MISSING_TYPE;

@interface NUCropModel : NSObject <Swift>

{
    MISSING_TYPE *_imageCenter;
    struct CGRect _cropRect;
    double _pitchRadians;
    double _yawRadians;
    double _rollRadians;
    double _fovRadians;
    _Bool _isAutoCrop;
    unsigned long long _hitVertexID;
    CDStruct_d58201db _aspectRatio;
    struct CGRect _masterImageRect;
    struct CGRect _stitchedImageRect;
}

@property (nonatomic, readonly) _Bool hasOvercapture;
@property (nonatomic) double pitchRadians;
@property (nonatomic) double yawRadians;
@property (nonatomic) double rollRadians;
@property (nonatomic, readonly) struct CGSize masterImageSize;
@property (nonatomic, readonly) struct CGRect masterImageRect;
@property (nonatomic, readonly) double fovRadians;
@property (nonatomic, readonly) struct CGSize stitchedImageSize;
@property (nonatomic, readonly) struct CGRect stitchedImageRect;
@property struct CGRect cropRect;
@property (nonatomic) CDStruct_912cb5d2 aspectRatio;
@property (readonly) _Bool hasCrop;
@property (readonly) _Bool cropNeedsOvercapture;
@property (readonly) unsigned long long hitVertexID;
@property (nonatomic) _Bool isAutoCrop;
@property (nonatomic, readonly) double pitchDegreeUI;
@property (nonatomic, readonly) double yawDegreeUI;
@property (nonatomic, readonly) double rollDegreeUI;

+ (CDStruct_14d5dc5e)_imageTransformFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(struct CGRect)arg4;
+ (CDStruct_912cb5d2)freeFormAspectRatio;
+ (double)defaultFocalLength;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (_Bool)_hasDefaultValues;
- (struct CGRect)integralCropRect:(struct CGRect)arg1;
- (unsigned long long)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (unsigned long long)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (unsigned long long)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (void)makeCurrentAspectRatioFreeForm;
- (id)initWithMasterImageSize:(struct CGSize)arg1;
- (id)initWithMasterImageRect:(struct CGRect)arg1 stitchedImageRect:(struct CGRect)arg2;
- (void)makeCurrentFreeFormAspectFixed;
- (_Bool)imageContainsRect:(struct CGRect)arg1 withTol:(double)arg2;
- (CDStruct_14d5dc5e)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector)arg1 strict:(_Bool)arg2 startRect:(struct CGRect)arg3;
- (unsigned long long)setForZoomCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2;
- (unsigned long long)setRollAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(struct CGRect)arg3 startAngle:(double)arg4;
- (unsigned long long)setYawAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(struct CGRect)arg3 startAngle:(double)arg4;
- (unsigned long long)setPitchAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(struct CGRect)arg3 startAngle:(double)arg4;
- (id)initWithMasterImageRect:(struct CGRect)arg1;
- (id)initWithMasterImageSize:(struct CGSize)arg1 fovRadians:(double)arg2;
- (id)initWithMasterImageSize:(struct CGSize)arg1 stitchedImageSize:(struct CGSize)arg2;
- (id)copyWithMasterImageSize:(struct CGSize)arg1 fovRadians:(double)arg2;
- (_Bool)isEqualToCropModel:(id)arg1;
- (struct CGRect)_widestCropRect;
- (MISSING_TYPE *)_defaultImageCenter;
- (struct CGRect)_defaultCropRect;
- (void)_setToDefaultValues;
- (struct Quad2d)_getBoundingQuad;
- (struct Quad2d)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3;
- (struct Quad2d)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(struct CGRect)arg4;
- (CDStruct_14d5dc5e)_getBoundingQuadFromPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 withExpansionTol:(double)arg4 imageRect:(struct CGRect)arg5;
- (struct CGRect)_integralCropRect:(struct CGRect)arg1 straightenAngle:(double)arg2 anchorPoint:(struct CGPoint)arg3;
- (void)_setCropRect:(struct CGRect)arg1;
- (void)_setCropRect:(struct CGRect)arg1 anchor:(struct CGPoint)arg2;
- (void)_setCropRectWithConstantSize:(struct CGRect)arg1;
- (unsigned long long)_hitMaskFromRect:(struct CGRect)arg1;
- (unsigned long long)_hitMaskFromRect:(struct CGRect)arg1 withTol:(double)arg2;
- (void)_debugPrintHitMask;
- (void)_debugPrintHitMask:(unsigned long long)arg1;
- (struct CGRect)_anchorAlignedRectFromCandidate:(struct CGRect)arg1 withAnchor:(struct CGPoint)arg2;
- (_Bool)canGrowCropRect:(struct CGRect)arg1 constrainWithAnchorPoint:(struct CGPoint)arg2 strict:(_Bool)arg3 withTol:(double)arg4;
- (unsigned long long)setCropRect:(struct CGRect)arg1 constrainWithAnchorPoint:(struct CGPoint)arg2;
- (unsigned long long)setCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2 constrainWithAnchorPoint:(struct CGPoint)arg3;
- (unsigned long long)setCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2 constrainWithAnchorPoint:(struct CGPoint)arg3 strict:(_Bool)arg4;
- (struct CGRect)_expandedCropRectForZoom:(struct CGRect)arg1 candidateRect:(struct CGRect)arg2;
- (struct CGRect)getCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2 pitch:(double)arg3 yaw:(double)arg4 roll:(double)arg5 constrainWithAnchorPoint:(struct CGPoint)arg6 strict:(_Bool)arg7 aspectRatioIsFreeForm:(_Bool)arg8 hitVertexId:(unsigned long long *)arg9;
- (struct CGRect)getCropRectThatCompletelyContainsMasterImageForPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector)arg1;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector)arg1 strict:(_Bool)arg2;
- (unsigned long long)setAspectRatio:(CDStruct_912cb5d2)arg1 constrainCropRect:(struct CGRect)arg2 withTargetArea:(double)arg3;
- (double)_currentAspectAsDouble:(struct CGRect)arg1;
- (CDStruct_912cb5d2)_currentAspectRatio:(struct CGRect)arg1;
- (_Bool)aspectRatioIsOriginal;
- (_Bool)aspectRatioIsFreeForm;
- (CDStruct_912cb5d2)originalAspectRatio;

@end

/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ICDocCamImageQuad : NSObject

{
    struct CGPoint _topLeft;
    struct CGPoint _topRight;
    struct CGPoint _bottomLeft;
    struct CGPoint _bottomRight;
    struct CGRect _boundingBox;
}

@property (nonatomic) struct CGPoint topLeft;
@property (nonatomic) struct CGPoint topRight;
@property (nonatomic) struct CGPoint bottomLeft;
@property (nonatomic) struct CGPoint bottomRight;
@property (nonatomic) struct CGRect boundingBox;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) _Bool isConvex;
@property (nonatomic, readonly) _Bool containsIntersectingLines;
@property (nonatomic, readonly) _Bool containsPointsLessThanDistanceThreshold;
@property (nonatomic, readonly) _Bool containsPointOutsideOfExtendedImageBounds;
@property (nonatomic, readonly) _Bool containsAngleOutOfValidThreshold;
@property (nonatomic, readonly) double mininumAllowedDistanceBetweenPoints;
@property (nonatomic, readonly) _Bool isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)quadFromCGRect:(struct CGRect)arg1;
+ (id)quadFromVNRectangle:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBottomLeft:(struct CGPoint)arg1 bottomRight:(struct CGPoint)arg2 topLeft:(struct CGPoint)arg3 topRight:(struct CGPoint)arg4;
- (void)flipPointsWithSourceFrame:(struct CGRect)arg1;
- (void)clampQuadToRect:(struct CGRect)arg1;
- (void)applyOrientation:(long long)arg1 boundingBox:(struct CGRect)arg2;
- (id)quadByConvertingFromView:(struct UIView *)arg1 toView:(struct UIView *)arg2 isNormalized:(_Bool)arg3;
- (id)normalizedQuadByConvertingFromView:(struct UIView *)arg1 toView:(struct UIView *)arg2 toViewSize:(struct CGSize)arg3;
- (void)removeOrientation:(long long)arg1 boundingBox:(struct CGRect)arg2;
- (void)orientIfNecessary;
- (id)imageQuadByScalingBy:(struct CGSize)arg1;
- (void)addPointToQuadPoints:(struct CGPoint)arg1;
- (id)intersectionOfLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withLineFrom:(struct CGPoint)arg3 to:(struct CGPoint)arg4;
- (void)rotatePointsByOrientation:(long long)arg1;
- (void)rotatePointsRemovingOrientation:(long long)arg1;
- (void)rotatePointsClockwise;
- (struct CGPoint)pointRotatedClockwiseAroundOrigin:(struct CGPoint)arg1;
- (struct CGSize)perspectiveCorrectedSize;
- (id)flippedQuadFromSourceFrame:(struct CGRect)arg1;

@end

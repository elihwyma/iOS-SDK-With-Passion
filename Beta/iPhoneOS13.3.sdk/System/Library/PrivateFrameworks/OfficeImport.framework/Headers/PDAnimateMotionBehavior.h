/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDAnimateScaleBehavior.h>

@class NSString, OITSUBezierPath;

__attribute__((visibility("hidden")))
@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior

{
    OITSUBezierPath *mPath;
    _Bool mHasAngle;
    double mAngle;
    NSString *mPointsTypes;
    _Bool mHasOriginType;
    int mOriginType;
    _Bool mHasRotationCenter;
    struct CGPoint mRotationCenter;
    _Bool mHasPathEditMode;
    int mPathEditMode;
}

+ (id)bezierPathFromNSString:(id)arg1;
+ (id)NSStringForBezierPath:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)path;
- (void)setPath:(id)arg1;
- (double)angle;
- (void)setAngle:(double)arg1;
- (_Bool)hasPath;
- (_Bool)hasAngle;
- (void)setOriginType:(int)arg1;
- (id)pointsTypes;
- (_Bool)hasOriginType;
- (int)originType;
- (_Bool)hasRotationCenter;
- (struct CGPoint)rotationCenter;
- (_Bool)hasPathEditMode;
- (int)pathEditMode;
- (void)setPointsTypes:(id)arg1;
- (void)setRotationCenter:(struct CGPoint)arg1;
- (void)setPathEditMode:(int)arg1;

@end

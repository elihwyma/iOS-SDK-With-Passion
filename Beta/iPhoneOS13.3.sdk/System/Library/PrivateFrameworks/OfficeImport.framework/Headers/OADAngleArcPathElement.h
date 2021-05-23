/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADAngleArcPathElement : OADPathElement

{
    struct OADAdjustPoint mCenter;
    struct OADAdjustPoint mSemiaxes;
    struct OADAdjustCoord mStartAngle;
    struct OADAdjustCoord mAngleLength;
    _Bool mConnectedToPrevious;
}

- (struct OADAdjustPoint)center;
- (struct OADAdjustCoord)startAngle;
- (id)initWithCenter:(struct OADAdjustPoint)arg1 semiaxes:(struct OADAdjustPoint)arg2 startAngle:(struct OADAdjustCoord)arg3 angleLength:(struct OADAdjustCoord)arg4 connectedToPrevious:(_Bool)arg5;
- (struct OADAdjustPoint)semiaxes;
- (struct OADAdjustCoord)angleLength;
- (_Bool)connectedToPrevious;

@end

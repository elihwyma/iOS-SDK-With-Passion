/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADCubicBezierToPathElement : OADPathElement

{
    struct OADAdjustPoint mControlPoint1;
    struct OADAdjustPoint mControlPoint2;
    struct OADAdjustPoint mToPoint;
    _Bool mRelative;
}

- (struct OADAdjustPoint)controlPoint1;
- (struct OADAdjustPoint)controlPoint2;
- (struct OADAdjustPoint)toPoint;
- (_Bool)relative;
- (id)initWithControlPoint1:(struct OADAdjustPoint)arg1 controlPoint2:(struct OADAdjustPoint)arg2 toPoint:(struct OADAdjustPoint)arg3;
- (void)setRelative:(_Bool)arg1;

@end

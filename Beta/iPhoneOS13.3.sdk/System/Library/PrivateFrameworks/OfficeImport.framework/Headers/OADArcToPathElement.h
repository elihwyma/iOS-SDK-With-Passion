/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADArcToPathElement : OADPathElement

{
    struct OADAdjustPoint mSemiaxes;
    struct OADAdjustCoord mStartAngle;
    struct OADAdjustCoord mAngleLength;
}

- (struct OADAdjustCoord)startAngle;
- (id)initWithSemiaxes:(struct OADAdjustPoint)arg1 startAngle:(struct OADAdjustCoord)arg2 angleLength:(struct OADAdjustCoord)arg3;
- (struct OADAdjustPoint)semiaxes;
- (struct OADAdjustCoord)angleLength;

@end

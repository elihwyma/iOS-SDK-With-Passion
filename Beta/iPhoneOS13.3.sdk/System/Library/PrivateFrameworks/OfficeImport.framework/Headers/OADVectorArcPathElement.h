/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADVectorArcPathElement : OADPathElement

{
    struct OADAdjustCoord mLeft;
    struct OADAdjustCoord mTop;
    struct OADAdjustCoord mRight;
    struct OADAdjustCoord mBottom;
    struct OADAdjustPoint mStartVector;
    struct OADAdjustPoint mEndVector;
    _Bool mClockwise;
    _Bool mConnectedToPrevious;
}

- (struct OADAdjustCoord)left;
- (struct OADAdjustCoord)top;
- (struct OADAdjustCoord)bottom;
- (struct OADAdjustCoord)right;
- (id)initWithLeft:(struct OADAdjustCoord)arg1 top:(struct OADAdjustCoord)arg2 right:(struct OADAdjustCoord)arg3 bottom:(struct OADAdjustCoord)arg4 startVector:(struct OADAdjustPoint)arg5 endVector:(struct OADAdjustPoint)arg6 clockwise:(_Bool)arg7 connectedToPrevious:(_Bool)arg8;
- (_Bool)connectedToPrevious;
- (struct OADAdjustPoint)startVector;
- (struct OADAdjustPoint)endVector;
- (_Bool)clockwise;

@end

/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADQuadBezierToPathElement : OADPathElement

{
    struct OADAdjustPoint mControlPoint;
    struct OADAdjustPoint mToPoint;
}

- (struct OADAdjustPoint)toPoint;
- (struct OADAdjustPoint)controlPoint;
- (id)initWithControlPoint:(struct OADAdjustPoint)arg1 toPoint:(struct OADAdjustPoint)arg2;

@end

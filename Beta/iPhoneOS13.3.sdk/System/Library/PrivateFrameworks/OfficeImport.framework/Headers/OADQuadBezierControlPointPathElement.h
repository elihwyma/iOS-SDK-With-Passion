/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADQuadBezierControlPointPathElement : OADPathElement

{
    struct OADAdjustPoint mControlPoint;
}

- (struct OADAdjustPoint)controlPoint;
- (id)initWithControlPoint:(struct OADAdjustPoint)arg1;

@end

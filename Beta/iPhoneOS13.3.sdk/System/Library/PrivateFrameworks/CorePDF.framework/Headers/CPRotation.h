/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPZone.h>

__attribute__((visibility("hidden")))
@interface CPRotation : CPZone

{
    double rotationAngle;
}

- (id)init;
- (struct CGRect)bounds;
- (double)rotationAngle;
- (void)setRotationAngle:(double)arg1;
- (struct CGRect)renderedBounds;
- (void)accept:(id)arg1;

@end

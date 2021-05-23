/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPRegion.h>

__attribute__((visibility("hidden")))
@interface CPTextBox : CPRegion

{
    double rotationAngle;
}

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)bounds;
- (_Bool)isRotated;
- (double)rotationAngle;
- (void)setRotationAngle:(double)arg1;
- (void)accept:(id)arg1;
- (_Bool)isBoxRegion;

@end

/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGeometryTransform.h>

@interface NUImageTransform : NUGeometryTransform

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)inverseTransform;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (id)transformByRotateZ:(double)arg1;
- (id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (struct CGRect)transformRect:(struct CGRect)arg1;

@end

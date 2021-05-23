/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUBrushStroke.h>

@interface NUMutableBrushStroke : NUBrushStroke

@property (nonatomic) float radius;
@property (nonatomic) float softness;
@property (nonatomic) float opacity;
@property (nonatomic) long long pressureMode;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendPoint:(CDStruct_869f9c67)arg1;
- (id)points;
- (void)applyTransform:(struct CGAffineTransform)arg1;
- (id)initWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 pressureMode:(long long)arg4;
- (void)appendPoints:(CDStruct_869f9c67 *)arg1 pointCount:(long long)arg2;

@end

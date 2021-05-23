/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamZoomOutFX : TDreamProgramWrapper

{
    int aspectRatioUniform;
    int radiusUniform;
    int centerUniform;
    int scaleUniform;
    int rotacionUniform;
    int _rotacion;
    double _aspectRatio;
    double _radius;
    double _scale;
    struct CGPoint _center;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) int rotacion;
@property (nonatomic) double radius;
@property (nonatomic) double scale;

- (id)init;
- (void)setSize:(struct CGSize)arg1;
- (void)setUniforms;
- (void)adjustAspectRatio;

@end

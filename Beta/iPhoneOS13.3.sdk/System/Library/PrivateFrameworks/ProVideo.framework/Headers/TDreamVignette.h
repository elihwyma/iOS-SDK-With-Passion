/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamVignette : TDreamProgramWrapper

{
    int vignetteCenterUniform;
    int vignetteColorUniform;
    int vignetteStartUniform;
    int vignetteEndUniform;
    double _vignetteStart;
    double _vignetteEnd;
    struct TDColor3 _vignetteColor;
    struct CGPoint _vignetteCenter;
}

@property (nonatomic) struct CGPoint vignetteCenter;
@property (nonatomic) struct TDColor3 vignetteColor;
@property (nonatomic) double vignetteStart;
@property (nonatomic) double vignetteEnd;

- (id)init;
- (void)setUniforms;

@end

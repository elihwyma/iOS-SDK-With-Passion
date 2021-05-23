/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamVignetteAndQuantice : TDreamProgramWrapper

{
    int modeUniform;
    int vignetteCenterUniform;
    int vignetteColorUniform;
    int vignetteStartUniform;
    int vignetteEndUniform;
    int numLevelsUniform;
    int recipNumLevelsUniform;
    float numLevels;
    float recipNumLevels;
    int _mode;
    double _vignetteEnd;
    double _vignetteStart;
    struct TDColor3 _vignetteColor;
    struct CGPoint _vignetteCenter;
}

@property (nonatomic) int mode;
@property (nonatomic) struct CGPoint vignetteCenter;
@property (nonatomic) struct TDColor3 vignetteColor;
@property (nonatomic) double vignetteStart;
@property (nonatomic) double vignetteEnd;

- (id)init;
- (void)setUniforms;
- (void)setNumLevels:(unsigned int)arg1;

@end

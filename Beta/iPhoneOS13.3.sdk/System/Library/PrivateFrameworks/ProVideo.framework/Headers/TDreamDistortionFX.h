/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamDistortionFX : TDreamProgramWrapper

{
    int centerUniform;
    int modeUniform;
    float adjustUniform;
    int _mode;
    float _fine;
    struct CGPoint _center;
}

@property (nonatomic) int mode;
@property (nonatomic) float fine;
@property (nonatomic) struct CGPoint center;

- (id)init;
- (void)setUniforms;

@end

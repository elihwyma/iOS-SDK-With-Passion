/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamQuanticeOpt : TDreamProgramWrapper

{
    float numLevels;
    float numLevelsRecip;
    int levelsUniform;
    int recipLevelsUniform;
}

- (id)init;
- (void)setUniforms;
- (void)setNumLevels:(unsigned int)arg1;

@end

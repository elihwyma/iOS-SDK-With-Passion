/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamSobelOpt : TDreamProgramWrapper

{
    float offset[2];
    int offsetUniform;
}

- (id)init;
- (void)setOffset:(const float *)arg1;
- (void)setUniforms;

@end

/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamColoricer : TDreamProgramWrapper

{
    int firstColorUniform;
    int secondColorUniform;
    struct TDColor3 _secondColor;
    struct TDColor3 _firstColor;
}

@property (nonatomic) struct TDColor3 firstColor;
@property (nonatomic) struct TDColor3 secondColor;

- (id)init;
- (void)setUniforms;

@end

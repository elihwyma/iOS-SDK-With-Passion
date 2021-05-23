/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLTexture.h>

@interface MDLNormalMapTexture : MDLTexture

{
    float _smoothness;
    float _contrast;
    MDLTexture *_sourceTexture;
}

- (id)generateDataAtLevel:(long long)arg1;
- (id)initByGeneratingNormalMapWithTexture:(id)arg1 name:(id)arg2 smoothness:(float)arg3 contrast:(float)arg4;

@end

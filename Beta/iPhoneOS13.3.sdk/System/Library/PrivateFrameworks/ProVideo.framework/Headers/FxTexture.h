/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/FxImage.h>

@interface FxTexture : FxImage

{
    struct FxTexturePriv *_texturePriv;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setTarget:(unsigned int)arg1;
- (unsigned int)target;
- (void)setData:(void *)arg1;
- (void)disable;
- (void)enable;
- (void)draw;
- (void)bind;
- (_Bool)_verifyImage;
- (unsigned int)textureId;
- (id)initWithInfo:(CDStruct_da8610d8)arg1 textureId:(unsigned int)arg2 andTarget:(unsigned int)arg3;
- (_Bool)isInputImage;
- (void)setTextureId:(unsigned int)arg1;
- (void)setIsInputImage:(_Bool)arg1;
- (void *)createData:(unsigned int)arg1 withType:(unsigned int)arg2;
- (void)setAsActiveTexture;
- (void)getTextureCoords:(double *)arg1 right:(double *)arg2 bottom:(double *)arg3 top:(double *)arg4;

@end

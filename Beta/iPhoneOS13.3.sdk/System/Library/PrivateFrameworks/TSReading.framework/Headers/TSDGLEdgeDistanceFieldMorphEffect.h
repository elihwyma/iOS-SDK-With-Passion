/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDGLShader;

@interface TSDGLEdgeDistanceFieldMorphEffect : NSObject

{
    _Bool _didTeardown;
    struct CGSize _outgoingTextureSize;
    struct CGSize _incomingTextureSize;
    struct CGRect _outgoingTextBounds;
    struct CGRect _incomingTextBounds;
    struct CGPoint _skewAngleOffsetX;
    _Bool _didSetupSkewAngleOffsetX;
    _Bool _isTextStyleIdenticalExceptSize;
    unsigned int _outgoingTextureName;
    unsigned int _incomingTextureName;
    TSDGLShader *_shader;
}

@property (nonatomic, readonly) unsigned int outgoingTextureName;
@property (nonatomic, readonly) unsigned int incomingTextureName;
@property (nonatomic, readonly) TSDGLShader *shader;
@property (nonatomic) _Bool isTextStyleIdenticalExceptSize;

- (void)dealloc;
- (void)teardown;
- (struct CGContext *)newContextFromTexture:(id)arg1;
- (struct CGRect)p_actualPixelBoundsOfTexturedRectangle:(id)arg1;
- (id)initWithOutgoingTextureName:(unsigned int)arg1 outgoingTextureSize:(struct CGSize)arg2 outgoingTextBounds:(struct CGRect)arg3 outgoingColor:(CDStruct_f2e236b6)arg4 incomingTextureName:(unsigned int)arg5 incomingTextureSize:(struct CGSize)arg6 incomingTextBounds:(struct CGRect)arg7 incomingColor:(CDStruct_f2e236b6)arg8;
- (struct CGAffineTransform)p_affineTransformWithSkewAngleOffsetX:(struct CGPoint)arg1 textureSize:(struct CGSize)arg2;
- (void)p_fillScanlineLocations:(double *)arg1 samples:(unsigned long long)arg2 fromTexture:(unsigned int)arg3 textureSize:(struct CGSize)arg4;
- (double)p_errorFromApplyingSkewAngleOffsetX:(struct CGPoint)arg1 toOutgoingScanlines:(double *)arg2 incomingScanlines:(double *)arg3 samples:(unsigned long long)arg4;
- (struct CGAffineTransform)p_affineTransformConvertingRect:(struct CGRect)arg1 intoRect:(struct CGRect)arg2 atPercent:(double)arg3;
- (struct CGPoint)textureMatchingSkewAngleOffsetX;
- (void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(struct CATransform3D)arg2 outgoingTextureMatrix:(struct CGAffineTransform)arg3 incomingTextureMatrix:(struct CGAffineTransform)arg4;
- (id)initWithOutgoingTR:(id)arg1 incomingTR:(id)arg2;
- (void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(struct CATransform3D)arg2 generateTextureMatrices:(_Bool)arg3;

@end

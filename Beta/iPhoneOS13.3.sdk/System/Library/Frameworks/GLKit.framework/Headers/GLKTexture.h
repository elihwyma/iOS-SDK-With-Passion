/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface GLKTexture : NSObject

{
    struct CGImageBlockSet *_blockSet;
    struct __CFData *_cfData;
    int _unpackAlignment;
    _Bool _requestIssuedForAlphaPremultiplication;
    _Bool _requestIssuedToReorientToGL;
    _Bool _requestIssuedToInterpretGrayAsAlpha;
    _Bool _requestIssuedForSRGB;
    unsigned int _primarySurfaceLength;
    _Bool _requestIssuedForMipmapGeneration;
    _Bool _hasPremultipliedAlpha;
    _Bool _isPowerOfTwo;
    _Bool _isCubeMap;
    _Bool _isMipmapped;
    _Bool _isVerticalFlipped;
    _Bool _hasAlpha;
    _Bool _reOrient;
    unsigned int _GLTextureName;
    unsigned int _bindTarget;
    unsigned int _textureTarget;
    unsigned int _internalFormat;
    unsigned int _format;
    unsigned int _type;
    int _texelFormat;
    unsigned int _width;
    unsigned int _height;
    unsigned int _orientation;
    unsigned int _numMipMapLevels;
    unsigned int _bitsPerPixel;
    unsigned int _rowBytes;
    unsigned int _nComponents;
    unsigned int _nPrimarySurfaces;
    unsigned int _nSurfaces;
    int _loadMode;
    int _dataCategory;
    unsigned int _index;
    NSData *_imageData;
    NSString *_label;
}

@property (readonly) NSData *imageData;
@property (nonatomic) unsigned int GLTextureName;
@property (nonatomic) unsigned int bindTarget;
@property (nonatomic) unsigned int textureTarget;
@property (nonatomic) unsigned int internalFormat;
@property (nonatomic) unsigned int format;
@property (nonatomic) unsigned int type;
@property (nonatomic) int texelFormat;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) unsigned int numMipMapLevels;
@property (nonatomic) unsigned int bitsPerPixel;
@property (nonatomic) unsigned int rowBytes;
@property (nonatomic) unsigned int nComponents;
@property (nonatomic) unsigned int nPrimarySurfaces;
@property (nonatomic) unsigned int nSurfaces;
@property (nonatomic) int loadMode;
@property (nonatomic) int dataCategory;
@property (nonatomic) unsigned int index;
@property (readonly) _Bool requestIssuedForMipmapGeneration;
@property (readonly) _Bool hasPremultipliedAlpha;
@property (nonatomic) _Bool isPowerOfTwo;
@property (nonatomic) _Bool isCubeMap;
@property (nonatomic) _Bool isMipmapped;
@property (nonatomic) _Bool isVerticalFlipped;
@property (nonatomic) _Bool hasAlpha;
@property (nonatomic) _Bool reOrient;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (void)dealloc;
- (_Bool)uploadToGLTexture:(unsigned int)arg1 error:(id *)arg2;
- (void)updateRequestedOperationsFromOptions:(id)arg1;
- (_Bool)loadWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)loadPVRTCData:(id)arg1 error:(id *)arg2;
- (_Bool)loadCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)determinePVRFormat:(unsigned int)arg1;
- (void *)alignmentFix:(unsigned int)arg1 data:(const void *)arg2;
- (_Bool)shouldApplyReorientToGL;
- (_Bool)shouldApplyPremultiplication;
- (_Bool)determineCGImageBlockFormatWithComponentType:(int)arg1 andPixelSize:(unsigned long long)arg2 andColorModel:(int)arg3;
- (_Bool)decodeCGImageImageProvider:(struct CGImage *)arg1 CGImageProvider:(struct CGImageProvider *)arg2;
- (_Bool)decodeCGImageDataProvider:(struct CGImage *)arg1;
- (_Bool)decodeCGImage:(struct CGImage *)arg1;
- (_Bool)canHonorSRGBrequest;
- (_Bool)reorientToGL:(void *)arg1 source:(void *)arg2 withWidth:(unsigned int)arg3 withHeight:(unsigned int)arg4 withRowBytes:(unsigned int)arg5 error:(id *)arg6;
- (_Bool)premultiplyWithAlpha:(void *)arg1 source:(void *)arg2 withWidth:(unsigned int)arg3 withHeight:(unsigned int)arg4 withRowBytes:(unsigned int)arg5 error:(id *)arg6;
- (_Bool)_uploadToGLTexture:(unsigned int)arg1 data:(id)arg2 width:(int)arg3 height:(int)arg4 dataCategory:(int)arg5 cubeMapIndex:(int)arg6 mipMapIndex:(int)arg7 error:(id *)arg8;
- (id)initWithData:(id)arg1 forceCubeMap:(_Bool)arg2 wasCubeMap:(_Bool *)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id *)arg6;
- (id)initWithCGImage:(struct CGImage *)arg1 forceCubeMap:(_Bool)arg2 wasCubeMap:(_Bool *)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id *)arg6;
- (id)initWithDecodedData:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 rowBytes:(unsigned int)arg4 texture:(id)arg5 cubeMapIndex:(int)arg6 options:(id)arg7 error:(id *)arg8;

@end

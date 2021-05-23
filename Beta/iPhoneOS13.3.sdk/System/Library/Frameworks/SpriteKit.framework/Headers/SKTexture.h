/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class CIFilter, NSArray, NSString, SKTextureAtlas, SKTextureCache;

@protocol OS_dispatch_queue;

@interface SKTexture : NSObject

{
    _Bool _shouldGenerateMipmaps;
    _Bool _didGenerateMipmaps;
    _Bool _needsExtrusionWorkaround;
    _Bool _isPath;
    _Bool _isData;
    NSString *_imgName;
    NSArray *_searchPaths;
    struct CGRect _textRect;
    struct CGRect _textCoords;
    _Bool _disableAlpha;
    _Bool _isRotated;
    _Bool _isFlipped;
    struct CGPoint _cropScale;
    struct CGPoint _cropOffset;
    int _alignment;
    int _rowLength;
    CIFilter *_filter;
    SKTexture *_originalTexture;
    unsigned int _textureTarget;
    NSString *_originalAtlasName;
    NSString *_subTextureName;
    SKTextureCache *_textureCache;
    NSObject<OS_dispatch_queue> *_textureSyncQueue;
    _Bool _performFullCapture;
    _Bool _isRepeatable;
    SKTextureAtlas *_rootAtlas;
    unsigned int *_alphaMap;
    struct CGSize _alphaMapSize;
}

@property (nonatomic, readonly) struct CGSize pixelSize;
@property (nonatomic) unsigned int textureTarget;
@property (nonatomic) _Bool isRotated;
@property (nonatomic) _Bool isFlipped;
@property (nonatomic, readonly) _Bool hasAlpha;
@property (nonatomic) int wrapMode;
@property (nonatomic, readonly) NSString *imageNameOrPath;
@property _Bool performFullCapture;
@property (nonatomic, readonly) _Bool isRepeatable;
@property (nonatomic) struct CGPoint cropScale;
@property (nonatomic) struct CGPoint cropOffset;
@property (copy, nonatomic) NSString *originalAtlasName;
@property (retain, nonatomic) SKTextureAtlas *rootAtlas;
@property (copy, nonatomic) NSString *subTextureName;
@property (nonatomic, readonly) unsigned int *alphaMap;
@property (nonatomic, readonly) struct CGSize alphaMapSize;
@property (nonatomic, getter=_needsExtrusionWorkaround) _Bool needsExtrusionWorkaround;
@property (nonatomic) long long filteringMode;
@property (nonatomic) _Bool usesMipmaps;

+ (_Bool)supportsSecureCoding;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize)arg2;
+ (id)_textureWithImageNamed:(id)arg1;
+ (id)textureWithImageNamed:(id)arg1;
+ (id)textureWithRect:(struct CGRect)arg1 inTexture:(id)arg2;
+ (void)preloadTextures:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)preloadQueue;
+ (id)lookupTextureCacheForName:(id)arg1;
+ (void)registerTextureCache:(id)arg1 forName:(id)arg2;
+ (id)textureWithCGImage:(struct CGImage *)arg1 pointSize:(struct CGSize)arg2;
+ (id)textureWithData:(id)arg1 size:(struct CGSize)arg2;
+ (id)textureWithImageNamed:(id)arg1 rect:(struct CGRect)arg2;
+ (id)textureVectorNoiseWithSmoothness:(double)arg1 size:(struct CGSize)arg2;
+ (id)textureNoiseWithSmoothness:(double)arg1 size:(struct CGSize)arg2 grayscale:(_Bool)arg3;
+ (id)textureWithCGImage:(struct CGImage *)arg1;
+ (id)textureWithImage:(id)arg1;
+ (id)textureWithData:(id)arg1 size:(struct CGSize)arg2 flipped:(_Bool)arg3;
+ (id)textureWithData:(id)arg1 size:(struct CGSize)arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (void)_reloadTextureCacheForImageNamed:(id)arg1;
+ (id)_cachedTextureNames;
+ (id)compressedTextureWithData:(id)arg1;
+ (id)compressedTextureWithData:(id)arg1 size:(struct CGSize)arg2 bitsPerPixel:(unsigned int)arg3 hasAlpha:(_Bool)arg4;
+ (id)textureWithImagePath:(id)arg1;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize)arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)_textureWithGLTextureId:(unsigned int)arg1 size:(struct CGSize)arg2;
+ (id)textureWithIOSurfaceID:(unsigned int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 format:(unsigned int)arg4;
+ (id)textureWithMetalTexture:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)size;
- (id)metalTexture;
- (struct CGImage *)CGImage;
- (void)commonInit;
- (int)glTextureId;
- (struct CGRect)textureRect;
- (id)_textureCache;
- (shared_ptr_bb77cfd9)_backingTexture;
- (id)imgName;
- (struct CGImage *)_createCGImage;
- (id)textureByGeneratingNormalMapWithSmoothness:(double)arg1 contrast:(double)arg2;
- (id)_generateNormalMap:(double)arg1 contrast:(double)arg2 multiPass:(unsigned long long)arg3;
- (_Bool)loadImageDataFromPVRData:(id)arg1;
- (void)loadImageData;
- (void)initTextureCacheWithImageData;
- (void)_ensureImageData;
- (void)loadImageDataFromCGImage:(struct CGImage *)arg1 pointsSize:(struct CGSize)arg2;
- (_Bool)loadImageDataFromPVRGZData:(id)arg1;
- (id)_copyImageData;
- (id)initWithImageNamed:(id)arg1;
- (id)textureByGeneratingNormalMap;
- (void)setTextureDimension:(const struct CGSize *)arg1 withPixelSize:(const struct CGSize *)arg2;
- (void)preloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithImagePath:(id)arg1;
- (_Bool)isEqualToTexture:(id)arg1;
- (id)textureByApplyingCIFilter:(id)arg1;
- (id)initWithBackingTetxure:(shared_ptr_bb77cfd9)arg1 logicalWidth:(float)arg2 height:(float)arg3;
- (id)initWithBackingTetxure:(shared_ptr_bb77cfd9)arg1;
- (void)setIsData:(_Bool)arg1;
- (id)_initWithGLTextureId:(unsigned int)arg1 size:(struct CGSize)arg2;
- (struct CGImage *)_newTextureFromGLCache;
- (int)_convert_jet_texture_format_to_ci_format:(unsigned int)arg1;
- (void)_setImageName:(id)arg1;
- (void)_savePngFromGLCache:(id)arg1;

@end

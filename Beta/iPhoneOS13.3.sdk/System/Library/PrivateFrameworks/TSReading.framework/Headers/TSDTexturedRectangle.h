/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class CALayer, NSMutableArray, NSMutableDictionary, TSDTextureSet;

@interface TSDTexturedRectangle : NSObject <Swift>

{
    struct CGPoint mOffset;
    struct CGPoint mOriginalPosition;
    struct CGSize mSize;
    struct CGRect mContentRect;
    struct CGRect mOriginalFrame;
    CALayer *mLayer;
    CDUnknownBlockType mRenderBlock;
    struct CGImage *mSourceImage;
    struct CGImage *mBakedImage;
    TSDTextureSet *mParent;
    int mTextureType;
    double mTextureOpacity;
    unsigned int mSingleTextureName;
    _Bool mSingleTextureContainsMipmaps;
    _Bool mIsFlattened;
    NSMutableDictionary *mAttributes;
    NSMutableArray *mTags;
    struct CGColorSpace *mColorSpace;
    struct CGRect mFrameOnCanvas;
}

@property (nonatomic, readonly) unsigned int singleTextureName;
@property (nonatomic, readonly) unsigned int singleTextureTarget;
@property (nonatomic) struct CGPoint originalPosition;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic) struct CGRect contentRect;
@property (nonatomic) TSDTextureSet *parent;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) struct CGImage *image;
@property (nonatomic, readonly) float opacityFromAttributes;
@property (nonatomic, readonly) struct CATransform3D transformFromAttributes;
@property (retain, nonatomic) NSMutableDictionary *attributes;
@property (retain, nonatomic) NSMutableArray *tags;
@property (nonatomic) int textureType;
@property (nonatomic) double textureOpacity;
@property (nonatomic, readonly) double singleTextureOpacity;
@property (nonatomic) _Bool isFlattened;
@property (nonatomic) struct CGColorSpace *colorSpace;
@property (nonatomic, readonly) _Bool isRenderable;
@property (nonatomic, readonly) _Bool isBackgroundTexture;
@property (nonatomic, readonly) CALayer *parentLayer;
@property (nonatomic) struct CGRect frameOnCanvas;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (void)teardown;
- (id)initWithLayer:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 offset:(struct CGPoint)arg2 renderBlock:(CDUnknownBlockType)arg3;
- (void)releaseSingleTexture;
- (struct CGColorSpace *)p_colorSpace;
- (struct CGImage *)p_newImageAndBufferWithAngle:(double)arg1 scale:(double)arg2 offset:(struct CGPoint)arg3;
- (void)resetToSourceImage;
- (void)setupSingleTextureAndGenerateMipMaps:(_Bool)arg1;
- (void)setupSingleTexture;
- (struct CGRect)boundingRectForStage:(long long)arg1 isBuildIn:(_Bool)arg2;
- (void)adjustAnchorRelativeToParentsCenterOfRotation:(struct CGPoint)arg1 isMagicMove:(_Bool)arg2;
- (void)resetAnchorPoint;
- (void)renderLayerContentsIfNeeded;
- (void)bakeLayerWithAngle:(double)arg1 scale:(double)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1;
- (char *)p_setupTextureDataWithSize:(struct CGSize)arg1 isBGRA:(_Bool)arg2;

@end

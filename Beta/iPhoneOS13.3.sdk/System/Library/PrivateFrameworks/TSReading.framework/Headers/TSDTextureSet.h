/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class CALayer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, TSDRep, TSUNoCopyDictionary;

@interface TSDTextureSet : NSObject <Swift>

{
    struct CGPoint mCenter;
    struct CGRect mBounds;
    struct CGPoint mOriginalPosition;
    _Bool mIsBaked;
    _Bool mShouldIncludeFinalTexturesInVisibleSet;
    _Bool mShouldTransformUsingTextureCenter;
    unsigned long long mChunkCount;
    NSMutableArray *mTextures;
    NSMutableArray *mAllTextures;
    TSUNoCopyDictionary *mStageIndexForTexture;
    NSMutableDictionary *mFinalTextureForStage;
    NSMutableDictionary *mBoundingRectForStage;
    NSMutableDictionary *mContentRectForStage;
    NSMutableDictionary *mReverseFinalTextureForStage;
    TSUNoCopyDictionary *mFinalTexturesToStageMap;
    TSUNoCopyDictionary *mReverseFinalTexturesToStageMap;
    NSDictionary *mBakedAttributes;
    struct _NSRange mActiveChunkIndices;
    CALayer *mLayer;
    _Bool mIsMagicMove;
    double mTextureOpacity;
    struct CGRect mTextureContentRect;
    double mTextureAngle;
    long long mTextureZOrder;
    _Bool mIsBackground;
    CALayer *mAlternateLayer;
    TSDRep *mRep;
    struct CGColorSpace *mColorSpace;
    long long mMaxStageIndex;
    long long _stageIndex;
}

@property (nonatomic, readonly) long long maxStageIndex;
@property (nonatomic, readonly) long long stageIndex;
@property (nonatomic, readonly) unsigned long long chunkCount;
@property (nonatomic, readonly) NSArray *visibleTextures;
@property (nonatomic, readonly) NSArray *allTextures;
@property (nonatomic) struct CGPoint center;
@property (nonatomic, readonly) struct CGRect boundingRect;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) CALayer *layer;
@property (retain, nonatomic) CALayer *alternateLayer;
@property (nonatomic) _Bool isMagicMove;
@property (nonatomic) struct CGRect textureContentRect;
@property (nonatomic) double textureAngle;
@property (nonatomic) long long textureZOrder;
@property (nonatomic) double textureOpacity;
@property (nonatomic) _Bool isBackground;
@property (nonatomic) _Bool isBaked;
@property (nonatomic) _Bool shouldIncludeFinalTexturesInVisibleSet;
@property (nonatomic) _Bool shouldTransformUsingTextureCenter;
@property TSDRep *rep;
@property (retain, nonatomic) NSDictionary *boundingRectForStage;
@property (retain, nonatomic) NSDictionary *contentRectForStage;
@property (nonatomic) struct CGPoint originalPosition;
@property (nonatomic) struct CGColorSpace *colorSpace;
@property (nonatomic, readonly) _Bool isRenderable;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)teardown;
- (void)addRenderable:(id)arg1;
- (_Bool)isBackgroundTexture:(id)arg1;
- (struct CGRect)boundingRectForStage:(long long)arg1 isBuildIn:(_Bool)arg2;
- (void)resetAnchorPoint;
- (void)renderLayerContentsIfNeeded;
- (void)renderIntoContext:(struct CGContext *)arg1;
- (long long)stageIndexForTexture:(id)arg1;
- (void)addRenderable:(id)arg1 forStage:(long long)arg2;
- (void)addFinalTexture:(id)arg1 forStage:(long long)arg2 reverse:(_Bool)arg3;
- (id)newFlattenedTextureFromTextures:(id)arg1 newRect:(struct CGRect)arg2;
- (void)p_applyPositionFromAttributes:(id)arg1 viewScale:(double)arg2;
- (void)p_resetAttributesWithViewScale:(double)arg1;
- (void)setBoundingRect:(struct CGRect)arg1 forStage:(long long)arg2;
- (struct CGRect)contentRectForStage:(long long)arg1 isBuildIn:(_Bool)arg2;
- (id)visibleTexturesForStage:(long long)arg1 isBuildIn:(_Bool)arg2 shouldFlatten:(_Bool)arg3;
- (void)removeRenderable:(id)arg1;
- (id)firstVisibleTextureForTextureType:(int)arg1;
- (id)newFlattenedTexture;
- (id)finalTextureForStage:(long long)arg1 reverse:(_Bool)arg2;
- (void)hideLayersOfFinalTextures;
- (void)setLayerGeometryFromRep:(id)arg1;
- (void)adjustAnchorPointRelativeToCenterOfRotation;
- (void)applyActionEffect:(id)arg1 viewScale:(double)arg2 isMagicMove:(_Bool)arg3 shouldBake:(_Bool)arg4 applyScaleOnly:(_Bool)arg5 ignoreScale:(_Bool)arg6 shouldCheckActionKeys:(_Bool)arg7;
- (void)setBoundingRect:(struct CGRect)arg1;
- (void)setContentRect:(struct CGRect)arg1 forStage:(long long)arg2;
- (void)addPerspectiveLayerToTexture:(id)arg1 withShowSize:(struct CGSize)arg2;

@end

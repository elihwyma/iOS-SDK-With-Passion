/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, TSDGLDataBuffer, TSDGLDataBufferAttribute, TSDGLShader;

@interface TSDGLParticleSystem : NSObject

{
    _Bool *_visibilities;
    _Bool _isInitialized;
    _Bool _isDataBufferInitialized;
    unsigned long long _textureCount;
    _Bool _hasParticleTexture;
    _Bool _shouldDraw;
    unsigned long long _particleCount;
    unsigned long long _visibleParticleCount;
    unsigned long long _particlesWide;
    unsigned long long _particlesHigh;
    double _duration;
    unsigned long long _direction;
    TSDGLDataBufferAttribute *_positionAttribute;
    TSDGLDataBufferAttribute *_centerAttribute;
    TSDGLDataBufferAttribute *_texCoordAttribute;
    TSDGLDataBufferAttribute *_particleTexCoordAttribute;
    TSDGLDataBufferAttribute *_colorAttribute;
    TSDGLDataBufferAttribute *_lifeSpanAttribute;
    TSDGLDataBufferAttribute *_speedAttribute;
    TSDGLDataBufferAttribute *_rotationAttribute;
    TSDGLDataBufferAttribute *_scaleAttribute;
    TSDGLDataBuffer *_dataBuffer;
    TSDGLShader *_shader;
    struct CGSize _particleSize;
    struct CGSize _objectSize;
    struct CGSize _slideSize;
}

@property (nonatomic, readonly) unsigned long long particleCount;
@property (nonatomic, readonly) unsigned long long visibleParticleCount;
@property (nonatomic, readonly) unsigned long long particlesWide;
@property (nonatomic, readonly) unsigned long long particlesHigh;
@property (nonatomic, readonly) struct CGSize particleSize;
@property (nonatomic, readonly) struct CGSize objectSize;
@property (nonatomic, readonly) struct CGSize slideSize;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly) NSArray *dataBufferAttributes;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *positionAttribute;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *centerAttribute;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *texCoordAttribute;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *particleTexCoordAttribute;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *colorAttribute;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *lifeSpanAttribute;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *speedAttribute;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *rotationAttribute;
@property (nonatomic, readonly) TSDGLDataBufferAttribute *scaleAttribute;
@property (nonatomic, readonly) TSDGLDataBuffer *dataBuffer;
@property (nonatomic, readonly) TSDGLShader *shader;
@property (nonatomic, readonly) _Bool shouldDraw;

+ (unsigned long long)numberOfVerticesPerParticle;
+ (_Bool)useGLSL;
+ (_Bool)shouldDrawInvisibleParticles;
+ (_Bool)willOverrideColors;
+ (id)newDataBufferAttributeWithName:(id)arg1;
+ (_Bool)willOverrideGeometry;
+ (_Bool)willOverrideStartingPoints;
+ (_Bool)willOverrideVisibilities;

- (void)dealloc;
- (id)description;
- (void)setupGLSL;
- (void)p_setupDataBufferWithParticleCount:(unsigned long long)arg1 visibleParticleCount:(unsigned long long)arg2;
- (struct CGSize)p_particleSystemSizeWithRequestedNumber:(unsigned long long)arg1 objectSize:(struct CGSize)arg2;
- (id)initWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 shader:(id)arg7;
- (void)p_setupParticleDataWithTexture:(id)arg1;
- (void)p_reverseParticleDataDrawOrder;
- (void)p_setupVertexData;
- (double)speedMax;
- (double)rotationMax;
- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize)arg2 reverseDrawOrder:(_Bool)arg3;
- (id)initWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize)arg2 slideSize:(struct CGSize)arg3 duration:(double)arg4 direction:(unsigned long long)arg5 shader:(id)arg6;
- (unsigned long long)indexFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)indexPointFromIndex:(unsigned long long)arg1;
- (struct CGContext *)newContextFromTexture:(id)arg1;
- (CDStruct_6e3f967a)vertexPositionAtVertexIndex:(unsigned long long)arg1 particleIndexPoint:(struct CGPoint)arg2;
- (CDStruct_6e3f967a)centerAtIndexPoint:(struct CGPoint)arg1;
- (struct CGPoint)startingPointAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_03942939)speedAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_03942939)rotationAtIndexPoint:(struct CGPoint)arg1;
- (double)scaleAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_6e3f967a)lifeSpanAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_f2e236b6)colorAtIndexPoint:(struct CGPoint)arg1;
- (_Bool)visibilityAtIndexPoint:(struct CGPoint)arg1;
- (void)drawGLSLWithPercent:(double)arg1 opacity:(double)arg2;
- (void)p_setDataBufferAttribute:(id *)arg1 withName:(id)arg2 defaultDataType:(long long)arg3 normalized:(_Bool)arg4 componentCount:(unsigned long long)arg5;
- (void)p_logParticleInformation;

@end

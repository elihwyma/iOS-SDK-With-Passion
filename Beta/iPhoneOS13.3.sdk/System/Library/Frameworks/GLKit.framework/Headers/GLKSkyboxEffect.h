/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class GLKEffect, GLKEffectPropertyTexture, GLKEffectPropertyTransform, NSMutableArray, NSString;

@interface GLKSkyboxEffect : NSObject

{
    union _GLKVector3 _center;
    float _xSize;
    float _ySize;
    float _zSize;
    GLKEffectPropertyTexture *_textureCubeMap;
    GLKEffectPropertyTransform *_transform;
    NSString *_label;
    unsigned char _effectStale;
    unsigned char _centerChanged;
    unsigned int _vao;
    unsigned int _positionVBO;
    unsigned int _texCoordVBO;
    unsigned int _programName;
    NSMutableArray *_propertyArray;
    GLKEffect *_effect;
}

@property (nonatomic, readonly) NSMutableArray *propertyArray;
@property (nonatomic) unsigned char effectStale;
@property (nonatomic) unsigned char centerChanged;
@property (nonatomic) GLKEffect *effect;
@property (nonatomic) unsigned int programName;
@property (nonatomic) unsigned int vao;
@property (nonatomic) unsigned int positionVBO;
@property (nonatomic) unsigned int texCoordVBO;
@property (nonatomic) union _GLKVector3 center;
@property (nonatomic) float xSize;
@property (nonatomic) float ySize;
@property (nonatomic) float zSize;
@property (nonatomic, readonly) GLKEffectPropertyTexture *textureCubeMap;
@property (nonatomic, readonly) GLKEffectPropertyTransform *transform;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)prepareToDraw;
- (void)draw;
- (void)createAndBindVAOWithPositions:(float *)arg1 texCoords:(float *)arg2;
- (void)updateSkyboxEffect;

@end

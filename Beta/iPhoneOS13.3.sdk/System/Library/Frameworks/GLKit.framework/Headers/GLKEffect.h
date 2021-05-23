/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class GLKShaderBlockNode, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface GLKEffect : NSObject

{
    NSMutableArray *_properties;
    unsigned char _colorMaterialEnabled;
    unsigned char _lightModelTwoSided;
    union _GLKVector4 _lightModelAmbientColor;
    unsigned char _texturingEnabled;
    NSArray *_textureOrder;
    NSString *_label;
    unsigned char _perVertexLightingEnabled;
    unsigned char _perPixelLightingEnabled;
    unsigned char _masksInitialized;
    _Bool _textureOrderStale;
    unsigned int _numLights;
    unsigned int _numTextures;
    int _aColorLoc;
    unsigned int _vshName;
    unsigned int _fshName;
    unsigned int _programName;
    unsigned int _numVshStrings;
    unsigned int _numFshStrings;
    int _lightModelAmbientColorLoc;
    int _baseLightingColorLoc;
    NSMutableDictionary *_programHash;
    float *_materialAmbientColor;
    float *_materialDiffuseColor;
    id *_effectShaderArray;
    NSMutableArray *_lightProperties;
    GLKShaderBlockNode *_vshRootNode;
    GLKShaderBlockNode *_fshRootNode;
    char **_vshStrings;
    char **_fshStrings;
    unsigned long long _dirtyUniforms;
    struct GLKBigInt_s *_fshMask;
    struct GLKBigInt_s *_vshMask;
    union _GLKVector4 _baseLightingColor;
    struct GLKBigInt_s _prevFshMask;
    struct GLKBigInt_s _prevVshMask;
}

@property (nonatomic) unsigned int vshName;
@property (nonatomic) unsigned int fshName;
@property (nonatomic) unsigned int numLights;
@property (nonatomic) unsigned int numTextures;
@property (nonatomic) unsigned int programName;
@property (nonatomic, readonly) GLKShaderBlockNode *vshRootNode;
@property (nonatomic, readonly) GLKShaderBlockNode *fshRootNode;
@property (nonatomic) char **vshStrings;
@property (nonatomic) char **fshStrings;
@property (nonatomic) unsigned int numVshStrings;
@property (nonatomic) unsigned int numFshStrings;
@property (nonatomic) id *effectShaderArray;
@property (retain, nonatomic) NSMutableArray *lightProperties;
@property (nonatomic) unsigned char masksInitialized;
@property (nonatomic, readonly) NSMutableDictionary *programHash;
@property (nonatomic) int lightModelAmbientColorLoc;
@property (nonatomic) int baseLightingColorLoc;
@property (nonatomic) int aColorLoc;
@property (nonatomic) union _GLKVector4 baseLightingColor;
@property (nonatomic, readonly) float *materialAmbientColor;
@property (nonatomic, readonly) float *materialDiffuseColor;
@property (nonatomic) struct GLKBigInt_s *vshMask;
@property (nonatomic) struct GLKBigInt_s *fshMask;
@property (nonatomic) struct GLKBigInt_s prevVshMask;
@property (nonatomic) struct GLKBigInt_s prevFshMask;
@property (nonatomic) unsigned long long dirtyUniforms;
@property (nonatomic) _Bool textureOrderStale;
@property (retain, nonatomic) NSMutableArray *properties;
@property (nonatomic) unsigned char colorMaterialEnabled;
@property (nonatomic) unsigned char lightModelTwoSided;
@property (nonatomic) union _GLKVector4 lightModelAmbientColor;
@property (nonatomic) unsigned char texturingEnabled;
@property (nonatomic) unsigned char perVertexLightingEnabled;
@property (nonatomic) unsigned char perPixelLightingEnabled;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *textureOrder;

+ (void)initialize;
+ (void)initializeStaticMasks;
+ (_Bool)parseXMLFile:(id)arg1 rootNode:(id)arg2;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
+ (void)unrollLoopNodesForStaticTreeWithRoot:(id)arg1;
+ (id)programInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;
+ (id)shaderInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithPropertyArray:(id)arg1;
- (void)bind;
- (void)dirtyAllUniforms;
- (void)addTransformProperty;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
- (void)updateVshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s)arg2;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (void)updateFshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s)arg2;
- (void)initializeMasks;
- (void)setShaderBindings;
- (_Bool)useTexCoordAttrib;
- (_Bool)useColorAttrib;
- (void)setTextureIndices;
- (void)createAndUseProgramWithShadingHash:(id)arg1;
- (_Bool)includeShaderTextForRootNode:(id)arg1;
- (struct GLKBigInt_s *)vshMasks;
- (struct GLKBigInt_s *)fshMasks;
- (unsigned int)vshMaskCt;
- (unsigned int)fshMaskCt;
- (char **)vshMaskStr;
- (char **)fshMaskStr;

@end

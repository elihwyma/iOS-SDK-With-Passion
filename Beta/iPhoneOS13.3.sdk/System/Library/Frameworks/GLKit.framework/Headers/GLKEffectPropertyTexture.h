/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <GLKit/GLKEffectProperty.h>

@class GLKEffectPropertyTexGen, NSMutableArray, NSString;

@interface GLKEffectPropertyTexture : GLKEffectProperty

{
    unsigned char _enabled;
    unsigned int _name;
    unsigned int _target;
    int _envMode;
    unsigned char _matrixEnabled;
    int _textureIndex;
    int _unit2dLoc;
    int _unitCubeLoc;
    NSString *_filePath;
    char *_unit2dNameString;
    char *_unitCubeNameString;
    NSMutableArray *_texGenArray;
    GLKEffectPropertyTexGen *_texGenS;
    GLKEffectPropertyTexGen *_texGenT;
    GLKEffectPropertyTexGen *_texGenR;
    struct GLKBigInt_s _allFshMasks;
}

@property (nonatomic, readonly) GLKEffectPropertyTexGen *texGenS;
@property (nonatomic, readonly) GLKEffectPropertyTexGen *texGenT;
@property (nonatomic, readonly) GLKEffectPropertyTexGen *texGenR;
@property (nonatomic, readonly) NSMutableArray *texGenArray;
@property (nonatomic) int textureIndex;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic) unsigned char matrixEnabled;
@property (nonatomic) int unit2dLoc;
@property (nonatomic) int unitCubeLoc;
@property (nonatomic) char *unit2dNameString;
@property (nonatomic) char *unitCubeNameString;
@property (nonatomic, readonly) unsigned char normalizedNormalsMask;
@property (nonatomic, readonly) unsigned char vPositionEyeMask;
@property (nonatomic, readonly) unsigned char vNormalEyeMask;
@property (nonatomic, readonly) unsigned char useTexCoordAttribMask;
@property (nonatomic, readonly) struct GLKBigInt_s allFshMasks;
@property (nonatomic) unsigned char enabled;
@property (nonatomic) unsigned int name;
@property (nonatomic) unsigned int target;
@property (nonatomic) int envMode;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
+ (void)clearAllTexturingMasks:(struct GLKBigInt_s *)arg1 fshMask:(struct GLKBigInt_s *)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)bind;
- (void)dirtyAllUniforms;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (void)initializeMasks;
- (void)setShaderBindings;

@end

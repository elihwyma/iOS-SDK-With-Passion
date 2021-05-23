/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyFog : GLKEffectProperty

{
    unsigned char _enabled;
    int _mode;
    union _GLKVector4 _color;
    float _density;
    float _start;
    float _end;
    int _modeLoc;
    int _colorLoc;
    int _densityLoc;
    int _startLoc;
    int _endLoc;
}

@property (nonatomic) int modeLoc;
@property (nonatomic) int colorLoc;
@property (nonatomic) int densityLoc;
@property (nonatomic) int startLoc;
@property (nonatomic) int endLoc;
@property (nonatomic) unsigned char enabled;
@property (nonatomic) int mode;
@property (nonatomic) union _GLKVector4 color;
@property (nonatomic) float density;
@property (nonatomic) float start;
@property (nonatomic) float end;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

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

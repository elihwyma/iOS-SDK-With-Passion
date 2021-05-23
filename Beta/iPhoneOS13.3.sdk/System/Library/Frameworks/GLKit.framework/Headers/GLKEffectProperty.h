/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class GLKEffect;

@interface GLKEffectProperty : NSObject

{
    int _location;
    char *_nameString;
    struct GLKEffectPropertyPrv *_prv;
    unsigned char _masksInitialized;
    char *_vshSource;
    char *_fshSource;
    unsigned long long _dirtyUniforms;
    GLKEffect *_effect;
}

@property (nonatomic) int location;
@property (nonatomic) char *nameString;
@property (nonatomic) char *vshSource;
@property (nonatomic) char *fshSource;
@property (nonatomic) unsigned long long dirtyUniforms;
@property (nonatomic) unsigned char masksInitialized;
@property (nonatomic) GLKEffect *effect;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
+ (void)logSetMasksWithLabel:(id)arg1 obj:(id)arg2 typeStr:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)bind;
- (void)dirtyAllUniforms;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (void)initializeMasks;
- (void)setShaderBindings;
- (struct GLKBigInt_s *)fshMask;
- (struct GLKBigInt_s *)vshMask;
- (void)setVSHSource:(char *)arg1;
- (void)setFSHSource:(char *)arg1;
- (void)setMasks;

@end

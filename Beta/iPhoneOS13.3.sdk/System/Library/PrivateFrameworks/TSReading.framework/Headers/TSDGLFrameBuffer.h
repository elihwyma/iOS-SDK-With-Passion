/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TSDGLFrameBuffer : NSObject

{
    NSArray *_textureConfigs;
    NSDictionary *_namesToTextureDict;
    unsigned int *_textures[16];
    unsigned long long _textureCount[16];
    unsigned long long _currentTextureIndex[16];
    unsigned long long _desiredTextureIndex[16];
    unsigned int _framebuffer;
    _Bool _isUsingNonDefaultAttachments;
    _Bool _isBound;
    _Bool _shouldDeleteTexturesOnTeardown;
    NSString *_name;
    struct CGSize _size;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) _Bool isBound;
@property (nonatomic) _Bool shouldDeleteTexturesOnTeardown;
@property (copy, nonatomic) NSString *name;

+ (int)currentGLFramebuffer;
+ (void)setCurrentGLFramebuffer:(int)arg1;

- (void)dealloc;
- (id)description;
- (void)teardown;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 textureConfigs:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1 textureCount:(unsigned long long)arg2;
- (void)setupFramebufferIfNecessary;
- (void)setCurrentTextureIndex:(unsigned long long)arg1 atAttachment:(unsigned int)arg2;
- (void)setCurrentTextureIndex:(unsigned long long)arg1;
- (void)setCurrentTextureToNextAtAttachment:(unsigned int)arg1;
- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1 attachment:(unsigned int)arg2;
- (unsigned int)currentGLTextureAtAttachment:(unsigned int)arg1;
- (void)bindFramebuffer;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)setCurrentTextureNamed:(id)arg1;
- (void)setCurrentTextureToNext;
- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1;
- (unsigned int)GLTextureNamed:(id)arg1;
- (unsigned int)currentGLTexture;

@end

/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKTextureCache : NSObject

{
    long long filteringMode;
    struct CGSize size;
    struct CGSize pixelSize;
    _Bool hasAlpha;
    _Bool isPOT;
    char *pixelData;
    int state;
    struct _opaque_pthread_mutex_t lock;
    shared_ptr_bb77cfd9 _backingTexture;
    unsigned int _textureFormat;
    int wrapMode;
}

@property (nonatomic) unsigned int textureFormat;
@property (nonatomic) shared_ptr_bb77cfd9 backingTexture;
@property (nonatomic) long long filteringMode;
@property (nonatomic) int wrapMode;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CGSize pixelSize;
@property (nonatomic) _Bool hasAlpha;
@property (nonatomic) _Bool isPOT;
@property (nonatomic) char *pixelData;
@property (nonatomic) int state;
@property (nonatomic, readonly, getter=getLock) struct _opaque_pthread_mutex_t *lock;

- (id)init;
- (void)dealloc;
- (void)_reset;
- (id).cxx_construct;

@end

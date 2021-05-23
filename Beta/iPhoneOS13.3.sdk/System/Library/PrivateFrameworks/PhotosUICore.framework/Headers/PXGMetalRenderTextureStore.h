/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXGMetalRenderTextureStore : NSObject

{
    CDStruct_dcc83465 *_textures;
    long long _count;
    long long _capacity;
    _Bool _sorted;
}

- (id)init;
- (void)dealloc;
- (void)addTexture:(CDStruct_dcc83465)arg1;
- (void)drawWithOrder:(unsigned long long)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)removeAllTextures;
- (void)_sortIfNeeded;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol MTLBuffer, MTLDevice;

@interface PXGMetalRenderPassState : NSObject

{
    unsigned int *_spriteIndexes;
    CDStruct_183601bc *_textureInfos;
    id <MTLBuffer> _spriteIndexesMetalBuffer;
    id <MTLBuffer> _spriteTextureInfosMetalBuffer;
    id <MTLDevice> _device;
    long long _capacity;
}

@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) long long capacity;
@property (nonatomic, readonly) unsigned int *spriteIndexes;
@property (nonatomic, readonly) CDStruct_183601bc *textureInfos;
@property (nonatomic, readonly) id <MTLBuffer> spriteIndexesMetalBuffer;
@property (nonatomic, readonly) id <MTLBuffer> spriteTextureInfosMetalBuffer;

- (id)description;
- (id)initWithDevice:(id)arg1 capacity:(long long)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NUAbstractBufferStorage.h>

@class NSString, NUGLTexture, NUIOSurface, NUPixelFormat, NURegion;

@interface NUIOSurfaceStorage : _NUAbstractBufferStorage

{
    long long _purgeLevel;
    _Bool _purgeable;
    NUIOSurface *_surface;
    NUGLTexture *_texture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (readonly) long long sizeInBytes;
@property (readonly) NURegion *validRegion;

- (long long)rowBytes;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)initWithSurface:(id)arg1;
- (id)_texture;
- (_Bool)isPurgeable;
- (_Bool)isPurged;
- (_Bool)makeNonPurgeable;
- (void)makePurgeable;
- (long long)purgeLevel;
- (void)adjustPurgeLevel:(long long)arg1;
- (long long)copyFromStorage:(id)arg1 region:(id)arg2;
- (long long)readBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)writeBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(CDUnknownBlockType)arg3;
- (long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_allocateSurface;
- (long long)readSurfaceInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)writeSurfaceInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)readTextureInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)writeTextureInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

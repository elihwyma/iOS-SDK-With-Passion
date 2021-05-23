/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface EspressoANEIOSurface : NSObject

{
    struct vector<Espresso::ANERuntimeEngine::surface_and_buffer, std::__1::allocator<Espresso::ANERuntimeEngine::surface_and_buffer>> multiple_buffer_io_surfaces;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _rowBytes;
    NSDictionary *_defaultsParamsDict;
    shared_ptr_ed2847d1 _external_storage_blob_for_aliasing_mem;
}

@property (nonatomic) shared_ptr_ed2847d1 external_storage_blob_for_aliasing_mem;
@property (retain, nonatomic) NSDictionary *defaultsParamsDict;
@property (nonatomic, readonly) unsigned long long width;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long rowBytes;

+ (id)objectWithIOSurface:(struct __IOSurface *)arg1 defaultsParamsDict:(id)arg2;

- (id).cxx_construct;
- (void)cleanup;
- (struct __IOSurface *)ioSurfaceForMultiBufferFrame:(unsigned long long)arg1;
- (id)ane_io_surfaceForMultiBufferFrame:(unsigned long long)arg1;
- (void)resizeForMultipleAsyncBuffers:(unsigned long long)arg1;
- (void)lazilyAutoCreateSurfaceForFrame:(unsigned long long)arg1;
- (struct __IOSurface *)ioSurfaceForMultiBufferFrameNoLazyForTesting:(unsigned long long)arg1;
- (void)setExternalStorage:(unsigned long long)arg1 ioSurface:(struct __IOSurface *)arg2;
- (void)restoreInternalStorage:(unsigned long long)arg1;
- (void)restoreInternalStorageForAllMultiBufferFrames;
- (id)metalBufferWithDevice:(id)arg1 multiBufferFrame:(unsigned long long)arg2;
- (unsigned long long)nFrames;

@end

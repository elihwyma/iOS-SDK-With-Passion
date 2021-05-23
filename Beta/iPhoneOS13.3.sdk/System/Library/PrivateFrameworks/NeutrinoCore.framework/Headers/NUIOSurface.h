/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class IOSurface, NSString, NUPixelFormat;

@interface NUIOSurface : NSObject

{
    NUPixelFormat *_format;
    NUPixelFormat *_internalFormat;
    struct __IOSurface *_IOSurfaceRef;
    CDStruct_d58201db _size;
}

@property (nonatomic, readonly) NUPixelFormat *internalFormat;
@property (nonatomic, readonly) struct __IOSurface *IOSurfaceRef;
@property (nonatomic, readonly) IOSurface *IOSurface;
@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) long long sizeInBytes;
@property (copy, nonatomic) NSString *name;

+ (id)_internalFormatForPixelFormat:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithIOSurface:(struct __IOSurface *)arg1;
- (_Bool)write:(CDUnknownBlockType)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (_Bool)isPurged;
- (_Bool)makeNonPurgeable;
- (_Bool)read:(CDUnknownBlockType)arg1;
- (id)newRenderDestination;
- (int)_fetchPurgeState:(unsigned int *)arg1;
- (id)_purgeStateDescription;
- (unsigned int)_purgeLevelToOSValue:(long long)arg1;
- (void)_allocateSurface;
- (void)makePurgeable:(long long)arg1;

@end

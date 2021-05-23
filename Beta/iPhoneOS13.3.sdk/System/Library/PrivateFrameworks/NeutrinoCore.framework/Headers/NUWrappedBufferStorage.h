/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NUAbstractBufferStorage.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString, NUPixelFormat;

@interface NUWrappedBufferStorage : _NUAbstractBufferStorage <Swift>

{
    long long _length;
    long long _rowBytes;
    void *_bytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) const void *bytes;
@property (nonatomic, readonly) void *mutableBytes;

- (long long)sizeInBytes;
- (long long)readBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)writeBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)newRenderDestination;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 bytes:(void *)arg3 rowBytes:(long long)arg4 length:(long long)arg5;

@end

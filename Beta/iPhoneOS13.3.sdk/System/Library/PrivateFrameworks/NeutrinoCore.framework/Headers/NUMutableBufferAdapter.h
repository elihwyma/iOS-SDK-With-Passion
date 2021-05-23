/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUBufferAdapter.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString, NUPixelFormat;

@interface NUMutableBufferAdapter : NUBufferAdapter <Swift>

{
    void *_mutableBytes;
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

- (void)provideMutableBuffer:(CDUnknownBlockType)arg1;
- (void *)mutableBytesAtPoint:(CDStruct_912cb5d2)arg1;
- (id)newRenderDestination;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void *)arg4;
- (id)initWithMutableBuffer:(id)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 rowBytes:(long long)arg3 mutableBytes:(void *)arg4;

@end

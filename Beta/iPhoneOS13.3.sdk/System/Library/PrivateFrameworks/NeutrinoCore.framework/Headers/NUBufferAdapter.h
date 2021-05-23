/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString, NUPixelFormat;

@interface NUBufferAdapter : NSObject <Swift>

{
    CDStruct_d58201db _size;
    NUPixelFormat *_format;
    long long _rowBytes;
    const void *_bytes;
    _Bool _valid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) const void *bytes;

- (id)init;
- (void)invalidate;
- (id)initWithBuffer:(id)arg1;
- (void)provideBuffer:(CDUnknownBlockType)arg1;
- (const void *)bytesAtPoint:(CDStruct_912cb5d2)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void *)arg4;

@end

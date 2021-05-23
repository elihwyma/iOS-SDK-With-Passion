/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUBufferImageAdapter.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString, NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;

@protocol NUMutableBufferProvider;

@interface NUMutableBufferImageAdapter : NUBufferImageAdapter <Swift>

{
    id <NUMutableBufferProvider> _mutableBufferProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NUImageLayout *layout;
@property (readonly) NUPixelFormat *format;
@property (readonly) NUColorSpace *colorSpace;
@property (readonly) CDStruct_912cb5d2 size;
@property (copy, readonly) NURegion *validRegion;

- (void)writeBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;
- (_Bool)copySurfaceStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3 device:(id)arg4;
- (_Bool)copyBufferStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3;
- (id)initWithMutableBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;
- (id)initWithMutableBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;

@end

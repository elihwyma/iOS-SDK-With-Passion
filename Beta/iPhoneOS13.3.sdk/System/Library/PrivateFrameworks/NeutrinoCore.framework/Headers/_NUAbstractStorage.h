/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString, NUMutableRegion, NUPixelFormat, NURegion;

@interface _NUAbstractStorage : NSObject <Swift>

{
    NUMutableRegion *_validRegion;
    long long _sizeInBytes;
    NUPixelFormat *_format;
    CDStruct_d58201db _size;
}

@property CDStruct_912cb5d2 size;
@property long long sizeInBytes;
@property (retain) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NURegion *validRegion;

- (id)init;
- (void)invalidate;
- (void)validateRect:(CDStruct_996ac03c)arg1;
- (void)validateRegion:(id)arg1;
- (_Bool)isValidInRect:(CDStruct_996ac03c)arg1;
- (_Bool)isValidInRegion:(id)arg1;
- (void)assertIsValidInRect:(CDStruct_996ac03c)arg1;
- (void)assertIsValidInRegion:(id)arg1;
- (long long)copyFromStorage:(id)arg1 region:(id)arg2;
- (long long)readBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)writeBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)fillBufferWithPattern4:(unsigned int)arg1;
- (long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(CDUnknownBlockType)arg3;
- (long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)provideMutableBuffer:(CDUnknownBlockType)arg1;
- (void)provideBuffer:(CDUnknownBlockType)arg1;
- (void)_resetSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;

@end

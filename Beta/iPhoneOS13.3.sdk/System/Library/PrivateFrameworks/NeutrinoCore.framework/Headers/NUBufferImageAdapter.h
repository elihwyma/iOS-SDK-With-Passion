/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString, NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;

@protocol NUBufferProvider;

@interface NUBufferImageAdapter : NSObject <Swift>

{
    NUImageLayout *_layout;
    id <NUBufferProvider> _bufferProvider;
    NURegion *_validRegion;
    NUColorSpace *_colorSpace;
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

- (id)init;
- (id)debugQuickLookObject;
- (void)readBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)immutableImageCopy;
- (id)mutableImageCopy;
- (id)purgeableImageCopy;
- (id)mutablePurgeableImageCopy;
- (id)initWithBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;
- (id)initWithBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;

@end

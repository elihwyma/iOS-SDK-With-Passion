/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;

@protocol NUImage <Swift>

@property (readonly) NUImageLayout *layout;
@property (readonly) NUPixelFormat *format;
@property (readonly) NUColorSpace *colorSpace;
@property (readonly) CDStruct_912cb5d2 size;
@property (copy, readonly) NURegion *validRegion;

@end

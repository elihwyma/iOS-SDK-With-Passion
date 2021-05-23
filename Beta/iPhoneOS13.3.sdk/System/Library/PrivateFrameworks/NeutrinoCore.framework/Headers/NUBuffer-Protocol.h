/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NUPixelFormat;

@protocol NUBuffer <Swift>

@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) const void *bytes;

- (unsigned short)bytesAtPoint: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NUPixelFormat, NURegion;

@protocol NUImageStorage <Swift>

@property (readonly) CDStruct_912cb5d2 size;
@property (readonly) long long sizeInBytes;
@property (readonly) NUPixelFormat *format;
@property (readonly) NURegion *validRegion;

- (unsigned short)invalidate;
- (unsigned short)validateRect: /* Error: Ran out of types for this method. */;
- (unsigned short)validateRegion: /* Error: Ran out of types for this method. */;
- (unsigned short)isValidInRect: /* Error: Ran out of types for this method. */;
- (unsigned short)isValidInRegion: /* Error: Ran out of types for this method. */;
- (unsigned short)assertIsValidInRect: /* Error: Ran out of types for this method. */;
- (unsigned short)assertIsValidInRegion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyFromStorage:region: /* Error: Ran out of types for this method. */;
- (unsigned short)readBufferInRegion:block: /* Error: Ran out of types for this method. */;
- (unsigned short)writeBufferInRegion:block: /* Error: Ran out of types for this method. */;
- (unsigned short)fillBufferWithPattern4: /* Error: Ran out of types for this method. */;
- (unsigned short)useAsCIImageWithOptions:renderer:block: /* Error: Ran out of types for this method. */;
- (unsigned short)useAsCIRenderDestinationWithRenderer:block: /* Error: Ran out of types for this method. */;

@end

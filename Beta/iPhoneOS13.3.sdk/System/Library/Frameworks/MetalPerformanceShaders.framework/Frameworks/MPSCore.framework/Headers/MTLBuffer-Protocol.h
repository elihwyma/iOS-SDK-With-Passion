/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/Swift-Protocol.h>

@protocol MTLBuffer <Swift>

@property (readonly) unsigned long long length;

- (unsigned short)contents;
- (unsigned short)newTextureWithDescriptor:offset:bytesPerRow: /* Error: Ran out of types for this method. */;
- (unsigned short)addDebugMarker:range: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllDebugMarkers;
- (unsigned short)didModifyRange: /* Error: Ran out of types for this method. */;

@end

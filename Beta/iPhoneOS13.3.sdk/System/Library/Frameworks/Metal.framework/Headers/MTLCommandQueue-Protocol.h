/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLCommandQueue <Swift>

@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;

- (unsigned short)commandBuffer;
- (unsigned short)commandBufferWithUnretainedReferences;
- (unsigned short)insertDebugCaptureBoundary;

@end

/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLCommandQueue <Swift>

@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;

- (unsigned short)commandBuffer;
- (unsigned short)commandBufferWithUnretainedReferences;
- (unsigned short)insertDebugCaptureBoundary;

@end

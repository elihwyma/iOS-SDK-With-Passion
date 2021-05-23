/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@class NSString;

@protocol MTLCommandQueue, MTLDevice;

@protocol MTLCaptureScope <Swift>

@property (copy) NSString *label;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) id <MTLCommandQueue> commandQueue;

- (unsigned short)beginScope;
- (unsigned short)endScope;

@end

/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLDepthStencilState <Swift>

@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;

@end

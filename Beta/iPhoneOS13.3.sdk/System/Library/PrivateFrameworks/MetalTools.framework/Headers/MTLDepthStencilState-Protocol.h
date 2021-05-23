/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLDepthStencilState <Swift>

@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;

@end

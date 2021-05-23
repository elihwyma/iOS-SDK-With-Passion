/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLSamplerState <Swift>

@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;

@end

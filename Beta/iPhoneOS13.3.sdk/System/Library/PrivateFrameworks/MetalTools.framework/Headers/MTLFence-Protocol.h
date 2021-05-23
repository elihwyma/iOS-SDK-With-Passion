/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLFence <Swift>

@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;

@end

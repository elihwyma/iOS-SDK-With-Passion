/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLEvent <Swift>

@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;

@end

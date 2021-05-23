/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLCommandEncoder <Swift>

@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;

- (unsigned short)endEncoding;
- (unsigned short)pushDebugGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)popDebugGroup;
- (unsigned short)insertDebugSignpost: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class NSArray, NSString;

@protocol MTLDevice;

@protocol MTLLibrary <Swift>

@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) NSArray *functionNames;

- (unsigned short)newFunctionWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)newFunctionWithName:constantValues:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newFunctionWithName:constantValues:completionHandler: /* Error: Ran out of types for this method. */;

@end

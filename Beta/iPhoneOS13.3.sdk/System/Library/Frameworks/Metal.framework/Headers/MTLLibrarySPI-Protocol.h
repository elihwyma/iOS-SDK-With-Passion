/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@class NSArray, NSString;

@protocol MTLLibrarySPI <Swift>

@property (copy) NSString *overrideTriple;
@property (readonly) NSArray *externFunctionNames;

- (unsigned short)newExternFunctionWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)newFunctionWithName:constantValues:pipelineLibrary:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newFunctionWithName:constantValues:pipelineLibrary:completionHandler: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@class MTLType, NSArray, NSString;

@protocol MTLFunctionSPI <Swift>

@property (copy, readonly) NSString *filePath;
@property (readonly) long long lineNumber;
@property (copy, readonly) NSString *unpackedFilePath;
@property (readonly) unsigned long long renderTargetArrayIndexType;
@property (readonly) MTLType *returnType;
@property (readonly) NSArray *arguments;

- (unsigned short)bitCodeHash;
- (unsigned short)reflectionWithOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)reflectionWithOptions:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)bitcodeData;
- (unsigned short)newFunctionWithPluginData:bitcodeType: /* Error: Ran out of types for this method. */;

@end

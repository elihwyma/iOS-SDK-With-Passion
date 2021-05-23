/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NSDictionary, NSString, NUJSDepthProperties, NUJSRAWImageProperties;

@protocol NUJSImagePropertiesExport <Swift>

@property (readonly) NSDictionary *metadata;
@property (readonly) NSString *fileUTI;
@property (readonly) NUJSDepthProperties *depthProperties;
@property (readonly) NUJSRAWImageProperties *rawImageProperties;

@end

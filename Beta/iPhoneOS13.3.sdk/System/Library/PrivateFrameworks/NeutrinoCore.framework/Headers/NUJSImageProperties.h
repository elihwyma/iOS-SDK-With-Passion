/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSProxy.h>

@class NSDictionary, NSString, NUJSDepthProperties, NUJSRAWImageProperties;

@protocol NUImageProperties;

@interface NUJSImageProperties : NUJSProxy

@property (readonly) id <NUImageProperties> imageProperties;
@property (readonly) NSDictionary *metadata;
@property (readonly) NSString *fileUTI;
@property (readonly) NUJSDepthProperties *depthProperties;
@property (readonly) NUJSRAWImageProperties *rawImageProperties;

- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithImageProperties:(id)arg1 context:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NUJSImageGeometry, NUJSImageProperties, NUJSVideoProperties;

@protocol NUJSRenderNodeExport <Swift>

@property (readonly) NUJSImageGeometry *geometry;
@property (readonly) NUJSImageProperties *imageProperties;
@property (readonly) NUJSVideoProperties *videoProperties;

@end

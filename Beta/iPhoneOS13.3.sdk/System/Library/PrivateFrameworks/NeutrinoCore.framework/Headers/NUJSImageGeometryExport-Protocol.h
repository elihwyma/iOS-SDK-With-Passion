/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NUJSScale;

@protocol NUJSImageGeometryExport <Swift>

@property (readonly) struct CGRect extent;
@property (readonly) struct CGSize size;
@property (readonly) struct CGSize scaledSize;
@property (readonly) NUJSScale *scale;
@property (readonly) long long orientation;

@end

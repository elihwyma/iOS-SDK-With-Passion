/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSProxy.h>

@class NUImageGeometry, NUJSScale;

@interface NUJSImageGeometry : NUJSProxy

@property (readonly) NUImageGeometry *geometry;
@property (readonly) struct CGRect extent;
@property (readonly) struct CGSize size;
@property (readonly) struct CGSize scaledSize;
@property (readonly) NUJSScale *scale;
@property (readonly) long long orientation;

- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithGeometry:(id)arg1 context:(id)arg2;

@end

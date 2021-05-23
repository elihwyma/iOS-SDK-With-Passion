/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSProxy.h>

@class NUImageTransform;

@interface NUJSImageTransform : NUJSProxy

@property (readonly) NUImageTransform *transform;

- (id)description;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (id)transformByRotateZ:(double)arg1;
- (id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)initWithImageTransform:(id)arg1 context:(id)arg2;

@end

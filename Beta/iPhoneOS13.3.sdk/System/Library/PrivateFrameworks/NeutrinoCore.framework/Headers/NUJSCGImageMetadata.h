/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSProxy.h>

@interface NUJSCGImageMetadata : NUJSProxy

@property (readonly) const struct CGImageMetadata *metadata;

- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithCGImageMetadata:(struct CGImageMetadata *)arg1 context:(id)arg2;
- (id)nu_unwrapJSValue;

@end

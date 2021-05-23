/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSProxy.h>

@interface RLMOptionalBase : NSProxy

{
    struct unique_ptr<(anonymous namespace)::OptionalBase, std::__1::default_delete<(anonymous namespace)::OptionalBase>> _impl;
}

- (id)init;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id).cxx_construct;

@end

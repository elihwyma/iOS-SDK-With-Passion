/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSInvocation.h>

@interface NSInvocation (GKProxyHelpers)

+ (id)_gkInvocationWithBlock:(id)arg1;

- (void)_gkInvokeOnce;
- (_Bool)_gkHasReplyBlock;
- (void)_gkCopyArguments;
- (id)_gkReplyHandlerInvocation;
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;
- (void)_gkInvokeOnceWithTarget:(id)arg1;
- (void)_gkClearCopiedArguments;
- (void)_gkPrepareForCallWithError:(id)arg1;
- (void)_gkClearTarget;
- (void)_gkPrintBlockSignature;
- (void)__gkPrepareForFakeCallbackWithNoData:(_Bool)arg1 orError:(id)arg2;
- (void)_gkClearArgumentAtIndex:(unsigned long long)arg1;

@end

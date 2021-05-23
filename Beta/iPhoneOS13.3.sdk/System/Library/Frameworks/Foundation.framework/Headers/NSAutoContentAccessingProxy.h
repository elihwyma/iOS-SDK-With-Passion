/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface NSAutoContentAccessingProxy : NSProxy

{
    id _target;
}

+ (id)proxyWithTarget:(id)arg1;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end

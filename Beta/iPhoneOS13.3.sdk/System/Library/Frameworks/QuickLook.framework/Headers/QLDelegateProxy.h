/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSProxy.h>

@interface QLDelegateProxy : NSProxy

{
    id _firstDelegate;
    id _secondDelegate;
}

@property (weak) id firstDelegate;
@property (weak) id secondDelegate;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end

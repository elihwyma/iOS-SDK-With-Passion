/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSInvocation.h>

@interface NSBlockInvocation : NSInvocation

- (SEL)selector;
- (void)invoke;
- (void)setSelector:(SEL)arg1;
- (void)invokeUsingIMP:(CDUnknownFunctionPointerType)arg1;
- (void)invokeSuper;

@end

/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@interface IMInvocationTrampoline : NSObject

{
    id _target;
}

@property (retain) id target;

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)performInvocation:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKRemoteObject : NSObject

{
    struct RetainPtr<_WKRemoteObjectRegistry> _objectRegistry;
    struct RetainPtr<_WKRemoteObjectInterface> _interface;
}

- (_Bool)conformsToProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id).cxx_construct;
- (id)_initWithObjectRegistry:(id)arg1 interface:(id)arg2;

@end

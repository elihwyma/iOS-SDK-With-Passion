/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerClient : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)handleRequest:(id)arg1;
- (void)handleError:(id)arg1 forRequest:(id)arg2;

@end

/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSFileProviderMessageInterface, NSLock, NSXPCConnection, Protocol;

@interface NSFileProviderMessenger : NSObject

{
    NSXPCConnection *_conn;
    Protocol *_protocol;
    NSFileProviderMessageInterface *_interface;
    NSLock *_lock;
    _Bool _triedConnection;
}

- (void)dealloc;
- (void)invalidate;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithInterface:(id)arg1 protocol:(id)arg2;

@end

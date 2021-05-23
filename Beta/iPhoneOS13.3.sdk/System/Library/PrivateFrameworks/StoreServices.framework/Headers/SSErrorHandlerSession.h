/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSErrorHandlerSession : NSObject

{
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDictionary *_properties;
    long long _sessionID;
}

- (id)init;
- (void)dealloc;
- (id)valueForProperty:(id)arg1;
- (void)retry;
- (void)_setSessionID:(long long)arg1;
- (void)_setControlConnection:(id)arg1;
- (void)_setErrorProperties:(id)arg1;
- (void)performDefaultHandling;
- (void)redirectToURL:(id)arg1;

@end

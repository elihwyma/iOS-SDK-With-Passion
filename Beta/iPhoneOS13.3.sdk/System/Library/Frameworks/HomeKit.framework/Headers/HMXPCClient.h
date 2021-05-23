/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HMFoundation/HMFMessageTransport.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface HMXPCClient : HMFMessageTransport

{
    _Bool _connectionValid;
    _Bool _requiresCheckin;
    _Bool _notifyRegistered;
    int _notifyRegisterToken;
    NSXPCConnection *_connection;
    CDUnknownBlockType _reconnectionHandler;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) _Bool connectionValid;
@property (nonatomic) _Bool requiresCheckin;
@property (nonatomic) int notifyRegisterToken;
@property (nonatomic) _Bool notifyRegistered;
@property (copy, nonatomic) CDUnknownBlockType reconnectionHandler;

- (id)init;
- (void)dealloc;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerReconnectionHandler:(CDUnknownBlockType)arg1;

@end

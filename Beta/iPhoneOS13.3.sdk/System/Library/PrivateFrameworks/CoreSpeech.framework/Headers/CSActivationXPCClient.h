/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface CSActivationXPCClient : NSObject

{
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;

- (id)init;
- (void)dealloc;
- (void)connect;
- (void)notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleListenerEvent:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_decodeError:(id)arg1;

@end

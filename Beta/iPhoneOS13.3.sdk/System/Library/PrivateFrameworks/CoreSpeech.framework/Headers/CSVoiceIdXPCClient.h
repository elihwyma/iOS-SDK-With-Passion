/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface CSVoiceIdXPCClient : NSObject

{
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;

- (id)init;
- (void)dealloc;
- (void)disconnect;
- (void)connect;
- (void)_handleListenerEvent:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_decodeError:(id)arg1;
- (void)notifyImplicitUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 voiceTriggerEventInfo:(id)arg4 otherCtxt:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end

/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRTransportExternalDevice.h>

@class NSObject, NSString, RTIInputSystemSourceSession;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRTelevisionDevice : MRTransportExternalDevice

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _hiliteMode;
    unsigned int _gameControllerInputMode;
    CDUnknownBlockType _gameControllerInputModeCallback;
    NSObject<OS_dispatch_queue> *_gameControllerInputModeCallbackQueue;
    CDUnknownBlockType _gameControllerPropertiesCallback;
    NSObject<OS_dispatch_queue> *_gameControllerPropertiesCallbackQueue;
    CDUnknownBlockType _recordingStateCallback;
    NSObject<OS_dispatch_queue> *_recordingStateCallbackQueue;
    CDUnknownBlockType _textInputCallback;
    NSObject<OS_dispatch_queue> *_textInputCallbackQueue;
    CDUnknownBlockType _rtiCallback;
    NSObject<OS_dispatch_queue> *_rtiCallbackQueue;
    RTIInputSystemSourceSession *_rtiSourceSession;
    CDUnknownBlockType _hiliteModeCallback;
    NSObject<OS_dispatch_queue> *_hiliteModeCallbackQueue;
}

@property (copy, nonatomic) CDUnknownBlockType gameControllerInputModeCallback;
@property (nonatomic) unsigned int gameControllerInputMode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *gameControllerInputModeCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType gameControllerPropertiesCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *gameControllerPropertiesCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType recordingStateCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordingStateCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType textInputCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *textInputCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType rtiCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rtiCallbackQueue;
@property (retain, nonatomic) RTIInputSystemSourceSession *rtiSourceSession;
@property (copy, nonatomic) CDUnknownBlockType hiliteModeCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hiliteModeCallbackQueue;
@property (nonatomic, readonly) _Bool hiliteMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTransport:(id)arg1;
- (void)handleTextActionPayload:(id)arg1;
- (void)wake;
- (void)setHiliteMode:(_Bool)arg1;
- (void)_callClientGameControllerInputModeCallback;
- (void)setVoiceRecordingState:(unsigned int)arg1;
- (void)_callClientRecordingStateCallback;
- (void)_callCientHiliteModeCallback;
- (void)_handleKeyboardMessage:(id)arg1;
- (void)_handleRemoteTextInputMessage:(id)arg1;
- (void)_callClientGameControllerPropertiesCallback:(id)arg1 controller:(unsigned long long)arg2;
- (void)_handleHiliteModeMessage:(id)arg1;
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)_sendTextInputMessageWithActionType:(unsigned long long)arg1 text:(id)arg2;
- (void)_callClientTextInputCallback:(id)arg1 type:(unsigned int)arg2;
- (void)_callClientRTICallback:(id)arg1;
- (void)setGameControllerInputModeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setGameControllerPropertiesCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setTextEditingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setRTICallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setVoiceRecordingStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setHiliteModeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (id)currentClientUpdatesConfigMessage;
- (void)registerTouchDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendTouchEvent:(struct _MRHIDTouchEvent)arg1 toVirtualDeviceWithID:(unsigned long long)arg2;
- (void)sendHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)getTextEditingSessionWithReplyQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertTextIntoActiveTextEditingSessionWithText:(id)arg1;
- (void)setTextOnActiveTextEditingSessionWithText:(id)arg1;
- (void)deleteBackwardInActiveTextEditingSession;
- (void)clearActiveTextEditingSessionData;
- (void)getRTISessionWithReplyQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerGameControllerWithProperties:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unregisterGameController:(unsigned long long)arg1;
- (void)sendGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2;
- (void)registerVoiceInputDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processVoiceInputAudioDataForDeviceID:(unsigned int)arg1 withBuffer:(id)arg2 time:(CDStruct_ace97b7a)arg3 gain:(float)arg4;
- (void)exitHiliteMode;

@end

/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, RPCompanionLinkClient, RPCompanionLinkDevice, RPHIDSession, RPHIDTouchSession, RPSiriSession, RPTextInputSession, _TVRCRapportMediaEventsManager;

@protocol _TVRCCompanionLinkClientWrapperDelegate;

@interface _TVRCRPCompanionLinkClientWrapper : NSObject

{
    _Bool _activated;
    _Bool _authenticated;
    _Bool _startedSetup;
    _Bool _connected;
    _Bool _hidSessionActivated;
    _Bool _hidTouchSessionActivated;
    _Bool _textInputSessionActivated;
    id <_TVRCCompanionLinkClientWrapperDelegate> _delegate;
    _TVRCRapportMediaEventsManager *_mediaManager;
    RPCompanionLinkClient *_companionClient;
    RPCompanionLinkDevice *_device;
    RPSiriSession *_siriSession;
    RPHIDSession *_hidSession;
    RPHIDTouchSession *_hidTouchSession;
    RPTextInputSession *_textInputSession;
    CDUnknownBlockType _rtiSessionHandler;
}

@property (retain, nonatomic) _TVRCRapportMediaEventsManager *mediaManager;
@property (retain, nonatomic) RPCompanionLinkClient *companionClient;
@property (retain, nonatomic) RPCompanionLinkDevice *device;
@property (retain, nonatomic) RPSiriSession *siriSession;
@property (retain, nonatomic) RPHIDSession *hidSession;
@property (retain, nonatomic) RPHIDTouchSession *hidTouchSession;
@property (retain, nonatomic) RPTextInputSession *textInputSession;
@property (copy, nonatomic) CDUnknownBlockType rtiSessionHandler;
@property (nonatomic) _Bool activated;
@property (nonatomic) _Bool authenticated;
@property (nonatomic) _Bool startedSetup;
@property (nonatomic) _Bool connected;
@property (nonatomic) _Bool hidSessionActivated;
@property (nonatomic) _Bool hidTouchSessionActivated;
@property (nonatomic) _Bool textInputSessionActivated;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSDictionary *alternateIdentifiers;
@property (copy, nonatomic, readonly) NSString *model;
@property (weak, nonatomic) id <_TVRCCompanionLinkClientWrapperDelegate> delegate;

+ (id)wrapperWithDevice:(id)arg1;

- (void)disconnect;
- (long long)connectionType;
- (id)initWithDevice:(id)arg1;
- (void)connect;
- (_Bool)isPaired;
- (void)disconnectWithError:(id)arg1;
- (void)sendButtonEvent:(id)arg1;
- (id)supportedButtons;
- (_Bool)supportsTouchEvents;
- (void)sendTouchEvent:(id)arg1;
- (void)_disconnectWithError:(id)arg1;
- (void)sendEvent:(id)arg1 options:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)setRTISessionHandler:(CDUnknownBlockType)arg1;
- (void)getCurrentRTISourceSession:(CDUnknownBlockType)arg1;
- (void)_updateConnectedState;
- (void)_launchApplicationOrURL:(id)arg1;
- (int)_commandForButtonEvent:(id)arg1;
- (int)_stateForButtonEvent:(id)arg1;
- (void)_handleSideEffectsForEvent:(id)arg1;
- (void)_createHidSession;
- (void)_setupMediaManager;
- (void)_setupTouchSession;
- (void)_setupTextInputSession;

@end

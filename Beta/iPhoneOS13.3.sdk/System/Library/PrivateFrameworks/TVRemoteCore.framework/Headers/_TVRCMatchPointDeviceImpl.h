/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString, _TVRCHMServiceWrapper, _TVRXDevice;

@interface _TVRCMatchPointDeviceImpl : NSObject

{
    _TVRXDevice *_device;
    _TVRCHMServiceWrapper *_service;
}

@property (retain, nonatomic) _TVRCHMServiceWrapper *service;
@property (weak, nonatomic) _TVRXDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)implWithService:(id)arg1;

- (id)name;
- (id)identifier;
- (void)disconnect;
- (long long)connectionType;
- (id)model;
- (void)connect;
- (id)keyboardController;
- (id)initWithService:(id)arg1;
- (void)sendButtonEvent:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (id)supportedButtons;
- (_Bool)supportsTouchEvents;
- (void)sendTouchEvent:(id)arg1;
- (id)voiceRecorder;
- (id)alternateIdentifiers;
- (unsigned long long)pairingCapability;
- (void)connectedToService:(id)arg1;
- (void)disconnectedFromService:(id)arg1 error:(id)arg2;
- (void)service:(id)arg1 updatedName:(id)arg2;
- (void)setAuthenticationSupported:(_Bool)arg1;

@end

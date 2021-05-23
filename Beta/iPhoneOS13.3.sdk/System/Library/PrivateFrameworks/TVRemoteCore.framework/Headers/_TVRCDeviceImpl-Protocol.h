/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <TVRemoteCore/Swift-Protocol.h>

@protocol _TVRCDeviceImpl <Swift>

- (unsigned short)name;
- (unsigned short)identifier;
- (unsigned short)disconnect;
- (unsigned short)connectionType;
- (unsigned short)model;
- (unsigned short)connect;
- (unsigned short)keyboardController;
- (unsigned short)setDevice: /* Error: Ran out of types for this method. */;
- (unsigned short)sendButtonEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)sendGameControllerEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)supportedButtons;
- (unsigned short)supportsTouchEvents;
- (unsigned short)sendTouchEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)voiceRecorder;
- (unsigned short)alternateIdentifiers;
- (unsigned short)pairingCapability;
- (unsigned short)setAuthenticationSupported: /* Error: Ran out of types for this method. */;

@end

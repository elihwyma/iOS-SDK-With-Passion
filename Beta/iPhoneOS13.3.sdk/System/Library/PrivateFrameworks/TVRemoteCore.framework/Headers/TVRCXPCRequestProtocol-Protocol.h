/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <TVRemoteCore/Swift-Protocol.h>

@protocol TVRCXPCRequestProtocol <Swift>

- (unsigned short)fulfillAuthChallengeForDeviceWithIdentifier:withLocallyEnteredCode: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelAuthChallengeForDeviceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)openConnectionToDeviceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)closeConnectionToDeviceWithIdentifier:withType: /* Error: Ran out of types for this method. */;
- (unsigned short)sendButtonEvent:toDeviceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)sendTouchEvent:toDeviceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)sendGameControllerEvent:toDeviceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)sendInputText:toDeviceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)sendInputReturnKeyToDeviceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)sendInputTextPayload:toDeviceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setVoiceRecorderAutomaticRecording:forDeviceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)startVoiceRecordingForDeviceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)stopVoiceRecordingForDeviceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)beginDeviceQuery;
- (unsigned short)endDeviceQuery;
- (unsigned short)fetchActiveMREndpointUIDWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendEvent:toDeviceWithIdentifier:options:response: /* Error: Ran out of types for this method. */;

@end

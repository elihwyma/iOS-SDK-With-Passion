/*
 Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

#import <FindMyDevice/Swift-Protocol.h>

@protocol FindMyDeviceHelperXPCInterface <Swift>

- (unsigned short)startPlayingSoundForAccessory:duration:rampUpDuration:channels:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)stopPlayingForAccessory:rampDownDuration:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)waitForRoutableAccessory:timeout:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateManagedLostModeInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateNeedsLocateAckLostModeInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)startPlayingSoundForMessage:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)stopSoundMessageWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)disableBiometricIDWithCompletion: /* Error: Ran out of types for this method. */;

@end

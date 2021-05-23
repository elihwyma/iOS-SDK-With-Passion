/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <VoiceOverServices/Swift-Protocol.h>

@protocol VOSBluetoothConnectableDevice <Swift>

- (unsigned short)name;
- (unsigned short)identifier;
- (unsigned short)disconnect;
- (unsigned short)connect;
- (unsigned short)connected;
- (unsigned short)paired;
- (unsigned short)unpair;

@end

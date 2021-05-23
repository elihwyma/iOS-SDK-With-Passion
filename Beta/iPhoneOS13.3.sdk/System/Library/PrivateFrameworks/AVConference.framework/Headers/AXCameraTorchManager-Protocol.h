/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/Swift-Protocol.h>

@protocol AXCameraTorchManager <Swift>

- (unsigned short)openTorchDevice;
- (unsigned short)closeTorchDevice;
- (unsigned short)turnTorchOn;
- (unsigned short)turnTorchOff;

@end

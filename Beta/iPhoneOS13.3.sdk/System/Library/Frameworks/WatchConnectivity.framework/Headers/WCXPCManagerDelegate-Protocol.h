/*
 Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

#import <WatchConnectivity/Swift-Protocol.h>

@protocol WCXPCManagerDelegate <Swift>

- (unsigned short)xpcConnectionInterrupted;
- (unsigned short)currentPairingID;
- (unsigned short)supportsActiveDeviceSwitch;

@end

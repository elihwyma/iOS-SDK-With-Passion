/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/Swift-Protocol.h>

@protocol NNMKDeviceRegistryHolder <Swift>

- (unsigned short)currentDeviceRegistry;
- (unsigned short)pairedDeviceSupportsMultipleMailboxes;
- (unsigned short)pairedDeviceSupportsStandaloneMode;

@end

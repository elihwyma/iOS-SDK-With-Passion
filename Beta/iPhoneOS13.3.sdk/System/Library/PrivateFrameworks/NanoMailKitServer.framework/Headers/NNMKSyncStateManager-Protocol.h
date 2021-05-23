/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/Swift-Protocol.h>

@protocol NNMKSyncStateManagerDelegate;

@protocol NNMKSyncStateManager <Swift>

@property (weak, nonatomic) id <NNMKSyncStateManagerDelegate> delegate;

- (unsigned short)pairingStorePath;
- (unsigned short)pairedDeviceSupportsMultipleMailboxes;
- (unsigned short)pairedDeviceSupportsStandaloneMode;
- (unsigned short)reportInitialSyncProgress: /* Error: Ran out of types for this method. */;
- (unsigned short)reportInitialSyncDidCompleteSending;
- (unsigned short)reportInitialSyncDidComplete;
- (unsigned short)reportInitialSyncDidFailWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)willPresentNotificationForMessage: /* Error: Ran out of types for this method. */;
- (unsigned short)isInitialSyncRestricted;
- (unsigned short)pairedDeviceScreenSize;
- (unsigned short)pairedDeviceScreenScale;
- (unsigned short)pairedDeviceSupportsMailContentProtectedChannel;

@end

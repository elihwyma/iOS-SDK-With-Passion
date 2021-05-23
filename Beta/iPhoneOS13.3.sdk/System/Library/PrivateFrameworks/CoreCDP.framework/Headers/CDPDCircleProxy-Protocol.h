/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <CoreCDP/Swift-Protocol.h>

@class CDPContext;

@protocol CDPDCircleProxy <Swift>

@property (nonatomic, readonly) CDPContext *cdpContext;

- (unsigned short)requestToJoinCircle: /* Error: Ran out of types for this method. */;
- (unsigned short)pairingChannelAcceptor: /* Error: Ran out of types for this method. */;
- (unsigned short)pairingChannelInitiator: /* Error: Ran out of types for this method. */;
- (unsigned short)registerCredentials;
- (unsigned short)tryRegisteringCredentials;
- (unsigned short)circleStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)removeThisDeviceFromCircle: /* Error: Ran out of types for this method. */;
- (unsigned short)canAuthenticate;
- (unsigned short)cachedCliqueStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)cachedCircleStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)peerId;
- (unsigned short)peerCount;
- (unsigned short)peerDeviceNamesByPeerID;
- (unsigned short)didJoinCircleAfterRecovery: /* Error: Ran out of types for this method. */;
- (unsigned short)generateRecoveryKeyWithInfo:error: /* Error: Ran out of types for this method. */;
- (unsigned short)generateVerifierWithRecoveryKey:error: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronizeCircleViews;
- (unsigned short)requestToJoinCircleAfterRestore: /* Error: Ran out of types for this method. */;
- (unsigned short)requestToResetCircle: /* Error: Ran out of types for this method. */;
- (unsigned short)requestToResetCloudKitDataForReason:error: /* Error: Ran out of types for this method. */;
- (unsigned short)viewMemberForAutofillPasswords: /* Error: Ran out of types for this method. */;
- (unsigned short)anyPeerHasEnabledViewsInSet:error: /* Error: Ran out of types for this method. */;
- (unsigned short)setViewsWithEnableSet:disableSet: /* Error: Ran out of types for this method. */;
- (unsigned short)hasNonViewAwarePeers;
- (unsigned short)removeNonViewAwarePeers: /* Error: Ran out of types for this method. */;
- (unsigned short)isLastBackupMakingPeer: /* Error: Ran out of types for this method. */;
- (unsigned short)registerCredentialsIfMissing;
- (unsigned short)waitForUpdate;
- (unsigned short)reportSuccess;
- (unsigned short)reportFailure: /* Error: Ran out of types for this method. */;

@end

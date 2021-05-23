/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class CDPContext, NSString, OTClique;

@interface CDPCircleProxyImpl : NSObject

{
    OTClique *_clique;
    CDPContext *_cdpContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDPContext *cdpContext;

- (_Bool)waitForInitialSync:(id *)arg1;
- (_Bool)requestToJoinCircle:(id *)arg1;
- (id)pairingChannelAcceptor:(id *)arg1;
- (id)pairingChannelInitiator:(id *)arg1;
- (id)initWithContext:(id)arg1;
- (id)contextType;
- (unsigned long long)cdpStatusFromOT:(long long)arg1;
- (long long)_authenticatedCircleStatus:(id *)arg1;
- (int)_sos_circleStatus:(id *)arg1;
- (unsigned long long)cdpStatusFromSOS:(int)arg1;
- (long long)_circleStatus:(id *)arg1;
- (_Bool)registerCredentials;
- (int)_sos_authenticatedCircleStatus:(id *)arg1;
- (_Bool)tryRegisteringCredentials;
- (unsigned long long)circleStatus:(id *)arg1;
- (_Bool)removeThisDeviceFromCircle:(id *)arg1;
- (_Bool)_registerCredentialsOnlyIfNeeded:(_Bool)arg1;
- (_Bool)canAuthenticate;
- (id)_pairingChannelContext;
- (unsigned long long)cachedCliqueStatus:(id *)arg1;
- (int)cachedCircleStatus:(id *)arg1;
- (id)peerId;
- (unsigned long long)peerCount;
- (id)peerDeviceNamesByPeerID;
- (void)didJoinCircleAfterRecovery:(id)arg1;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id *)arg2;
- (id)generateVerifierWithRecoveryKey:(id)arg1 error:(id *)arg2;
- (_Bool)synchronizeCircleViews;
- (_Bool)requestToJoinCircleAfterRestore:(id *)arg1;
- (_Bool)requestToResetCircle:(id *)arg1;
- (_Bool)requestToResetCloudKitDataForReason:(id)arg1 error:(id *)arg2;
- (_Bool)viewMemberForAutofillPasswords:(id *)arg1;
- (_Bool)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id *)arg2;
- (_Bool)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
- (_Bool)hasNonViewAwarePeers;
- (_Bool)removeNonViewAwarePeers:(id *)arg1;
- (_Bool)isLastBackupMakingPeer:(id *)arg1;
- (_Bool)registerCredentialsIfMissing;
- (void)waitForUpdate;
- (void)reportSuccess;
- (void)reportFailure:(id)arg1;
- (int)sos_circleStatus:(id *)arg1;

@end

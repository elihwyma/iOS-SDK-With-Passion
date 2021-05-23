/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, OTConfigurationContext;

@interface OTClique : NSObject

{
    NSString *_cliqueMemberIdentifier;
    OTConfigurationContext *_ctx;
    NSMutableDictionary *_defaults;
}

@property (copy, nonatomic) NSString *cliqueMemberIdentifier;
@property (retain, nonatomic) OTConfigurationContext *ctx;
@property (retain, nonatomic) NSMutableDictionary *defaults;

+ (_Bool)platformSupportsSOS;
+ (id)newFriendsWithContextData:(id)arg1 error:(id *)arg2;
+ (id)newFriendsWithContextData:(id)arg1 resetReason:(long long)arg2 error:(id *)arg3;
+ (id)performEscrowRecoveryWithContextData:(id)arg1 escrowArguments:(id)arg2 error:(id *)arg3;
+ (id)findOptimalBottleIDsWithContextData:(id)arg1 error:(id *)arg2;
+ (id)recoverWithContextData:(id)arg1 bottleID:(id)arg2 escrowedEntropy:(id)arg3 error:(id *)arg4;
+ (void)setNewRecoveryKeyWithData:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)recoverOctagonUsingData:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;

- (id)makeOTControl:(id *)arg1;
- (_Bool)isOctagonPairingEnabled;
- (void)setPairingDefault:(_Bool)arg1;
- (void)removePairingDefault;
- (id)initWithContextData:(id)arg1 error:(id *)arg2;
- (_Bool)establish:(id *)arg1;
- (_Bool)resetAndEstablish:(long long)arg1 error:(id *)arg2;
- (id)setupPairingChannelAsInitiator:(id)arg1;
- (id)setupPairingChannelAsInitator:(id)arg1 error:(id *)arg2;
- (id)setupPairingChannelAsAcceptor:(id)arg1;
- (id)setupPairingChannelAsAcceptor:(id)arg1 error:(id *)arg2;
- (long long)_fetchCliqueStatus:(id)arg1 error:(id *)arg2;
- (long long)fetchCliqueStatus:(id)arg1 error:(id *)arg2;
- (long long)fetchCliqueStatus:(id *)arg1;
- (long long)cachedCliqueStatus:(_Bool)arg1 error:(id *)arg2;
- (_Bool)removeFriendsInClique:(id)arg1 error:(id *)arg2;
- (_Bool)leaveClique:(id *)arg1;
- (id)peerDeviceNamesByPeerID:(id *)arg1;
- (_Bool)joinAfterRestore:(id *)arg1;
- (_Bool)safariPasswordSyncingEnabled:(id *)arg1;
- (_Bool)isLastFriend:(id *)arg1;
- (_Bool)waitForInitialSync:(id *)arg1;
- (id)copyViewUnawarePeerInfo:(id *)arg1;
- (_Bool)viewSet:(id)arg1 disabledViews:(id)arg2;
- (_Bool)setUserCredentialsAndDSID:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (_Bool)tryUserCredentialsAndDSID:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (id)copyPeerPeerInfo:(id *)arg1;
- (_Bool)peersHaveViewsEnabled:(id)arg1 error:(id *)arg2;
- (_Bool)requestToJoinCircle:(id *)arg1;
- (_Bool)accountUserKeyAvailable;
- (void)fetchEscrowContents:(CDUnknownBlockType)arg1;
- (void)performedCDPStateMachineRun:(id)arg1 success:(_Bool)arg2 error:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (_Bool)waitForOctagonUpgrade:(id *)arg1;
- (void)performedFailureCDPStateMachineRun:(id)arg1 error:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)performedSuccessfulCDPStateMachineRun:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

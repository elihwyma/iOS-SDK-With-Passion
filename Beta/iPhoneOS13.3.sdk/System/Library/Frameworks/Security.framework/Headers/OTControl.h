/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface OTControl : NSObject

{
    _Bool _synchronous;
    _Bool _sync;
    NSXPCConnection *_connection;
}

@property (retain) NSXPCConnection *connection;
@property _Bool sync;
@property _Bool synchronous;

+ (id)controlObject:(id *)arg1;
+ (id)controlObject:(_Bool)arg1 error:(id *)arg2;

- (void)dealloc;
- (id)initWithConnection:(id)arg1 sync:(_Bool)arg2;
- (id)getConnection:(CDUnknownBlockType)arg1;
- (void)restore:(id)arg1 dsid:(id)arg2 secret:(id)arg3 escrowRecordID:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)reset:(CDUnknownBlockType)arg1;
- (void)signingKey:(CDUnknownBlockType)arg1;
- (void)octagonSigningPublicKey:(CDUnknownBlockType)arg1;
- (void)encryptionKey:(CDUnknownBlockType)arg1;
- (void)octagonEncryptionPublicKey:(CDUnknownBlockType)arg1;
- (void)listOfRecords:(CDUnknownBlockType)arg1;
- (void)listOfEligibleBottledPeerRecords:(CDUnknownBlockType)arg1;
- (void)signIn:(id)arg1 container:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)signOut:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)notifyIDMSTrustLevelChangeForContainer:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleIdentityChangeForSigningKey:(id)arg1 ForEncryptionKey:(id)arg2 ForPeerID:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)rpcEpochWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcPrepareIdentityAsApplicantWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcVoucherWithConfiguration:(id)arg1 peerID:(id)arg2 permanentInfo:(id)arg3 permanentInfoSig:(id)arg4 stableInfo:(id)arg5 stableInfoSig:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)rpcJoinWithConfiguration:(id)arg1 vouchData:(id)arg2 vouchSig:(id)arg3 preapprovedKeys:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)preflightBottledPeer:(id)arg1 dsid:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)launchBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)scrubBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)status:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchEgoPeerID:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchCliqueStatus:(id)arg1 context:(id)arg2 configuration:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)fetchTrustStatus:(id)arg1 context:(id)arg2 configuration:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startOctagonStateMachine:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resetAndEstablish:(id)arg1 context:(id)arg2 altDSID:(id)arg3 resetReason:(long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)establish:(id)arg1 context:(id)arg2 altDSID:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)leaveClique:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)removeFriendsInClique:(id)arg1 context:(id)arg2 peerIDs:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)peerDeviceNamesByPeerID:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchAllViableBottles:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)restore:(id)arg1 contextID:(id)arg2 bottleSalt:(id)arg3 entropy:(id)arg4 bottleID:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)fetchEscrowContents:(id)arg1 contextID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)createRecoveryKey:(id)arg1 contextID:(id)arg2 recoveryKey:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)joinWithRecoveryKey:(id)arg1 contextID:(id)arg2 recoveryKey:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)healthCheck:(id)arg1 context:(id)arg2 skipRateLimitingCheck:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)attemptSosUpgrade:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)waitForOctagonUpgrade:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)postCDPFollowupResult:(_Bool)arg1 type:(id)arg2 error:(id)arg3 containerName:(id)arg4 contextName:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)tapToRadar:(id)arg1 description:(id)arg2 radar:(id)arg3 reply:(CDUnknownBlockType)arg4;

@end

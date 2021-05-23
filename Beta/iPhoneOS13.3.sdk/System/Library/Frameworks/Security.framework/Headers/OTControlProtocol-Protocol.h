/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

@protocol OTControlProtocol

- (unsigned short)restore:dsid:secret:escrowRecordID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)reset: /* Error: Ran out of types for this method. */;
- (unsigned short)octagonSigningPublicKey: /* Error: Ran out of types for this method. */;
- (unsigned short)octagonEncryptionPublicKey: /* Error: Ran out of types for this method. */;
- (unsigned short)listOfEligibleBottledPeerRecords: /* Error: Ran out of types for this method. */;
- (unsigned short)signIn:container:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)signOut:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyIDMSTrustLevelChangeForContainer:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)handleIdentityChangeForSigningKey:ForEncryptionKey:ForPeerID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcEpochWithConfiguration:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcPrepareIdentityAsApplicantWithConfiguration:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcVoucherWithConfiguration:peerID:permanentInfo:permanentInfoSig:stableInfo:stableInfoSig:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)rpcJoinWithConfiguration:vouchData:vouchSig:preapprovedKeys:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)preflightBottledPeer:dsid:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)launchBottledPeer:bottleID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)scrubBottledPeer:bottleID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)status:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchEgoPeerID:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCliqueStatus:context:configuration:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchTrustStatus:context:configuration:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)startOctagonStateMachine:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAndEstablish:context:altDSID:resetReason:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)establish:context:altDSID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)leaveClique:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFriendsInClique:context:peerIDs:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)peerDeviceNamesByPeerID:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAllViableBottles:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)restore:contextID:bottleSalt:entropy:bottleID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchEscrowContents:contextID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)createRecoveryKey:contextID:recoveryKey:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)joinWithRecoveryKey:contextID:recoveryKey:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)healthCheck:context:skipRateLimitingCheck:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)attemptSosUpgrade:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)waitForOctagonUpgrade:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)postCDPFollowupResult:type:error:containerName:contextName:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)tapToRadar:description:radar:reply: /* Error: Ran out of types for this method. */;

@end

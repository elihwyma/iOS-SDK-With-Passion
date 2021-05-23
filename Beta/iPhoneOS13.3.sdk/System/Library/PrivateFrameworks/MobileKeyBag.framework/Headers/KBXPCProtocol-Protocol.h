/*
 Image: /System/Library/PrivateFrameworks/MobileKeyBag.framework/MobileKeyBag
 */

#import <MobileKeyBag/Swift-Protocol.h>

@protocol KBXPCProtocol <Swift>

- (unsigned short)Event: /* Error: Ran out of types for this method. */;
- (unsigned short)changeSystemSecretfromOldSecret:oldSize:toNewSecret:newSize:opaqueData:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getPasscodeBlobWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)changeSystemSecretWithEscrow:fromOldSecret:oldSize:toNewSecret:newSize:opaqueData:keepstate:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)changeClassKeysGenerationWithSecret:secretSize:generationOption:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)registerBackupBag:withSecret:secretSize:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getBackupBlobreply: /* Error: Ran out of types for this method. */;
- (unsigned short)getBackupkeyForInodeOrCryptoID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)startBackupSessionwithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)stopBackupSessionwithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)stashCreatewithSecret:secrestSize:withMode:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)stashCommitwithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)stashVerifywithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)stashLoadwithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)stashDestroywithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)isKeyRollingInProgresswithreply: /* Error: Ran out of types for this method. */;
- (unsigned short)migrationWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getLockSateInfoforUser:WithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)passcodeUnlockStartWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)passcodeUnlockSuccessWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)passcodeUnlockFailedWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getDeviceLockState:needsExtended:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)loadUserSession:withSecret:oldSize:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)unloadUserSession:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)createUserSession:withSecret:oldSize:withOpaqueData:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)migrateUserSession:fromfilePath:withSecret:oldSize:withOpaqueData:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)removeUserSession:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)listAllUserSessionIDsWithAReply: /* Error: Ran out of types for this method. */;
- (unsigned short)retrieveUserSessionBlobwithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteUserSessionBlobwithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)switchToUserSession:withOpaqueData:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserSessionSecureBackupBlob:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)retrieveUserSessionSecureBackupBlobwithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteUserSessionSecureBlobwithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getUserSessionAttributes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserSessionAttributes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)foregroundUserSessionAttributesWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)configureLoginUIWithUserSessionCount:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)switchToLoginUIUserSessionWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)addSyncServiceSource:toUserSession:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)removeSyncServiceSource:toUserSession:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)startUserSyncBubble:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)stoptUserSyncBubble:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)MKBUserSessionSetInternalTest:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)currentSyncBubbleIDwithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)listSyncServiceSourcesForUserSession:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)listSyncBubbleUserswithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSyncBubbleUserswithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)limitNumberOfUserSessions:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)switchBlockTasksInfoWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)userSessionLRUInfoWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)mountUserSessionVolumeforID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)unmountUserSessionVolumeforID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)isLoginSessionwithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)userSessionDeviceConfigurationInfo:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)SeshatEnrollWithSecret:secretSize:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)SeshatUnlockWithSecret:secretSize:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)SeshatRecoverWithSecret:secretSize:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)SeshatDebugWithDebugMask:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)replacePersonaMachPortVoucher:withAccountID:generationSet:forPid:withReply: /* Error: Ran out of types for this method. */;

@end

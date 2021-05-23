/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKUserIdentityLookupInfo.h>

@interface CKUserIdentityLookupInfo (CKDaemonExtensions)

- (_Bool)hasEncryptedPersonalInfo;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 participantID:(id)arg2 inShareWithID:(id)arg3 pcsManager:(id)arg4;
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 participantID:(id)arg2 inShareWithID:(id)arg3 pcsManager:(id)arg4;

@end

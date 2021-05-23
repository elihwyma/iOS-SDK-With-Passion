/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKShareParticipant.h>

@interface CKShareParticipant (CKDaemonExtensions)

- (_Bool)hasEncryptedPersonalInfo;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;

@end

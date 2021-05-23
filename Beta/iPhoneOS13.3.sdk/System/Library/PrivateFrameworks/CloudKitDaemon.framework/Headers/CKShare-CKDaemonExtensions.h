/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKShare.h>

@interface CKShare (CKDaemonExtensions)

- (_Bool)hasEncryptedPersonalInfo;
- (void)_prepPCSDataWithContext:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(_Bool)arg4 containerIdentifier:(id)arg5 sharedRecordZone:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)setSharePCSData:(id)arg1;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (void)_ingestAndExportPPPCSFromShareInvitationToken:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_prepPCSDataWithContext:(id)arg1 databaseScope:(long long)arg2 publicSharingKey:(id)arg3 removeServerSpecifiedKeys:(_Bool)arg4 containerIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_prepPCSDataUsingPreDecryptedPCSOnlyWithContext:(id)arg1 databaseScope:(long long)arg2;
- (struct _OpaquePCSShareProtection *)publicPCS;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)arg1;
- (struct _OpaquePCSShareProtection *)privatePCS;
- (void)setSharePCSData:(id)arg1 isUnitTestAccount:(_Bool)arg2;
- (void)setPrivatePCS:(struct _OpaquePCSShareProtection *)arg1;

@end

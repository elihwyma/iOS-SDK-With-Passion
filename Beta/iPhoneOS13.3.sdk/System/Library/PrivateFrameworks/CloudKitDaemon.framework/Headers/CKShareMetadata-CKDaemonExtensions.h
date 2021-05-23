/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKShareMetadata.h>

@interface CKShareMetadata (CKDaemonExtensions)

- (_Bool)hasEncryptedData;
- (void)_encryptDataWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (void)_decryptDataWithPCSBlob:(struct _OpaquePCSShareProtection *)arg1 pcsManager:(id)arg2;
- (struct _OpaquePCSShareProtection *)publicPCS;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)arg1;

@end

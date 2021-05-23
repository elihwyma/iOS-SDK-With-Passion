/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKAsset.h>

@interface CKAsset (CKDaemonExtensions)

- (_Bool)fillInDownloadURLsForAssetWithFieldName:(id)arg1 fileName:(id)arg2 recordPCS:(struct _OpaquePCSShareProtection *)arg3 pcsManager:(id)arg4 useEncryption:(_Bool)arg5 useClearAssetEncryption:(_Bool)arg6 outError:(id *)arg7;

@end

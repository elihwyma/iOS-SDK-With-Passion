/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CDPProtectedCloudStorageProxyImpl : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)_performPCSBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsSynchronizeKeysWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsRestoreLocalBackup:(id)arg1 error:(id *)arg2;

@end

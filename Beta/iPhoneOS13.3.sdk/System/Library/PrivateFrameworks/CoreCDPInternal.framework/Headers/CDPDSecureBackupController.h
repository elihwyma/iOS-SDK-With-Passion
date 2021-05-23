/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CDPContext, CDPDSecureBackupConfiguration, NSDictionary;

@protocol CDPDSecureBackupDelegate, CDPDSecureBackupProxy, CDPStateUIProviderInternal;

@interface CDPDSecureBackupController : NSObject

{
    _Bool _fakeNearlyDepletedRecords;
    CDPContext *_context;
    id <CDPStateUIProviderInternal> _uiProvider;
    id <CDPDSecureBackupDelegate> _delegate;
    NSDictionary *_cachedAccountInfo;
    id <CDPDSecureBackupProxy> _secureBackupProxy;
    CDPDSecureBackupConfiguration *_configuration;
}

@property (retain, nonatomic) NSDictionary *cachedAccountInfo;
@property (nonatomic) _Bool fakeNearlyDepletedRecords;
@property (retain, nonatomic) id <CDPDSecureBackupProxy> secureBackupProxy;
@property (weak, nonatomic) id <CDPDSecureBackupDelegate> delegate;
@property (retain, nonatomic) CDPDSecureBackupConfiguration *configuration;
@property (nonatomic, readonly) CDPContext *context;
@property (nonatomic, readonly) id <CDPStateUIProviderInternal> uiProvider;

+ (id)_printableAccountInfo:(id)arg1;
+ (id)_sanitizedInfoDictionary:(id)arg1;

- (void)clearAccountInfoCache;
- (void)getBackupRecordDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)recoverSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)supportsRecoveryKey;
- (void)performEscrowRecoveryWithRecoveryContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 delegate:(id)arg3;
- (void)checkAndRemoveExistingThenEnableSecureBackupRecordWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)stashedPRK;
- (void)backupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 proxy:(id)arg2;
- (void)disableRecoveryKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableSecureBackupWithRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)_accountInfo:(id *)arg1;
- (void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dateWithSecureBackupDateString:(id)arg1;
- (void)_enableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSingleICSCBackupWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkForExistingRecord:(CDUnknownBlockType)arg1;
- (void)checkForExistingRecordWithPeerId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkForExistingRecordMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_authenticatedEnableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)authenticatedEnableSecureBackupWithRecoveryKey:(id)arg1 error:(id *)arg2;
- (id)_clientMetadataWithSecretType:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)_currentAnisetteData;
- (_Bool)_disableThenEnableWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)_disableSecureBackup:(id *)arg1;
- (id)_recoveryInfoDictionaryFromContext:(id)arg1;
- (id)performEscrowRecoveryWithRecoveryContext:(id)arg1 error:(id *)arg2;
- (id)_recoverBackupDictionaryWithContext:(id)arg1 error:(id *)arg2;
- (void)_deleteAllBackupRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteSingleICSCBackupWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_disableRecoveryKey:(id *)arg1;
- (void)synchronizeKeyValueStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)isEligibleForCDPWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)upgradeICSCRecordsThenEnableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllBackupRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableSecureBackupWithCompletion:(CDUnknownBlockType)arg1;

@end

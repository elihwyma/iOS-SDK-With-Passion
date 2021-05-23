/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICCryptor : NSObject

+ (id)unwrappedKeyForObject:(id)arg1;
+ (void)removeNoteFromBiometricID:(id)arg1;
+ (_Bool)isAuthenticatedForNote:(id)arg1;
+ (_Bool)isAuthenticatedForObject:(id)arg1;
+ (id)decryptData:(id)arg1 forObject:(id)arg2;
+ (id)cachedMasterKeyForObject:(id)arg1;
+ (void)setCachedMasterKey:(id)arg1 forObject:(id)arg2;
+ (id)encryptData:(id)arg1 forObject:(id)arg2 tag:(id *)arg3 initializationVector:(id *)arg4;
+ (id)decryptData:(id)arg1 forObject:(id)arg2 withTag:(id)arg3 initializationVector:(id)arg4;
+ (id)newWrappedKeyForObject:(id)arg1;
+ (id)wrapKey:(id)arg1 withMasterKey:(id)arg2;
+ (id)decryptedDataFromFileURL:(id)arg1 forObject:(id)arg2;
+ (_Bool)userHasPassphraseSetForObject:(id)arg1;
+ (_Bool)key:(id)arg1 decryptsObject:(id)arg2;
+ (_Bool)isPassphrase:(id)arg1 correctForObject:(id)arg2;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1 forAccount:(id)arg2;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1 forObject:(id)arg2;
+ (_Bool)userHasPassphraseSetForNote:(id)arg1;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1 forNote:(id)arg2;
+ (_Bool)isPassphrase:(id)arg1 correctForAccount:(id)arg2;
+ (_Bool)unauthenticatedAttachmentsUsingSamePassphraseExistForNote:(id)arg1 passphrase:(id)arg2;
+ (void)fixDivergedAttachmentsForNote:(id)arg1 usingPassphrase:(id)arg2;
+ (void)fixUpAnyNotesToMatchAccountUsingPassphraseIfNecessary:(id)arg1;
+ (void)fixUpAnyNotesToMatchAccountUsingPassphrase:(id)arg1;
+ (_Bool)isPassphrase:(id)arg1 correctForNote:(id)arg2;
+ (void)fixNoteWithDivergedKeyFromAccountPassphrase:(id)arg1 usingPassphrase:(id)arg2;
+ (_Bool)authenticateWithPassphrase:(id)arg1 forAccount:(id)arg2;
+ (_Bool)authenticateWithPassphrase:(id)arg1 forObject:(id)arg2;
+ (_Bool)isAuthenticatedForAccount:(id)arg1;
+ (void)rewrapNote:(id)arg1 newMasterKey:(id)arg2 salt:(id)arg3 iterationCount:(unsigned int)arg4 hint:(id)arg5;
+ (id)masterKeysByAccountIdentifier;
+ (void)startOrExtendCachedKeyClearingTimer;
+ (void)setCachedMasterKey:(id)arg1 forIdentifier:(id)arg2;
+ (id)cachedMasterKeyForIdentifier:(id)arg1;
+ (id)allCachedKeys;
+ (void)refaultAllPasswordProtectedObjects;
+ (_Bool)setPassphrase:(id)arg1 hint:(id)arg2 forAccount:(id)arg3;
+ (_Bool)authenticateWithPassphrase:(id)arg1 forNote:(id)arg2;
+ (void)rewrapKeyForObject:(id)arg1 newMasterKey:(id)arg2 salt:(id)arg3 iterationCount:(unsigned int)arg4 hint:(id)arg5;
+ (void)startOrExtendCachedKeyClearingTimerForModes:(id)arg1;
+ (void)clearAllCachedMasterKeys;
+ (void)removeItemFromBiometricID:(id)arg1;
+ (_Bool)decryptFileFromURL:(id)arg1 toURL:(id)arg2 forObject:(id)arg3;
+ (_Bool)encryptFileFromURL:(id)arg1 toURL:(id)arg2 forObject:(id)arg3;
+ (_Bool)userHasPassphraseSetForAccount:(id)arg1;
+ (void)cacheMasterKeyWithPassphrase:(id)arg1;
+ (_Bool)hasAnyCachedMasterKeys;
+ (_Bool)setPassphrase:(id)arg1 hint:(id)arg2 oldPassphrase:(id)arg3 forAccount:(id)arg4;
+ (_Bool)updateAllNotesWithOldPassphrase:(id)arg1 toAccountPassphrase:(id)arg2 fromAccount:(id)arg3 progress:(id)arg4;
+ (void)transferSharedPassphraseFromAccount:(id)arg1 toAccount:(id)arg2;
+ (double)timeIntervalBeforeClearingCachedKeys;
+ (void)cachedKeyClearingTimerDidFire;
+ (void)removePassphraseForAccount:(id)arg1;
+ (void)removePassphraseForNotesInAccount:(id)arg1;
+ (void)removeAllFromBiometricID;
+ (void)removeAccountFromBiometricID:(id)arg1 andRemoveNotes:(_Bool)arg2;
+ (void)rewrapAndDivergeKeyForObject:(id)arg1 usingPassphrase:(id)arg2;

@end

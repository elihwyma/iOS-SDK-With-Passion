/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDAccount, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDPCSIdentityManager : NSObject

{
    _Bool _isSiloed;
    _Bool _forceEnableReadOnlyManatee;
    NSString *_serviceName;
    CKDAccount *_account;
    NSString *_cachedAccountDSID;
    NSMutableDictionary *_PCSIdentityWrappersByServiceName;
    struct _PCSIdentityData *_debugIdentity;
}

@property (retain) CKDAccount *account;
@property (nonatomic, readonly) _Bool isSiloed;
@property (nonatomic, readonly) _Bool forceEnableReadOnlyManatee;
@property (retain) NSString *cachedAccountDSID;
@property (retain) NSMutableDictionary *PCSIdentityWrappersByServiceName;
@property (nonatomic) struct _PCSIdentityData *debugIdentity;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) _Bool currentServiceIsManatee;

+ (id)sharedFakeIdentitySetsByServiceByUsername;
+ (struct _PCSIdentitySetData *)_copyStingrayIdentitiesForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id *)arg3;
+ (struct _PCSIdentitySetData *)_getTestAccountIdentitySetForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id *)arg3;

- (void)dealloc;
- (void)updateAccount:(id)arg1;
- (struct _PCSIdentityData *)createRandomSharingIdentityWithError:(id *)arg1;
- (id)dataFromSharingIdentity:(struct _PCSIdentityData *)arg1 error:(id *)arg2;
- (id)initWithAccount:(id)arg1 serviceName:(id)arg2 isSiloed:(_Bool)arg3 forceEnableReadOnlyManatee:(_Bool)arg4;
- (void)identitiesChanged;
- (struct _PCSIdentitySetData *)createFullKeychainIdentitySetWithError:(id *)arg1;
- (struct _PCSIdentityData *)debugSharingIdentity;
- (id)PCSServiceStringFromCKServiceType:(unsigned long long)arg1;
- (id)copyPublicKeyForService:(unsigned long long)arg1 withError:(id *)arg2;
- (id)copyAllPublicKeysForService:(unsigned long long)arg1 withError:(id *)arg2;
- (struct _PCSPublicIdentityData *)copyDiversifiedIdentityForService:(unsigned long long)arg1 userIDEntropy:(id)arg2 withError:(id *)arg3;
- (id)copyDiversifiedPublicKeyForService:(unsigned long long)arg1 userIDEntropy:(id)arg2 withError:(id *)arg3;
- (struct _PCSIdentityData *)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg1 publicSharingIdentity:(id)arg2;
- (struct _PCSPublicIdentityData *)createPublicSharingIdentityFromPublicKey:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentityData *)createSharingIdentityFromData:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)copyIdentitySetWithType:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)identitySet:(struct _PCSIdentitySetData *)arg1 containsPublicKey:(id)arg2 error:(id *)arg3;
- (id)internalServicesToCombineWithLiverpoolKey;
- (id)liverpoolPublicKey;
- (_Bool)serviceIsManatee:(id)arg1;
- (_Bool)manateeIsAvailableWithError:(id *)arg1;
- (struct _PCSIdentitySetData *)_copyTestAccountIdentitySetForService:(id)arg1 forBackingFakeAccount:(id)arg2 withError:(id *)arg3;
- (struct _PCSIdentitySetData *)_createIdentitySetForService:(id)arg1 dsid:(id)arg2 error:(id *)arg3;
- (id)_cacheIdentitySet:(struct _PCSIdentitySetData *)arg1 forService:(id)arg2;
- (_Bool)_hasCurrentKeyForService:(id)arg1 inIdentitySet:(struct _PCSIdentitySetData *)arg2 withError:(id *)arg3;
- (struct _PCSIdentitySetData *)_createSpecialInMemorySetCombiningLiverpoolWithServiceNamed:(id)arg1 dsid:(id)arg2 error:(id *)arg3;
- (struct _PCSIdentitySetData *)_copyIdentityForService:(id)arg1 useCache:(_Bool)arg2 validateCurrentKey:(_Bool)arg3 error:(id *)arg4;
- (id)_copyPublicKeyDataForIdentitySet:(struct _PCSIdentitySetData *)arg1 withService:(unsigned long long)arg2 withError:(id *)arg3;
- (id)_copyPublicKeyDataForAllIdentitiesInSet:(struct _PCSIdentitySetData *)arg1 withService:(unsigned long long)arg2;
- (id)_addIdentitiesFromServiceNamed:(id)arg1 dsid:(id)arg2 toMutableSet:(struct _PCSIdentitySetData *)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKDZonePCSData, CKRecordZoneID;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation

{
    _Bool _shouldCreateZoneishPCS;
}

@property (nonatomic, readonly) _Bool needsZoneishPCS;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (nonatomic) _Bool shouldCreateZoneishPCS;

- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (void)_fetchDepedentPCSInSharedDatabase;
- (void)_saveZoneToServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveZoneToServer:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 zoneishPCS:(struct _OpaquePCSShareProtection *)arg3 previousEtag:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_saveNewPCSOnDefaultZone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_decryptZonePCSInSharedDatabase;
- (void)_decryptZonePCSUsingServiceIdentities;
- (void)_handleDecryptedZonePCSData:(id)arg1 withError:(id)arg2;
- (id)itemTypeName;
- (_Bool)hasAllPCSData;
- (void)_willRetryFetch;
- (_Bool)_fetchPCSDataFromDatabase;
- (_Bool)_fetchDependentPCS;
- (_Bool)_fetchPCSDataFromServer;
- (_Bool)_createAdditionalPCS;
- (_Bool)_decryptPCS;
- (_Bool)_saveUpdatedPCSToServer;
- (_Bool)_savePCSDataToCache;

@end

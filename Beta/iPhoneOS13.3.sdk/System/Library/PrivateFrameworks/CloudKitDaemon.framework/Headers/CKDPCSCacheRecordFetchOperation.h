/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKDRecordPCSData, CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

{
    _Bool _serverRecordHasNoProtectionData;
    NSString *_serverRecordType;
}

@property (nonatomic, readonly) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) _Bool serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (id)itemTypeName;
- (_Bool)hasAllPCSData;
- (_Bool)_fetchPCSDataFromDatabase;
- (_Bool)_fetchDependentPCS;
- (_Bool)_fetchPCSDataFromServer;
- (_Bool)_createAdditionalPCS;
- (_Bool)_decryptPCS;
- (_Bool)_savePCSDataToCache;
- (_Bool)needsChainPCSCreation;
- (_Bool)_fetchPCSForPrivateZone;
- (_Bool)_fetchDependentPCSInSharedDatabase;
- (_Bool)_decryptRecordPCSInPrivateDatabase;
- (_Bool)_decryptRecordPCSInSharedDatabase;

@end

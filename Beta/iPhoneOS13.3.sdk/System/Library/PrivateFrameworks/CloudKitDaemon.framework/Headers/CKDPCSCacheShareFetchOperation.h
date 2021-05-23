/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKDSharePCSData, CKRecordID;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (nonatomic, readonly) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (id)itemTypeName;
- (_Bool)hasAllPCSData;
- (_Bool)_fetchPCSDataFromDatabase;
- (_Bool)_fetchPCSDataFromServer;
- (_Bool)_decryptPCS;
- (_Bool)_savePCSDataToCache;

@end

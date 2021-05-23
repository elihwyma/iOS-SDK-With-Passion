/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDPCSCache, CKDPCSData, CKDRecordPCSData, NSError, NSObject, NSString;

@protocol CKSQLiteItem, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheFetchOperation : CKDDatabaseOperation

{
    _Bool _willRetryFetchSuperCalled;
    _Bool _didFetchData;
    _Bool _wasFetchedFromCache;
    _Bool _shouldRetry;
    _Bool _pcsDataInvalidated;
    int _numRetries;
    NSObject<OS_dispatch_group> *_fetchGroup;
    CKDPCSCache *_cache;
    id <CKSQLiteItem> _itemID;
    unsigned long long _fetchOptions;
    CKDPCSData *_pcsData;
    NSError *_fetchError;
    NSError *_dependentPCSFetchError;
    CKDRecordPCSData *_parentPCSData;
}

@property (retain, nonatomic) CKDPCSCache *cache;
@property (nonatomic) _Bool willRetryFetchSuperCalled;
@property (retain, nonatomic) id <CKSQLiteItem> itemID;
@property (nonatomic) unsigned long long fetchOptions;
@property (nonatomic) _Bool didFetchData;
@property (retain, nonatomic) CKDPCSData *pcsData;
@property (retain, nonatomic) NSError *fetchError;
@property (retain, nonatomic) NSError *dependentPCSFetchError;
@property (nonatomic) _Bool wasFetchedFromCache;
@property (nonatomic) int numRetries;
@property (nonatomic) _Bool shouldRetry;
@property (retain, nonatomic) CKDRecordPCSData *parentPCSData;
@property (nonatomic, readonly) _Bool hasAllPCSData;
@property (nonatomic, readonly) NSString *itemTypeName;
@property (getter=isPCSDataInvalidated) _Bool pcsDataInvalidated;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *fetchGroup;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (_Bool)canBeUsedForOperation:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)_errorShouldImpactFlowControl:(id)arg1;
- (_Bool)makeStateTransition;
- (void)_willRetryFetch;
- (_Bool)_fetchPCSDataFromDatabase;
- (_Bool)_fetchDependentPCS;
- (_Bool)_fetchPCSDataFromServer;
- (_Bool)_createAdditionalPCS;
- (_Bool)_decryptPCS;
- (_Bool)_saveUpdatedPCSToServer;
- (_Bool)_savePCSDataToCache;
- (_Bool)needsAdditionalPCSCreation;

@end

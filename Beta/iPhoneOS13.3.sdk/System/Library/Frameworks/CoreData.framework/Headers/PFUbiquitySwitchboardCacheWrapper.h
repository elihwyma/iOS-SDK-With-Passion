/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSLock, NSString, PFUbiquityGlobalObjectIDCache, PFUbiquityKnowledgeVector, PFUbiquityLocation, PFUbiquityPeerRangeCache, PFUbiquityPeerReceipt, PFUbiquityTransactionHistoryCache, PFUbiquityTransactionLogCache;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboardCacheWrapper : NSObject

{
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    PFUbiquityPeerRangeCache *_peerRangeCache;
    PFUbiquityTransactionLogCache *_transactionLogCache;
    PFUbiquityTransactionHistoryCache *_transactionHistoryCache;
    PFUbiquityKnowledgeVector *_kv;
    PFUbiquityKnowledgeVector *_baselineKV;
    PFUbiquityPeerReceipt *_peerReceipt;
    _Bool _pendingReceiptWrite;
    NSLock *_receiptFileLock;
    _Bool _allowSchedulingOfReceiptFileWrites;
}

@property (nonatomic, readonly) PFUbiquityGlobalObjectIDCache *globalIDCache;
@property (nonatomic, readonly) PFUbiquityPeerRangeCache *peerRangeCache;
@property (nonatomic, readonly) PFUbiquityTransactionLogCache *transactionLogCache;
@property (nonatomic, readonly) PFUbiquityTransactionHistoryCache *transactionHistoryCache;
@property (nonatomic, readonly) PFUbiquityPeerReceipt *peerReceipt;
@property (retain) PFUbiquityKnowledgeVector *kv;
@property (retain) PFUbiquityKnowledgeVector *baselineKV;
@property (nonatomic, readonly) NSString *localPeerID;
@property (retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) NSString *storeName;

- (id)init;
- (void)dealloc;
- (void)scheduleReceiptFileWrite:(id)arg1;
- (void)cacheWrapperWillBeRemovedFromEntry;
- (id)initWithStoreName:(id)arg1 privateStore:(id)arg2 forLocalPeerID:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (void)_appWillResignActive:(id)arg1;
- (_Bool)writeReceiptFile:(_Bool)arg1 error:(id *)arg2;

@end

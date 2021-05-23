/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/SBKTransaction.h>

@class NSArray, NSString, NSURL;

@protocol SBKSyncTransactionProcessing;

@interface SBKSyncTransaction : SBKTransaction

{
    NSString *_syncAnchor;
    NSString *_domain;
    NSArray *_keysToUpdate;
    NSArray *_keysToDelete;
    long long _conflictDetectionType;
    id <SBKSyncTransactionProcessing> _transactionProcessor;
    long long _type;
    NSURL *_syncRequestURL;
}

@property (readonly) long long type;
@property (readonly) long long conflictDetectionType;
@property (readonly) NSURL *syncRequestURL;
@property (copy, readonly) NSString *syncAnchor;
@property (readonly) NSArray *keysToUpdate;
@property (readonly) NSArray *keysToDelete;
@property (weak) id <SBKSyncTransactionProcessing> transactionProcessor;

- (id)description;
- (id)domain;
- (id)requestURL;
- (id)newRequest;
- (id)clampsKey;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)conflictDetectionOrdinalForKey:(id)arg1;
- (id)keyValuePairForUpdatedKey:(id)arg1;
- (id)initWithStoreBagContext:(id)arg1 syncAnchor:(id)arg2 keysToUpdate:(id)arg3 keysToDelete:(id)arg4 conflictDetectionType:(long long)arg5;
- (id)initWithSyncRequestURL:(id)arg1 domain:(id)arg2 syncAnchor:(id)arg3 keysToUpdate:(id)arg4 keysToDelete:(id)arg5 conflictDetectionType:(long long)arg6;
- (void)_validateTransactionProcessor:(id)arg1;

@end

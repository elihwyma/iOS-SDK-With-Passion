/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/SBKRequestHandler.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString, SBKSyncResponseData, SBKTransactionController;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBKSyncRequestHandler : SBKRequestHandler

{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_overrideResponseDomainVersion;
    SBKSyncResponseData *_responseData;
    NSMutableArray *_responseUpdatedKeys;
    NSMutableArray *_responseDeletedKeys;
    NSMutableArray *_responseConflictedKeys;
    NSMutableDictionary *_responseDataByKey;
    SBKTransactionController *_transactionController;
}

@property (readonly) SBKSyncResponseData *responseData;
@property (readonly) SBKTransactionController *transactionController;
@property (copy) NSString *responseDomainVersion;
@property (readonly) NSArray *responseUpdatedKeys;
@property (readonly) NSArray *responseDeletedKeys;
@property (readonly) NSArray *responseConflictedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)conflictDetectionType;

- (id)initWithBagContext:(id)arg1;
- (void)clearTransactionResponseData;
- (void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
- (void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
- (void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(_Bool)arg4 isDirty:(_Bool *)arg5;
- (void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(_Bool *)arg3;
- (id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;
- (void)startTransactionWithSyncAnchor:(id)arg1 keysToUpdate:(id)arg2 keysToDelete:(id)arg3 finishedBlock:(CDUnknownBlockType)arg4;
- (void)_onQueue_clearTransactionResponseData;
- (id)responseDataForResponseKey:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSEnumerator, SBKSyncResponseData, SBKSyncTransaction;

__attribute__((visibility("hidden")))
@interface SBKSyncResponseDataKeyEnumerator : NSObject

{
    _Bool _resolvedConflictsNeedSyncToServer;
    SBKSyncResponseData *_responseData;
    SBKSyncTransaction *_transaction;
    CDUnknownBlockType _completionBlock;
    NSEnumerator *_updatedKeysEnumerator;
    NSEnumerator *_conflictedKeysEnumerator;
    NSEnumerator *_deletedKeysEnumerator;
}

@property (retain) SBKSyncResponseData *responseData;
@property (retain) SBKSyncTransaction *transaction;
@property (copy) CDUnknownBlockType completionBlock;
@property _Bool resolvedConflictsNeedSyncToServer;
@property (retain) NSEnumerator *updatedKeysEnumerator;
@property (retain) NSEnumerator *conflictedKeysEnumerator;
@property (retain) NSEnumerator *deletedKeysEnumerator;

- (id)initWithResponseData:(id)arg1;
- (void)enumerateKeysInResponseForTransaction:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_processNextKey;
- (void)_processUpdatedKey:(id)arg1 isConflict:(_Bool)arg2 isDirty:(_Bool *)arg3;
- (void)_processDeletedKey:(id)arg1 isDirty:(_Bool *)arg2;

@end

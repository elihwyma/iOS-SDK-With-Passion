/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYStoreSessionOwner.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SYStoreResetSessionOwner : SYStoreSessionOwner

{
    NSMutableArray *_buffer;
    long long _bufferedState;
    CDUnknownBlockType _fetchNextBatch;
}

@property (copy, nonatomic) CDUnknownBlockType fetchNextBatch;

- (id)init;
- (_Bool)isResetSync;
- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (long long)_sendBufferedChanges:(CDUnknownBlockType)arg1;

@end

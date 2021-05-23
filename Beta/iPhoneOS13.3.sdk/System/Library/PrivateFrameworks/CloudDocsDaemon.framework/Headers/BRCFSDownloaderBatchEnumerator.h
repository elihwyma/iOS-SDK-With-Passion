/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCSyncContext, PQLResultSet;

__attribute__((visibility("hidden")))
@interface BRCFSDownloaderBatchEnumerator : NSObject

{
    long long _now;
    long long *_retryQueueKick;
    PQLResultSet *_rs;
    BRCSyncContext *_syncContext;
}

@property (nonatomic, readonly) BRCSyncContext *syncContext;

- (void)close;
- (id)etag;
- (long long)completedUnitCount;
- (id)initWithSyncContext:(id)arg1 kind:(int)arg2 now:(long long)arg3 retryQueueKick:(long long *)arg4;
- (id)nextDocumentItem;
- (id)stageID;

@end

/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileDB, NSMutableArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOTileDBWriteQueue : NSObject

{
    unsigned long long _maxOperations;
    unsigned long long _maxOperationsSizeInBytes;
    NSMutableArray *_pendingOperations;
    GEOTileDB *_db;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _pendingSizeInBytes;
}

- (id)init;
- (void)addOperation:(id)arg1;
- (void)_prunePendingOperationsSupercededByOperationOnIsolationQueue:(id)arg1;
- (void)flushPendingOperations:(_Bool)arg1;
- (void)_flushPendingOperations;
- (id)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(_Bool *)arg4;
- (id)initWithDB:(id)arg1 maxOperations:(unsigned long long)arg2 maxOperationsSizeInBytes:(unsigned long long)arg3;
- (void)dropAllPendingOperations;
- (void)prunePendingOperationsSupercededByOperation:(id)arg1;

@end

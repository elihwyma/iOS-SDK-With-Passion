/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileKeyList, GEOTileKeyMap, GEOTileRequester, NSString;

@protocol GEOBatchOpportunisticTileDownloaderDelegate, OS_dispatch_group, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface GEOBatchOpportunisticTileDownloader : NSObject

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_os_log> *_log;
    NSString *_logPrefix;
    NSObject<OS_dispatch_group> *_preparationGroup;
    id <GEOBatchOpportunisticTileDownloaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_countryCode;
    NSString *_regionCode;
    _Bool _canceled;
    _Bool _paused;
    struct GEOOnce_s _finished;
    GEOTileRequester *_activeRequester;
    GEOTileKeyList *_remainingKeysForActiveRequester;
    unsigned long long _numberOfTilesAttempted;
    unsigned long long _successfulTiles;
    unsigned long long _failedTiles;
    unsigned long long _bytesDownloaded;
    CDUnknownBlockType _tileRequesterCreationBlock;
    GEOTileKeyMap *_currentStaleETags;
    GEOTileKeyMap *_currentStaleData;
}

@property (nonatomic, readonly) unsigned long long numberOfTilesConsidered;
@property (nonatomic, readonly) unsigned long long numberOfTilesAttempted;
@property (nonatomic, readonly) unsigned long long successfulTiles;
@property (nonatomic, readonly) unsigned long long failedTiles;
@property (nonatomic, readonly) unsigned long long bytesDownloaded;

+ (unsigned char)_reason;

- (id)init;
- (void)cancel;
- (void)pause;
- (void)resume;
- (void)_finish;
- (void)tileRequesterFinished:(id)arg1;
- (_Bool)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2 forKey:(struct _GEOTileKey)arg3;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSetDB:(unsigned int)arg4 tileSet:(id)arg5 etag:(id)arg6 forKey:(struct _GEOTileKey)arg7 userInfo:(id)arg8;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 countryCode:(id)arg3 region:(id)arg4 log:(id)arg5 logPrefix:(id)arg6 tileRequesterCreationBlock:(CDUnknownBlockType)arg7;
- (void)determineNextBatchWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)downloadDidSucceedForTile:(struct _GEOTileKey *)arg1 downloadSize:(unsigned long long)arg2 httpStatus:(unsigned int)arg3;
- (void)downloadDidFailForTile:(struct _GEOTileKey *)arg1 error:(id)arg2;
- (void)_startRequesterForKeys:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3;
- (void)_requestNextBatch;

@end

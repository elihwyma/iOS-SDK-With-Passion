/*
 Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FMFMapCache : NSObject

{
    _Bool _fileProtectionDeactivated;
    NSMutableDictionary *_cacheMetaData;
    NSMutableDictionary *_gridImageMetaData;
    NSMutableDictionary *_noLocationImageMetaData;
    NSMutableDictionary *_mapImageMetaData;
    NSMutableDictionary *_pendingMapImageMetaData;
    NSString *_cachePath;
    NSString *_imageCachePath;
    NSDate *_lastPruneDate;
    NSObject<OS_dispatch_queue> *_cacheMetaQueue;
    NSObject<OS_dispatch_queue> *_gridImageQueue;
    NSObject<OS_dispatch_queue> *_noLocationImageQueue;
    NSObject<OS_dispatch_queue> *_mapImageQueue;
    NSObject<OS_dispatch_queue> *_pendingImageQueue;
    double _mapLocationDistanceThreshold;
}

@property (retain, nonatomic) NSMutableDictionary *cacheMetaData;
@property (retain, nonatomic) NSMutableDictionary *gridImageMetaData;
@property (retain, nonatomic) NSMutableDictionary *noLocationImageMetaData;
@property (retain, nonatomic) NSMutableDictionary *mapImageMetaData;
@property (retain, nonatomic) NSMutableDictionary *pendingMapImageMetaData;
@property (retain, nonatomic) NSString *cachePath;
@property (retain, nonatomic) NSString *imageCachePath;
@property (retain, nonatomic) NSDate *lastPruneDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheMetaQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *gridImageQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *noLocationImageQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mapImageQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pendingImageQueue;
@property (nonatomic) double mapLocationDistanceThreshold;
@property (nonatomic) _Bool fileProtectionDeactivated;

- (id)init;
- (void)flushCache;
- (id)cachedGridImageForWidth:(double)arg1 andHeight:(double)arg2;
- (void)cacheGridImage:(id)arg1 forWidth:(double)arg2 andHeight:(double)arg3;
- (id)cachedNoLocationImageForWidth:(double)arg1 andHeight:(double)arg2;
- (void)cacheNoLocationImage:(id)arg1 forWidth:(double)arg2 andHeight:(double)arg3;
- (id)cachedMapImageForRequest:(id)arg1;
- (_Bool)pendingMapImageForRequest:(id)arg1;
- (void)cacheMapImage:(id)arg1 forRequest:(id)arg2;
- (void)readMetaData;
- (id)gridKeyForWidth:(double)arg1 andHeight:(double)arg2;
- (void)saveMetaData;
- (id)noLocationKeyForWidth:(double)arg1 andHeight:(double)arg2;
- (void)pruneCacheIfNeeded;
- (double)pruneIntervalInSeconds;
- (double)cacheExpiryInSeconds;
- (id)cachedMapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;
- (void)cacheMapImage:(id)arg1 forLocation:(id)arg2 altitude:(double)arg3 pitch:(double)arg4 width:(double)arg5 andHeight:(double)arg6;
- (_Bool)pendingMapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;
- (id)mapImageKeyForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;

@end

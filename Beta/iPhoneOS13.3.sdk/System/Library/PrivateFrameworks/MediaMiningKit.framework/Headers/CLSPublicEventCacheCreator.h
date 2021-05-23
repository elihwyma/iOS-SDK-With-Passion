/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSPublicEventCache;

@interface CLSPublicEventCacheCreator : NSObject

{
    _Bool _simulatesTimeout;
    CLSPublicEventCache *_cache;
    unsigned long long _maximumBatchSize;
    double _queryRadius;
}

@property (nonatomic, readonly) CLSPublicEventCache *cache;
@property (nonatomic, readonly) double queryRadius;
@property (nonatomic) _Bool simulatesTimeout;
@property (nonatomic, readonly) unsigned long long maximumBatchSize;

- (id)initWithCache:(id)arg1 queryRadius:(double)arg2;
- (id)createCacheForTimeLocationTuples:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_queryEventsForTimeLocationTuples:(id)arg1 invalidationTokens:(out id *)arg2 progressBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;

@end

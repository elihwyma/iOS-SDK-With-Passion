/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATAssetLinkPowerLogger : NSObject

{
    NSMutableDictionary *_aggregation;
    NSObject<OS_dispatch_queue> *_loggerQueue;
    NSObject<OS_dispatch_source> *_flushTimer;
}

@property (retain) NSMutableDictionary *aggregation;
@property (retain) NSObject<OS_dispatch_queue> *loggerQueue;
@property (retain) NSObject<OS_dispatch_source> *flushTimer;

+ (id)sharedInstance;

- (id)init;
- (void)_scheduleFlushTimer;
- (void)logAssetLinkOfType:(long long)arg1 didBeginDownloadingAsset:(id)arg2;
- (void)logAssetLinkOfType:(long long)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;
- (id)_aggregatesForKey:(id)arg1 createIfNotExistsWithTimestamp:(id)arg2;
- (void)_incrementCountForAggregates:(id)arg1 key:(id)arg2;
- (void)_flushMessagesToPowerlog;

@end

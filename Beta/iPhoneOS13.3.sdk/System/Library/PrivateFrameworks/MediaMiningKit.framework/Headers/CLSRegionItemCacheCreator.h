/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol OS_os_log;

@interface CLSRegionItemCacheCreator : NSObject

{
    _Bool _simulatesTimeout;
    NSObject<OS_os_log> *_loggingConnection;
    double _timeoutInterval;
    unsigned long long _numberOfRetries;
    NSArray *_queryPerformers;
}

@property (nonatomic, getter=isSimulatingTimeout) _Bool simulatesTimeout;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) unsigned long long numberOfRetries;
@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) NSArray *queryPerformers;

+ (id)businessItemsForRegion:(id)arg1;

- (id)initWithQueryPerformers:(id)arg1;
- (_Bool)createCacheForRegions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;

@end

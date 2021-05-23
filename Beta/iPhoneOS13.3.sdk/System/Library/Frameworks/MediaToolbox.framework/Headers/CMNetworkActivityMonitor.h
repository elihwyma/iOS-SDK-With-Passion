/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h>

@class CMNetworkActivityObserver;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CMNetworkActivityMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _networkIsActive;
    CMNetworkActivityObserver *_cmObserver;
    long long _showingNetworkActivityCount;
    long long _monitoringActiveCount;
}

@property (retain, nonatomic, setter=setCMObserver:) CMNetworkActivityObserver *cmObserver;
@property (nonatomic) long long showingNetworkActivityCount;
@property (nonatomic) long long monitoringActiveCount;
@property (nonatomic) _Bool networkIsActive;

+ (id)sharedActivityMonitor;

- (id)init;
- (void)dealloc;
- (void)beginMonitoring;
- (void)endMonitoring;

@end

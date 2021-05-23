/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSMutableArray, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCQoSMonitorManager

{
    NSMutableArray *_monitors;
    NSMutableDictionary *_sources;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    long long _reportingInterval;
    NSMutableArray *_moitors;
}

@property (nonatomic, readonly) NSMutableArray *moitors;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (_Bool)doesQoSSourceExistForStreamToken:(id)arg1;
- (void)registerQoSReportingSourceForToken:(long long)arg1;
- (void)unregisterQoSReportingSourceForToken:(long long)arg1;
- (void)updateQoSReport:(id)arg1 toClientsWithToken:(long long)arg2;

@end

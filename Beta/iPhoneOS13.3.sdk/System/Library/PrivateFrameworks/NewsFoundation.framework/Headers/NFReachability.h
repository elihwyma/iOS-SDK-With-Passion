/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_monitor;

@interface NFReachability : NSObject

{
    long long _currentReachabilityStatus;
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSObject<OS_nw_path_monitor> *_networkPathMonitor;
    NSObject<OS_nw_path> *_currentNetworkPath;
}

@property long long currentReachabilityStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observationQueue;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor;
@property (retain, nonatomic) NSObject<OS_nw_path> *currentNetworkPath;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_updateCurrentNetworkPath:(id)arg1;
- (long long)_statusFromNetworkPath:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_monitor;

@interface GEONetworkObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_nw_path_monitor> *_monitor;
    NSObject<OS_nw_path> *_currentPath;
    _Bool _initialized;
    _Bool _networkReachable;
    _Bool _networkConstrained;
}

@property (nonatomic, readonly, getter=isNetworkReachable) _Bool networkReachable;
@property (nonatomic, readonly, getter=isNetworkConstrained) _Bool networkConstrained;
@property (nonatomic, readonly, getter=isCellConnection) _Bool cellConnection;

+ (id)sharedNetworkObserver;

- (id)init;
- (void)dealloc;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)initializeIfNecessary;
- (void)_networkPathUpdated:(id)arg1;
- (void)_initializeNetworkMonitor;

@end

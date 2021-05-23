/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSMutableArray, NSString, RadiosPreferences;

@protocol OS_dispatch_queue, QLNetworkStateListener;

@interface QLNetworkStateObserver : NSObject

{
    unsigned long long _stack;
    NSObject<OS_dispatch_queue> *_queue;
    struct {
        long long version;
        void *info;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType copyDescription;
    } _networkReachabilityContext;
    struct __SCNetworkReachability *_reachability;
    int _iCloudDriveReachabilityToken;
    unsigned int _reachabilityFlags;
    RadiosPreferences *_radiosPreferences;
    NSMutableArray *_completionBlocks;
    unsigned long long _networkState;
    id <QLNetworkStateListener> _remoteObserver;
}

@property (nonatomic, readonly) unsigned long long networkState;
@property (retain, nonatomic) id <QLNetworkStateListener> remoteObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)usingRemoteNetworkObserver;
+ (_Bool)networkAccessShouldGoThroughCloudDocsDaemon;

- (id)init;
- (void)dealloc;
- (void)_update;
- (void)airplaneModeChanged;
- (void)updateState:(unsigned long long)arg1;
- (void)startObserving;
- (void)stopObserving;
- (void)_commonInit;
- (_Bool)isConnected;
- (void)_updateNetworkActivityIndicator;
- (_Bool)isWifiCapable;
- (void)pushOperation;
- (void)popOperation;
- (void)_updateRemoteObserver;
- (void)_updateNetworkStateWithFlags:(unsigned int)arg1;
- (void)_setNetworkState:(unsigned long long)arg1;
- (void)_updateNetworkStateWithNotifyToken:(int)arg1;
- (void)_unregisterReachability;
- (void)_updateCompletionBlocks;
- (void)setNetworkState:(unsigned long long)arg1;
- (void)networkStateWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

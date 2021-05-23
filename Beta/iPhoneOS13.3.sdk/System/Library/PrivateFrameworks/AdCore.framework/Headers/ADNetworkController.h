/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol OS_dispatch_queue;

@interface ADNetworkController : NSObject

{
    struct __SCDynamicStore *_store;
    NSTimer *_notificationTimer;
    int _networkType;
    struct __SCNetworkReachability *_reachability;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _canReachTheNetwork;
    _Bool _isUpdating;
}

@property _Bool canReachTheNetwork;
@property _Bool isUpdating;

+ (id)sharedNetworkController;

- (void)start;
- (int)networkType;
- (void)_updateStatus:(_Bool)arg1;
- (void)_checkForNetworkAndNotify;
- (id)getDataContext:(id)arg1;
- (int)dataIndicatorToConnection:(int)arg1;
- (int)cellNetworkType;
- (void)_checkForNetwork;

@end

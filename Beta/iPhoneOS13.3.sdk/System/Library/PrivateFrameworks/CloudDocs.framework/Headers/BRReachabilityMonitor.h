/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface BRReachabilityMonitor : NSObject

{
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability *_reachabilityRef;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned int reachabilityFlags;
@property (nonatomic, readonly) _Bool isNetworkReachable;

+ (_Bool)isNetworkReachableForFlags:(unsigned int)arg1;
+ (id)sharedReachabilityMonitor;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end

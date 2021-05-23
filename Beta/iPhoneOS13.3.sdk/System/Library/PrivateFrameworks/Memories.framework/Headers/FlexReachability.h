/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface FlexReachability : NSObject

{
    _Bool _isNotifying;
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
    NSObject<OS_dispatch_queue> *_reachabilityQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilityQueue;

+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;

- (id)init;
- (void)dealloc;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (_Bool)connectionRequired;
- (long long)currentReachabilityStatus;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (_Bool)interventionRequired;

@end

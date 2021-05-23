/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface Reachability : NSObject

{
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;

- (void)dealloc;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (_Bool)connectionRequired;
- (long long)currentReachabilityStatus;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (_Bool)interventionRequired;

@end

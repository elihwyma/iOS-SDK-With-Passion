/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@interface CLSReachability : NSObject

{
    struct __SCNetworkReachability *_reachabilityRef;
    _Bool _localWiFiRef;
}

+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;

- (void)dealloc;
- (_Bool)connectionRequired;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (id)initWithNetworkReachability:(struct __SCNetworkReachability *)arg1;
- (long long)_localWiFiStatusForFlags:(unsigned int)arg1;
- (long long)_networkStatusForFlags:(unsigned int)arg1;
- (long long)currentNetworkStatus;

@end

/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@interface OFReachability : NSObject

{
    struct __SCNetworkReachability *_reachabilityRef;
    _Bool _localWiFiRef;
}

+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;

- (id)init;
- (void)dealloc;
- (_Bool)connectionRequired;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (long long)_localWiFiStatusForFlags:(unsigned int)arg1;
- (long long)_networkStatusForFlags:(unsigned int)arg1;
- (long long)currentNetworkStatus;

@end

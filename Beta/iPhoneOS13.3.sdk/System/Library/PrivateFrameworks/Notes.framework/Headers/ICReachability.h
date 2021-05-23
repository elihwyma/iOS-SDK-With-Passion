/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@interface ICReachability : NSObject

{
    _Bool _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)sharedReachabilityForInternetConnection;

- (void)dealloc;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (_Bool)connectionRequired;
- (long long)currentReachabilityStatus;
- (void)stopNotifier;
- (_Bool)startNotifier;

@end

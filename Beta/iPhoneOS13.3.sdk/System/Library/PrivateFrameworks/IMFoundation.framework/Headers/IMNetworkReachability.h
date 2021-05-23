/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@interface IMNetworkReachability : NSObject

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
- (long long)currentReachabilityStatus;

@end

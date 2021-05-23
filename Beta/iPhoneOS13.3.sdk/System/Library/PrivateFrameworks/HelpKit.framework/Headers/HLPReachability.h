/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@interface HLPReachability : NSObject

{
    _Bool _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability *_reachabilityRef;
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

@end

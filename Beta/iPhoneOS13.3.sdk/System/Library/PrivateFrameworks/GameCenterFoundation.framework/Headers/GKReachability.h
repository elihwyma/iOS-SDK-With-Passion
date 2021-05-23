/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@interface GKReachability : NSObject

{
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)_gkReachabilityForInternetConnection;
+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)_gkReachabilityWithHostName:(id)arg1;
+ (id)_gkReachabilityForLocalWiFi;

- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (int)_gkCurrentReachabilityStatus;
- (_Bool)_gkStartNotifier;
- (void)_gkStopNotifier;
- (_Bool)_gkConnectionRequired;

@end

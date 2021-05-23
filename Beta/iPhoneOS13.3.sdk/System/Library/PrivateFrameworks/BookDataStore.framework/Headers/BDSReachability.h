/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@interface BDSReachability : NSObject

{
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (_Bool)isOffline;
+ (id)sharedReachabilityForInternetConnection;
+ (void)_updateIsOffline;

- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (_Bool)connectionRequired;
- (int)currentReachabilityStatus;
- (void)stopNotifier;
- (_Bool)startNotifier;

@end

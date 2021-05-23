/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@interface TPSReachability : NSObject

{
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityForInternetConnection;

- (void)dealloc;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (_Bool)connectionRequired;
- (long long)currentReachabilityStatus;
- (void)stopNotifier;
- (_Bool)startNotifier;

@end

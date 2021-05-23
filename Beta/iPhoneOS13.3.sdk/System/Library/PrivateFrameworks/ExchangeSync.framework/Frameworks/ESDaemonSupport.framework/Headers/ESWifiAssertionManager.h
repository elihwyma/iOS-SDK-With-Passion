/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <Foundation/NSObject.h>

@interface ESWifiAssertionManager : NSObject

{
    int _refCount;
}

+ (struct __WiFiManagerClient *)_getWiFiClientRef;
+ (id)sharedWifiAssertionManager;

- (void)retainWifiAssertion;
- (void)releaseWifiAssertion;

@end

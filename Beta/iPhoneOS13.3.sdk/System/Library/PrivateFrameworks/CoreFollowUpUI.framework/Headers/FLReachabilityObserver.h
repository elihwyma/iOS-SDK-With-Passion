/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

#import <Foundation/NSObject.h>

@interface FLReachabilityObserver : NSObject

{
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;

+ (_Bool)isNetworkReachable;
+ (_Bool)isAirplaneModeActiveWithoutWifi;

- (void)dealloc;
- (void)_reachabilityChanged:(id)arg1;
- (void)disableAirplaneModeAndWaitForNetworkWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

#import <Foundation/NSObject.h>

@interface VUINetworkReachabilityMonitor : NSObject

{
    _Bool _networkReachable;
    id _networkTypeChangedNotificationToken;
    id _networkReachabilityChangedNotificationToken;
}

@property (getter=isNetworkReachable) _Bool networkReachable;
@property (retain, nonatomic) id networkTypeChangedNotificationToken;
@property (retain, nonatomic) id networkReachabilityChangedNotificationToken;

+ (id)sharedInstance;
+ (_Bool)_isNetworkReachable;

- (id)init;
- (id)_init;
- (void)_updateNetworkReachability;

@end

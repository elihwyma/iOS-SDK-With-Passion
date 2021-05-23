/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface VCPInternetReachability : NSObject

{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct __SCNetworkReachability *_reachability;
    _Bool _hasWifiOrEthernetConnection;
}

@property (nonatomic, readonly) _Bool hasWifiOrEthernetConnection;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setReachabilityForFlags:(unsigned int)arg1 update:(_Bool)arg2;

@end

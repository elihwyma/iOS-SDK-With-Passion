/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@class NSString, TPSReachability;

@interface TPSReachabilityManager : NSObject

{
    _Bool _notifying;
    _Bool _hostActive;
    _Bool _reachabilityInitialized;
    _Bool _connected;
    _Bool _internetActive;
    NSString *_hostName;
    TPSReachability *_internetReachability;
    TPSReachability *_hostReachability;
}

@property (nonatomic) _Bool reachabilityInitialized;
@property (nonatomic) _Bool connected;
@property (nonatomic) _Bool internetActive;
@property (retain, nonatomic) NSString *hostName;
@property (retain, nonatomic) TPSReachability *internetReachability;
@property (retain, nonatomic) TPSReachability *hostReachability;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (void)reachabilityChanged:(id)arg1;
- (void)stopNotifier;
- (void)startNotifier;
- (void)updateStatus:(id)arg1;
- (_Bool)isNetworkError:(id)arg1;

@end

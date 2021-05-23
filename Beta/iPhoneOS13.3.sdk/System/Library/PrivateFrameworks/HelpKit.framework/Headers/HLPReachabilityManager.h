/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@class HLPReachability, NSString;

@protocol HLPReachabilityManagerDelegate;

@interface HLPReachabilityManager : NSObject

{
    _Bool _notifying;
    _Bool _hostActive;
    _Bool _reachabilityInitialized;
    _Bool _connected;
    _Bool _internetActive;
    id <HLPReachabilityManagerDelegate> _delegate;
    HLPReachability *_internetReachability;
    HLPReachability *_hostReachability;
    NSString *_hostName;
}

@property (nonatomic) _Bool reachabilityInitialized;
@property (nonatomic) _Bool connected;
@property (nonatomic) _Bool internetActive;
@property (weak, nonatomic) id <HLPReachabilityManagerDelegate> delegate;
@property (retain, nonatomic) HLPReachability *internetReachability;
@property (retain, nonatomic) HLPReachability *hostReachability;
@property (retain, nonatomic) NSString *hostName;

- (id)init;
- (void)dealloc;
- (void)reachabilityChanged:(id)arg1;
- (void)stopNotifier;
- (void)startNotifier;
- (_Bool)isNetworkError:(id)arg1;

@end

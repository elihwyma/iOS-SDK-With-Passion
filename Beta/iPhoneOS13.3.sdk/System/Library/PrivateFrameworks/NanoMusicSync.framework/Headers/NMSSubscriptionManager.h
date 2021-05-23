/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSString;

@protocol OS_dispatch_queue;

@interface NMSSubscriptionManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    long long _icStatusType;
    ACAccount *_activeAccount;
    unsigned long long _subscriptionStatus;
    unsigned long long _failedGetSubscriptionStatusAttempts;
}

@property (nonatomic, readonly) unsigned long long subscriptionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (unsigned long long)_statusWithActiveAccount:(id)arg1 icStatusType:(long long)arg2;
- (void)_updateICSubscriptionStatusType;
- (void)_handleICSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_updateActiveAccount;
- (void)_updateSubscriptionStatus;

@end

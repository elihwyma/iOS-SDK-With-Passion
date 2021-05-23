/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSError;

@protocol OS_dispatch_queue;

@interface CKDAccountManateeObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_statusQueue;
    long long _manateeAvailableForLoggedInAccount;
    NSError *_lastCDPError;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) long long manateeAvailableForLoggedInAccount;
@property (copy, nonatomic) NSError *lastCDPError;

+ (id)sharedObserver;

- (id)init;
- (void)dealloc;
- (_Bool)isManateeAvailable:(id *)arg1;
- (_Bool)accountSupportsManatee:(id)arg1;
- (void)statusForCurrentlyLoggedInAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)_fetchManateeAvailability:(id *)arg1;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (void)handleUpdateNotificationWithAvailability:(id)arg1;

@end

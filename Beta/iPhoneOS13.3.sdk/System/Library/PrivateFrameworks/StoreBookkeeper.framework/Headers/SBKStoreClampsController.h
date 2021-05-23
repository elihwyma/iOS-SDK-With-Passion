/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

#import <StoreBookkeeper/Swift-Protocol.h>

@class NSData, NSDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBKStoreClampsController : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_transactionClamps;
    double _accountIdentifierCheckTimestamp;
    double _authenticationNeededTimestamp;
    double _userAcceptedSyncTimestamp;
    double _networkingBlockedUntil;
    double _backOffUntil;
    double _userCancelledSignInBackOffUntil;
    double _nextUserCancelBackOffInterval;
    NSData *_pendingUserDefaultArchivedData;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSDictionary *transactionClamps;
@property double accountIdentifierCheckTimestamp;
@property double authenticationNeededTimestamp;
@property double userAcceptedSyncTimestamp;
@property double networkingBlockedUntil;
@property double backOffUntil;
@property double userCancelledSignInBackOffUntil;
@property double nextUserCancelBackOffInterval;
@property (retain) NSData *pendingUserDefaultArchivedData;

+ (_Bool)supportsSecureCoding;
+ (id)sharedClampsController;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (void)saveToUserDefaults;
- (void)accessTransactionClampsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOnType:(id)arg1 error:(id *)arg2;
- (void)clearAccountIdentifierCheckTimestamp;
- (void)clearAuthenticationRequest;
- (void)clearBackOff;
- (void)clearNetworkingBlocked;
- (void)clearUserAcceptedSyncTimestamp;
- (void)clearUserCancelledSignIn;
- (id)_keyForTransaction:(id)arg1;
- (double)_rightNow;
- (void)clearTimestampForTransaction:(id)arg1;
- (_Bool)isNetworkingBlocked;
- (_Bool)canScheduleTransaction:(id)arg1 error:(id *)arg2;
- (void)setTimestampForTransaction:(id)arg1;
- (void)setAccountIdentifierCheckTimestamp;
- (void)setAuthenticationRequest;
- (_Bool)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id *)arg2;
- (void)setUserAcceptedSyncTimestamp;
- (_Bool)hasUserRecentlyAcceptedSync;
- (void)setUserCancelledSignIn;
- (void)backOffForTimeInterval:(double)arg1;
- (void)setNetworkingBlocked;

@end

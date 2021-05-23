/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDate, NSMutableArray, SSVSubscriptionStatus, SSVSubscriptionStatusRequest;

@protocol OS_dispatch_queue;

@interface SSVSubscriptionStatusCoordinator : NSObject

{
    SSVSubscriptionStatusRequest *_activeRequest;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _didReset;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSVSubscriptionStatus *_lastKnownStatus;
    NSDate *_lastStatusDate;
    int _notificationToken;
    long long _subscriptionStatusAccessPolicy;
    NSMutableArray *_statusBlocks;
}

@property (copy, readonly) SSVSubscriptionStatus *lastKnownStatus;

+ (id)sharedCoordinator;
+ (id)copyStatusFromUserDefaults;
+ (void)updateUserDefaultsWithStatus:(id)arg1;
+ (id)_existingSharedCoordinator;
+ (id)_changeNotificationSuspensionAccessQueue;
+ (void)_sendChangeNotification;
+ (void)sendChangeNotification;
+ (void)beginSuspendingSubscriptionStatusChangeNotifications;
+ (void)endSuspendingSubscriptionStatusChangeNotifications;
+ (void)removeUserDefaultsForAccountIdentifier:(id)arg1;
+ (void)updateWithResponseDictionary:(id)arg1 accountIdentifier:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)_externalChangeNotification;
- (void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(_Bool)arg1;
- (void)_accountStoreChangedNotification;
- (void)_deviceStoreFrontChangedNotification;
- (id)_copyValidStatusForStatus:(id)arg1;
- (id)_copyStatusDateFromUserDefaults;
- (id)_copyStatusFromUserDefaults;
- (void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(_Bool)arg2 error:(id)arg3;
- (void)_validateLastKnownStatus;
- (void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(_Bool)arg2 error:(id)arg3;
- (void)getStatusWithOptions:(id)arg1 statusBlock:(CDUnknownBlockType)arg2;
- (void)modifyLastKnownStatusUsingBlock:(CDUnknownBlockType)arg1;
- (void)_invalidateLastKnownStatus;

@end

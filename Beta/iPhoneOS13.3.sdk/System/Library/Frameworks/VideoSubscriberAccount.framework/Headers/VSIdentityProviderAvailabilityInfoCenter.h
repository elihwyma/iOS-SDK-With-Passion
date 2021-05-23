/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, VSDeveloperServiceConnection, VSPreferences, VSRemoteNotifier, VSStoreURLBag;

@interface VSIdentityProviderAvailabilityInfoCenter : NSObject

{
    _Bool _hasDeterminedInitialStatus;
    long long _status;
    NSOperationQueue *_privateQueue;
    VSRemoteNotifier *_remoteNotifier;
    VSStoreURLBag *_bag;
    VSPreferences *_preferences;
    VSDeveloperServiceConnection *_developerServiceConnection;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (nonatomic) _Bool hasDeterminedInitialStatus;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSStoreURLBag *bag;
@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) VSDeveloperServiceConnection *developerServiceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultCenter;
+ (_Bool)automaticallyNotifiesObserversOfStatus;

- (id)init;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)_accountStoreChanged:(id)arg1;
- (void)_beginStatusUpdateAttemptWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_sendStatusChangeNotification;
- (void)determineIdentityProviderAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString, VSRemoteNotifier, VSSubscriptionPersistentContainer, VSSubscriptionPredicateFactory;

__attribute__((visibility("hidden")))
@interface VSSubscriptionRegistry : NSObject

{
    VSRemoteNotifier *_remoteNotifier;
    VSSubscriptionPersistentContainer *_persistentContainer;
    VSSubscriptionPredicateFactory *_predicateFactory;
}

@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSSubscriptionPersistentContainer *persistentContainer;
@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)_fetchRequest;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)_sendRemoteNotification;
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerSubscription:(id)arg1;
- (void)removeSubscriptions:(id)arg1;
- (void)_installedAppsDidChange:(id)arg1;
- (long long)_saveChangesToContext:(id)arg1 withDate:(id)arg2;
- (id)_securityTaskForCurrentConnection;
- (id)_subscriptionEntity;
- (id)_predicateForCurrentConnectionWithRequestKind:(long long)arg1;
- (_Bool)_saveChangesToContext:(id)arg1;
- (id)_predicateForPersistentAttributesOfSubscriptions:(id)arg1 withEntity:(id)arg2 forFiltering:(_Bool)arg3;

@end

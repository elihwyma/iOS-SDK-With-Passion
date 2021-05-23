/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString, VSDelayOperation, VSLinkedOnOrAfterChecker, VSRemoteNotifier, VSSecurityTask, VSSubscriptionFetchOptionsValidator, VSSubscriptionPredicateFactory, VSSubscriptionServiceConnection;

@interface VSSubscriptionRegistrationCenter : NSObject

{
    VSSubscriptionPredicateFactory *_predicateFactory;
    VSSubscriptionFetchOptionsValidator *_fetchOptionsValidator;
    NSOperationQueue *_privateQueue;
    NSMutableDictionary *_subscriptionsByOptions;
    VSDelayOperation *_expirationOperation;
    VSRemoteNotifier *_remoteNotifier;
    VSSubscriptionServiceConnection *_connection;
    VSSecurityTask *_currentTask;
    VSLinkedOnOrAfterChecker *_linkedOnOrAfterChecker;
}

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSMutableDictionary *subscriptionsByOptions;
@property (retain, nonatomic) VSDelayOperation *expirationOperation;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSSubscriptionServiceConnection *connection;
@property (retain, nonatomic) VSSecurityTask *currentTask;
@property (retain, nonatomic) VSLinkedOnOrAfterChecker *linkedOnOrAfterChecker;
@property (retain) VSSubscriptionPredicateFactory *predicateFactory;
@property (retain) VSSubscriptionFetchOptionsValidator *fetchOptionsValidator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultSubscriptionRegistrationCenter;

- (id)init;
- (void)dealloc;
- (id)_serviceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerSubscription:(id)arg1;
- (void)removeSubscriptions:(id)arg1;
- (_Bool)_shouldRaiseExceptionsForMisuse;
- (void)_sendLocalNotificationWithUserInfo:(id)arg1;
- (void)_refreshCachedSubscriptions;
- (void)_resetExpirationOperation;
- (_Bool)_shouldAllowAccessToSubscription:(id)arg1;
- (void)setCurrentSubscription:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class AnalyticsWorkspace, CoreTelephonyClient, ImpoExpoService, NSMutableDictionary, NSMutableSet, NSNumber, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CoreTelephonyShim : NSObject

{
    CoreTelephonyClient *coreTelephonyClient;
    ImpoExpoService *ieService;
    AnalyticsWorkspace *workspace;
    id flowAnalyticsObserver;
    _Bool initializationComplete;
    NSMutableSet *delegates;
    NSObject<OS_dispatch_queue> *elevatedQueue;
    NSMutableDictionary *_subscriptions;
    struct __CTServerConnection *_ctServerConnection;
    NSMutableDictionary *_subscribers;
    NSNumber *_currentSubscriberTag;
}

@property (nonatomic, readonly) NSMutableDictionary *subscriptions;
@property (nonatomic, readonly) struct __CTServerConnection *ctServerConnection;
@property (nonatomic, readonly) NSMutableDictionary *subscribers;
@property (nonatomic, readonly) NSNumber *currentSubscriberTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)elevatedQueue;

- (id)init;
- (void)dealloc;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)subscriptionInfoDidChange;
- (void)activeSubscriptionsDidChange;
- (void)simLessSubscriptionsDidChange;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (void)signalStrengthChanged:(id)arg1 info:(id)arg2;
- (void)enhancedDataLinkQualityChanged:(id)arg1 metric:(id)arg2;
- (void)currentDataSimChanged:(id)arg1;
- (void)carrierSettingsDidChange;
- (void)_completeInitialization;
- (void)updateSubscribers;
- (id)elevatedQueue;
- (void)handleCTServerNotification:(struct __CFString *)arg1 notificationInfo:(struct __CFDictionary *)arg2;
- (id)dictionaryForSubscriptionContext:(id)arg1;
- (void)updateCurrentSubscriberTag:(id)arg1;
- (_Bool)findSubscriberExactMatchForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3;
- (_Bool)findSubscriberBestMatchForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3 update:(_Bool)arg4;
- (void)addNewSubscriberForICCID:(id)arg1 MDN:(id)arg2 slotID:(long long)arg3;
- (id)getSortedSubscriberKeys;

@end

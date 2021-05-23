/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSMutableDictionary, NSNumber;

@protocol OS_dispatch_queue;

@interface CKScheduler : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_xpcActivitiesByCKActivityIdentifier;
    NSMutableDictionary *_handlersByCKActivityIdentifier;
    NSNumber *_fakeDeviceCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSMutableDictionary *xpcActivitiesByCKActivityIdentifier;
@property (retain, nonatomic) NSMutableDictionary *handlersByCKActivityIdentifier;
@property (copy, nonatomic) NSNumber *fakeDeviceCount;

+ (id)sharedScheduler;
+ (_Bool)shouldReportAnalyticsForActivity:(id)arg1;
+ (id)baseCoreAnalyticsEventPayloadForActivity:(id)arg1;
+ (id)xpcActivityIdentifierForCKActivityIdentifier:(id)arg1;
+ (id)activityFromXPCActivity:(id)arg1;
+ (const char *)xpcActivityPriorityForPriority:(long long)arg1 deviceCount:(long long)arg2;
+ (double)gracePeriodForPriority:(long long)arg1 deviceCount:(long long)arg2;
+ (_Bool)shouldReportAnalyticsForContainerIdentifier:(id)arg1;
+ (id)identifierWithImmediateInvocationForIdentifier:(id)arg1;

- (id)init;
- (id)_init;
- (void)submitActivity:(id)arg1;
- (void)registerActivityIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)unregisterActivityIdentifier:(id)arg1;
- (void)_submitActivity:(id)arg1 withCriteria:(id)arg2;
- (void)getSuggestedXPCActivityCriteriaForActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerXPCActivityWithCKActivityIdentifier:(id)arg1 criteria:(id)arg2;
- (void)runActivityWithIdentifier:(id)arg1 xpcActivity:(id)arg2;
- (void)populateCriteria:(id)arg1 withAdditionalCriteriaFromActivity:(id)arg2;
- (void)getDeviceCountForActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)xpcActivityForActivityWithIdentifier:(id)arg1;
- (_Bool)hasPendingActivityWithActivityIdentifier:(id)arg1;
- (id)activityForActivityIdentifier:(id)arg1;
- (long long)currentPriorityForActivityIdentifier:(id)arg1;
- (void)performAsyncOnQueue:(CDUnknownBlockType)arg1;

@end

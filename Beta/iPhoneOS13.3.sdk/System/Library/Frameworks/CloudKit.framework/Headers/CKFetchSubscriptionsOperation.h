/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation

{
    _Bool _isFetchAllSubscriptionsOperation;
    CDUnknownBlockType _fetchSubscriptionCompletionBlock;
    NSArray *_subscriptionIDs;
    NSArray *_subscriptions;
    NSMutableDictionary *_subscriptionsBySubscriptionID;
    NSMutableDictionary *_subscriptionErrors;
}

@property (retain, nonatomic) NSArray *subscriptions;
@property (retain, nonatomic) NSMutableDictionary *subscriptionsBySubscriptionID;
@property (retain, nonatomic) NSMutableDictionary *subscriptionErrors;
@property (nonatomic) _Bool isFetchAllSubscriptionsOperation;
@property (copy, nonatomic) NSArray *subscriptionIDs;
@property (copy, nonatomic) CDUnknownBlockType fetchSubscriptionCompletionBlock;

+ (id)fetchAllSubscriptionsOperation;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithSubscriptionIDs:(id)arg1;

@end

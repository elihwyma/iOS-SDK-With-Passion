/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation

{
    _Bool _isFetchAllSubscriptionsOperation;
    NSMutableArray *_subscriptions;
    CDUnknownBlockType _subscriptionFetchedProgressBlock;
    NSArray *_subscriptionIDs;
}

@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (nonatomic) _Bool isFetchAllSubscriptionsOperation;
@property (copy, nonatomic) CDUnknownBlockType subscriptionFetchedProgressBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;

@end

/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation

{
    CDUnknownBlockType _modifySubscriptionsCompletionBlock;
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
    NSMutableArray *_savedSubscriptions;
    NSMutableArray *_deletedSubscriptionIDs;
    NSMutableDictionary *_subscriptionsBySubscriptionIDs;
    NSMutableDictionary *_subscriptionErrors;
}

@property (retain, nonatomic) NSMutableArray *savedSubscriptions;
@property (retain, nonatomic) NSMutableArray *deletedSubscriptionIDs;
@property (retain, nonatomic) NSMutableDictionary *subscriptionsBySubscriptionIDs;
@property (retain, nonatomic) NSMutableDictionary *subscriptionErrors;
@property (copy, nonatomic) NSArray *subscriptionsToSave;
@property (copy, nonatomic) NSArray *subscriptionIDsToDelete;
@property (copy, nonatomic) CDUnknownBlockType modifySubscriptionsCompletionBlock;

- (id)init;
- (id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;

@end

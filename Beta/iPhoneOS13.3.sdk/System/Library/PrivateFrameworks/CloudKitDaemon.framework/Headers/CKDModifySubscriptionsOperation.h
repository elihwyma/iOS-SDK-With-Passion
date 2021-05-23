/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifySubscriptionsOperation : CKDDatabaseOperation

{
    CDUnknownBlockType _saveCompletionBlock;
    CDUnknownBlockType _deleteCompletionBlock;
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
    NSMutableDictionary *_subscriptionsByServerID;
}

@property (retain, nonatomic) NSArray *subscriptionsToSave;
@property (retain, nonatomic) NSArray *subscriptionIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *subscriptionsByServerID;
@property (copy, nonatomic) CDUnknownBlockType saveCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType deleteCompletionBlock;

+ (long long)isPredominatelyDownload;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_handleSubscriptionSaved:(id)arg1 error:(id)arg2;
- (void)_handleSubscriptionSaved:(id)arg1 responseCode:(id)arg2;
- (void)_handleSubscriptionDeleted:(id)arg1 responseCode:(id)arg2;

@end

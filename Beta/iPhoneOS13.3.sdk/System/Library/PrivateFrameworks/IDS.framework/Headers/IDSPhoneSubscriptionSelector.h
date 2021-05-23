/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSXPCDaemonController;

@interface IDSPhoneSubscriptionSelector : NSObject

{
    id _syncDaemonController;
    CDUnknownBlockType _syncDaemonControllerBuilder;
}

@property (retain, nonatomic) IDSXPCDaemonController *syncDaemonController;
@property (copy, nonatomic) CDUnknownBlockType syncDaemonControllerBuilder;

- (id)init;
- (id)selectedSubscriptionsWithError:(id *)arg1;
- (void)requestSelectedSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)selectSubscription:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unselectSubscription:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSelectedSubscriptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithSyncDaemonControllerBuilder:(CDUnknownBlockType)arg1;
- (void)_performSyncAction:(CDUnknownBlockType)arg1;
- (id)selectSubscription:(id)arg1 withError:(id *)arg2;
- (id)unselectSubscription:(id)arg1 withError:(id *)arg2;
- (id)setSelectedSubscriptions:(id)arg1 withError:(id *)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCIssueReadingHistory, FCSubscriptionController, NSString;

@protocol FCContentContext;

@interface FCCurrentIssuesChecker : NSObject

{
    id <FCContentContext> _context;
    FCSubscriptionController *_subscriptionController;
    FCIssueReadingHistory *_issueReadingHistory;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) FCSubscriptionController *subscriptionController;
@property (retain, nonatomic) FCIssueReadingHistory *issueReadingHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithContext:(id)arg1 subscriptionController:(id)arg2 issueReadingHistory:(id)arg3;
- (void)fetchUsersCurrentIssuesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_promiseFollowedChannelIDs;
- (id)demoFollowedChannelIDs;
- (id)_promiseCurrentIssuesFromChannelIDs:(id)arg1 withChainingdata:(id)arg2;
- (id)sortIssues:(id)arg1 basedOnTagIDs:(id)arg2;
- (id)_promiseFilterUnreadIssuesWithFromIssues:(id)arg1 withChainingdata:(id)arg2;
- (void)fetchCurrentIssuesWithCompletion:(CDUnknownBlockType)arg1;

@end

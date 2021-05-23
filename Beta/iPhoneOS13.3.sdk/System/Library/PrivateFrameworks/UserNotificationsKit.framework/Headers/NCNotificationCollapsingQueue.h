/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface NCNotificationCollapsingQueue : NSObject

{
    unsigned long long _collapsingThreshold;
    NSMutableArray *_requests;
}

@property (retain, nonatomic) NSMutableArray *requests;
@property (nonatomic) unsigned long long collapsingThreshold;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *enqueuedRequestIdentifiers;

- (id)init;
- (void)addNotificationRequest:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (unsigned long long)_indexOfRequestMatchingNotificationRequest:(id)arg1;
- (void)_insertPreemptingNotificationRequest:(id)arg1;
- (id)peekNextNotificationRequestPassingTest:(CDUnknownBlockType)arg1;
- (id)_collapsedNotificationRequestForNotificationRequest:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)_collapsedCountForCollapsibleRequests:(id)arg1;
- (id)_requestsCollapsibleWithNotificationRequest:(id)arg1;
- (id)_collapsedNotificationRequestFromCollapsibleRequests:(id)arg1;
- (void)replaceNotificationRequest:(id)arg1;
- (_Bool)containsNotificationRequest:(id)arg1;
- (_Bool)containsNotificationRequestMatchingRequest:(id)arg1;
- (id)peekNextNotificationRequest;
- (id)notificationRequestsCoalescebleWithCoalescedRequest:(id)arg1;

@end

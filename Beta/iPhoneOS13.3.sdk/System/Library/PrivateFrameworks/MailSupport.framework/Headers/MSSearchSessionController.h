/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol MSSearchSessionControllerDataSource, OS_dispatch_queue;

@interface MSSearchSessionController : NSObject

{
    int _emailProvider;
    unsigned long long _numberOfMessagesLeftToIndex;
    unsigned long long _percentOfMessagesIndexed;
    NSMutableArray *_mutableSessionEngagements;
    id <MSSearchSessionControllerDataSource> _dataSource;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) unsigned long long numberOfMessagesLeftToIndex;
@property (nonatomic, readonly) unsigned long long percentOfMessagesIndexed;
@property (nonatomic, readonly) int emailProvider;
@property (nonatomic, readonly) NSMutableArray *mutableSessionEngagements;
@property (weak, nonatomic, readonly) id <MSSearchSessionControllerDataSource> dataSource;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) NSArray *sessionEngagements;

- (id)init;
- (void)endSession;
- (id)initWithDataSource:(id)arg1;
- (void)_recordUserDidNotSelectAnyMessage;
- (void)addNewEngagementWithAWDAtoms:(id)arg1 searchScope:(_Bool)arg2 suggestionsEngagements:(id)arg3;
- (void)_recordEngagement:(int)arg1 forMessage:(id)arg2 isTopHit:(_Bool)arg3 messageListIndex:(long long)arg4 spotlightListIndex:(long long)arg5;
- (void)recordUserDidSelectMessage:(id)arg1 isTopHit:(_Bool)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (void)recordUserDidOrbMessage:(id)arg1 isTopHit:(_Bool)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (void)recordUserDidSwipeMessage:(id)arg1 isTopHit:(_Bool)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (void)recordUserDidRightClickMessage:(id)arg1 isTopHit:(_Bool)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4;
- (void)_addToLatestEngagementWithUserEngagement:(id)arg1;
- (void)addNewEngagementWithAtoms:(id)arg1 searchScope:(_Bool)arg2 suggestionsEngagement:(id)arg3;
- (void)updateLastEngagementSearchResultCount:(unsigned long long)arg1;
- (void)recordUserDidSelectMessage:(id)arg1;
- (void)recordUserDidOrbMessage:(id)arg1;
- (void)recordUserDidSwipeMessage:(id)arg1;
- (void)recordUserDidRightClickMessage:(id)arg1;

@end

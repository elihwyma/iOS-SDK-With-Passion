/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class WBSHistory;

@interface WBSRecentHistoryTopicTagController : NSObject

{
    WBSHistory *_history;
    unsigned long long _maximumNumberOfTopics;
    double _timeIntervalBeforeNowForFetchingTags;
}

@property (nonatomic) unsigned long long maximumNumberOfTopics;
@property (nonatomic) double timeIntervalBeforeNowForFetchingTags;

- (id)initWithHistory:(id)arg1;
- (void)loadTopicsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

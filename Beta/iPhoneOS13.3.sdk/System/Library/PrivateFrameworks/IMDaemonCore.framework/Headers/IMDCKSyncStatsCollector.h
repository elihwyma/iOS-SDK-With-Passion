/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMDCKSyncStatsCollector : NSObject

{
    NSMutableDictionary *_inMemorySyncStatistics;
}

@property (retain, nonatomic) NSMutableDictionary *inMemorySyncStatistics;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_incrementCountsForColumnSyncedKey:(id)arg1 syncedColumnAmountToIncrease:(unsigned long long)arg2 totalColumnAmountKey:(id)arg3 totalColumnAmountToIncrease:(unsigned long long)arg4;
- (void)refreshWithDBSyncStatistics;
- (id)currentInMemorySyncStatistics;
- (void)incrementSyncedChatCount:(unsigned long long)arg1 incrementTotalChatCount:(unsigned long long)arg2;
- (void)incrementSyncedMessageCount:(unsigned long long)arg1 incrementTotalMessageCount:(unsigned long long)arg2;
- (void)incrementSyncedAttachmentCount:(unsigned long long)arg1 incrementTotalAttachmentCount:(unsigned long long)arg2;

@end

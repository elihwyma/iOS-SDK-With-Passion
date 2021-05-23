/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSHistoryTag.h>

@class NSArray, NSMutableOrderedSet;

@interface WBSHistoryTopicTag : WBSHistoryTag

{
    NSMutableOrderedSet *_taggedItems;
}

@property (copy, nonatomic, readonly) NSArray *historyItems;

+ (void)initialize;

- (void)dealloc;
- (void)_historyItemsWereRemoved:(id)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 databaseID:(long long)arg3 modificationTimestamp:(double)arg4 level:(long long)arg5;
- (void)removeHistoryItems:(id)arg1;
- (id)initWithTag:(id)arg1 historyItems:(id)arg2;
- (void)tagHistoryItem:(id)arg1;
- (void)groupHistoryItemsBySessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)containsHistoryItem:(id)arg1;

@end

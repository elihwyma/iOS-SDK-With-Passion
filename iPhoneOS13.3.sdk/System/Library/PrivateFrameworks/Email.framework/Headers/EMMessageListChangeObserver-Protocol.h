//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMCollectionChangeObserver-Protocol.h>

@class EMCollection, NSArray, NSDictionary;
@protocol EMCollectionItemID;

@protocol EMMessageListChangeObserver <EMCollectionChangeObserver>
- (void)collection:(EMCollection *)arg1 addedItemIDs:(NSArray *)arg2 toThreadWithItemID:(id <EMCollectionItemID>)arg3 after:(id <EMCollectionItemID>)arg4 unreadItemIDs:(NSArray *)arg5;
- (void)collection:(EMCollection *)arg1 addedItemIDs:(NSArray *)arg2 toThreadWithItemID:(id <EMCollectionItemID>)arg3 before:(id <EMCollectionItemID>)arg4 unreadItemIDs:(NSArray *)arg5;

@optional
- (void)collection:(EMCollection *)arg1 oldestItemsUpdatedForMailboxes:(NSDictionary *)arg2;
- (void)collection:(EMCollection *)arg1 didFinishInitialLoadForThreadWithItemID:(id <EMCollectionItemID>)arg2;
- (void)collection:(EMCollection *)arg1 changedItemIDs:(NSArray *)arg2 itemIDsWithCountChanges:(NSArray *)arg3;
@end


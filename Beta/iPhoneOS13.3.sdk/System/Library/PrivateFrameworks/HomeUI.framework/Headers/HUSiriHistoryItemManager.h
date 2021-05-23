/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFStaticItem, NSObject;

@protocol OS_dispatch_queue;

@interface HUSiriHistoryItemManager : HFItemManager

{
    NSObject<OS_dispatch_queue> *_queue;
    HFStaticItem *_deleteSiriHistoryItem;
}

@property (retain, nonatomic) HFStaticItem *deleteSiriHistoryItem;

- (id)didSelectItemAtIndexPath:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 groupItem:(id)arg2;
- (id)didUpdateItemAtIndexPath:(id)arg1;

@end

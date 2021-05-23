/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItem, HMHome;

@interface HUServiceDetailsItemModule : HFItemModule

{
    HMHome *_home;
    HFItem *_sourceItem;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFItem *sourceItem;

+ (CDUnknownBlockType)serviceDetailsItemSectionComparatorForSortStrategy:(id)arg1;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;

@end

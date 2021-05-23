/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemManager.h>

@class HFStaticItem, HFStatusItemProvider;

@interface HFHomeStatusItemManager : HFItemManager

{
    HFStaticItem *_showDetailsItem;
    unsigned long long _maxStatusItemCount;
    HFStatusItemProvider *_statusItemProvider;
    long long _latestOverallPriority;
    unsigned long long _latestOverallLoadingState;
}

@property (nonatomic) unsigned long long maxStatusItemCount;
@property (retain, nonatomic) HFStaticItem *showDetailsItem;
@property (retain, nonatomic) HFStatusItemProvider *statusItemProvider;
@property (nonatomic) long long latestOverallPriority;
@property (nonatomic) unsigned long long latestOverallLoadingState;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (_Bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)initWithMaxStatusItems:(unsigned long long)arg1 delegate:(id)arg2;
- (id)_showDetailsItemTitle;
- (unsigned long long)_overflowStatusItemCount;
- (long long)_overallPriority;

@end

/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFItemManager, HUQuickControlCollectionViewControllerLayoutOptions, NSArray, NSMutableArray, UICollectionView;

@protocol HUQuickControlCollectionItemManaging;

@interface HUQuickControlGridLayoutManager : NSObject

{
    HUQuickControlCollectionViewControllerLayoutOptions *_layoutOptions;
    HFItemManager<HUQuickControlCollectionItemManaging> *_itemManager;
    UICollectionView *_collectionView;
    NSMutableArray *_sectionSettingsArray;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) HFItemManager<HUQuickControlCollectionItemManaging> *itemManager;
@property (nonatomic, readonly) long long viewSizeSubclass;
@property (retain, nonatomic) NSMutableArray *sectionSettingsArray;
@property (retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions;
@property (nonatomic, readonly) NSArray *collectionSectionSettings;

- (id)init;
- (unsigned long long)numberOfColumnsInSection:(unsigned long long)arg1;
- (void)generateSectionSettings;
- (id)initWithCollectionView:(id)arg1 itemManager:(id)arg2 layoutOptions:(id)arg3;
- (unsigned long long)_mostImportantItemTypeForSection:(unsigned long long)arg1;
- (id)_settingsForSectionNumber:(unsigned long long)arg1 sectionIdentifier:(id)arg2 layoutOptions:(id)arg3;
- (unsigned long long)titlePositionForSection:(unsigned long long)arg1;
- (double)sectionTopPaddingInSection:(unsigned long long)arg1 withLayoutOptions:(id)arg2;
- (unsigned long long)itemSizeForSection:(unsigned long long)arg1;
- (double)interItemSpacingForItemSize:(unsigned long long)arg1 layoutOptions:(id)arg2;
- (id)_viewProfilesForSection:(unsigned long long)arg1;

@end

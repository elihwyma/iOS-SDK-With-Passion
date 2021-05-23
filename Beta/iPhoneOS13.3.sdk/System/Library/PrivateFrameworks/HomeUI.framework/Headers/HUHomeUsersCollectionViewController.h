/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemCollectionViewController.h>

@class HFHomeBuilder, NSString;

@interface HUHomeUsersCollectionViewController : HUItemCollectionViewController

{
    HFHomeBuilder *_homeBuilder;
    double _cellWidth;
    double _cellAvatarDiameter;
}

@property (retain, nonatomic) HFHomeBuilder *homeBuilder;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellAvatarDiameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)_horizontalInset;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (double)_verticalInset;
- (void)_presentAccountUnavailableAlert;
- (id)initWithHomeBuilder:(id)arg1;
- (_Bool)isLayoutDependentOnItemState;

@end

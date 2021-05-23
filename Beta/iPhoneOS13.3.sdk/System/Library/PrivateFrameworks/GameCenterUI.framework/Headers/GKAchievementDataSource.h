/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, NSArray;

@interface GKAchievementDataSource : GKCollectionDataSource

{
    GKGameRecord *_gameRecord;
    NSArray *_achievements;
    NSArray *_localAchievements;
    struct UIEdgeInsets _collectionLayoutInsets;
}

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) NSArray *achievements;
@property (retain, nonatomic) NSArray *localAchievements;
@property (nonatomic) struct UIEdgeInsets collectionLayoutInsets;

- (void)dealloc;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)itemCount;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)itemForIndexPath:(id)arg1;
- (id)sectionHeaderText;
- (id)heightMultipliersForSizeCategories;
- (id)initWithGameRecord:(id)arg1;

@end

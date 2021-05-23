/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, NSArray;

@interface GKChallengeDataSource : GKCollectionDataSource

{
    _Bool _shouldShowPlay;
    GKGameRecord *_gameRecord;
    NSArray *_challenges;
}

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) NSArray *challenges;
@property (nonatomic) _Bool shouldShowPlay;

- (void)dealloc;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)itemCount;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)itemForIndexPath:(id)arg1;
- (id)sectionHeaderText;
- (id)initWithGameRecord:(id)arg1;
- (void)userDidSelectPlay:(id)arg1;

@end

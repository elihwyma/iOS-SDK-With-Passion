/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionViewController.h>

@class GKCollectionViewDataSource, NSArray;

@interface GKBasicCollectionViewController : GKCollectionViewController

{
    id _target;
    NSArray *_metricsForSections;
    GKCollectionViewDataSource *_initialDataSource;
}

@property (retain, nonatomic) NSArray *metricsForSections;
@property (retain, nonatomic) GKCollectionViewDataSource *initialDataSource;
@property (retain, nonatomic) id target;

- (void)dealloc;
- (void)setDataSource:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureDataSource;
- (id)initWithDataSource:(id)arg1 title:(id)arg2;

@end

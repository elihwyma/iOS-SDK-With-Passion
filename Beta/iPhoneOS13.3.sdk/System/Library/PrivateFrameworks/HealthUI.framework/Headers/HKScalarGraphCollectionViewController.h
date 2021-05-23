/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIViewController.h>

#import <HealthUI/Swift-Protocol.h>

@class HKScalarGraphCollectionViewCell, HKUnitPreferenceController, NSArray, NSString, UICollectionView;

@protocol HKScalarGraphCollectionViewDelegate;

@interface HKScalarGraphCollectionViewController : UIViewController <Swift>

{
    NSArray *_audiograms;
    id <HKScalarGraphCollectionViewDelegate> _delegate;
    UICollectionView *_collectionView;
    HKScalarGraphCollectionViewCell *_currentCell;
    long long _currentIndex;
    HKUnitPreferenceController *_unitController;
    double _collectionViewHeight;
    double _minimumHeight;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) HKScalarGraphCollectionViewCell *currentCell;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (nonatomic) double collectionViewHeight;
@property (nonatomic) double minimumHeight;
@property (copy, nonatomic) NSArray *audiograms;
@property (weak, nonatomic) id <HKScalarGraphCollectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reload;
- (struct CGSize)preferredContentSize;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)_buildCollectionViewLayout;
- (id)initWithMinimumHeight:(double)arg1 unitController:(id)arg2;
- (void)_pinView:(id)arg1 toParentGuide:(id)arg2;
- (void)resetToMostRecent;
- (void)resetToIndex:(long long)arg1;
- (void)redrawCurrentCell;
- (void)_setupChartCollectionView;

@end

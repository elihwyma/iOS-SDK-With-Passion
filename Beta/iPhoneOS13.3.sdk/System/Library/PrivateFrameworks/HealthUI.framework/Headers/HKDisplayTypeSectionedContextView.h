/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout;

@protocol HKDisplayTypeSectionedContextViewDelegate;

@interface HKDisplayTypeSectionedContextView : UIView

{
    long long _style;
    _Bool _bottomInsetsEnabled;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSIndexPath *_lastSelectedIndex;
    NSArray *_displayTypeContextSections;
    id <HKDisplayTypeSectionedContextViewDelegate> _delegate;
}

@property (retain, nonatomic) NSArray *displayTypeContextSections;
@property (weak, nonatomic) id <HKDisplayTypeSectionedContextViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)_contentHeight;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)_contentWidth;
- (void)deselectAllItemsAnimated:(_Bool)arg1;
- (id)_buildCollectionViewLayout;
- (void)_handleSelection:(id)arg1 indexPath:(id)arg2 informDelegate:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 useBottomInsets:(_Bool)arg2;
- (double)_preferredCollectionViewHeightForCount:(long long)arg1;
- (long long)_rowsForScreenSize;
- (double)_maximumHeaderLabelLength;

@end

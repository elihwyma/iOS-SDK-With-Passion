/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

#import <HealthUI/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UICollectionView, UICollectionViewFlowLayout;

@protocol HKDisplayTypeContextViewDelegate;

@interface HKDisplayTypeContextView : UIView <Swift>

{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSLayoutConstraint *_collectionHeightConstraint;
    long long _lastSelectedRow;
    NSArray *_displayTypeContextItems;
    id <HKDisplayTypeContextViewDelegate> _delegate;
}

@property (retain, nonatomic) NSArray *displayTypeContextItems;
@property (weak, nonatomic) id <HKDisplayTypeContextViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (id)_backgroundColor;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)preferredHeight;
- (double)_contentHeight;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)selectItemAtIndex:(long long)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (id)_buildCollectionViewLayout;
- (void)_handleSelection:(id)arg1 indexPath:(id)arg2 informDelegate:(_Bool)arg3;
- (void)didTapOnInfoButtonForCollectionViewCell:(id)arg1;

@end

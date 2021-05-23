/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSDictionary, NSString, NTKEditOptionCollection, NTKFace, NTKFaceView, UICollectionView, UICollectionViewFlowLayout, UILabel;

@protocol NTKCFaceDetailEditOptionCellDelegate;

@interface NTKCFaceDetailEditOptionCell : NTKCDetailTableViewCell <Swift>

{
    struct CGRect _swatchFrame;
    double _outlineOutset;
    double _outlinePadding;
    long long _selectedIndex;
    NTKEditOptionCollection *_collection;
    NTKFaceView *_faceView;
    NTKFace *_face;
    NSDictionary *_selectedOptions;
    id <NTKCFaceDetailEditOptionCellDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    UILabel *_optionsDescription;
}

@property (retain, nonatomic) NTKEditOptionCollection *collection;
@property (weak, nonatomic) NTKFaceView *faceView;
@property (weak, nonatomic) NTKFace *face;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) UILabel *optionsDescription;
@property (retain, nonatomic) NSDictionary *selectedOptions;
@property (weak, nonatomic) id <NTKCFaceDetailEditOptionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;

- (double)_spacing;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)rowHeight;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_fontSizeDidChange;
- (void)_setupFromCollection;
- (id)_imageForIndexPath:(id)arg1;
- (void)reloadVisibleCells;
- (id)_dequeueCellForIndexPath:(id)arg1;
- (void)_ensureIndexPathVisible:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)ensureIndexVisible:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithCollection:(id)arg1 forFaceView:(id)arg2 face:(id)arg3;
- (_Bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)scrollToSelectedOption:(_Bool)arg1;
- (void)ensureSelectedOptionVisible:(_Bool)arg1;

@end

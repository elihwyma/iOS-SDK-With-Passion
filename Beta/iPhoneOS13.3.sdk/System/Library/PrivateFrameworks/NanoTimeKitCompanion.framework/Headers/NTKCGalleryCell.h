/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, NTKCGalleryCollection, UICollectionView, UICollectionViewFlowLayout, UILabel, UIStackView, _NTKCAddNewFace;

@protocol NTKCGalleryCellDelegate;

@interface NTKCGalleryCell : UITableViewCell

{
    _Bool _hasCalloutName;
    _Bool _hasCalloutImage;
    _Bool _allSnapshotsLoaded;
    NTKCGalleryCollection *_collection;
    id <NTKCGalleryCellDelegate> _delegate;
    long long _selectedIndex;
    UILabel *_title;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_faceContainerTopConstraint;
    NSLayoutConstraint *_leadingInsetConstraint;
    NSLayoutConstraint *_cvHeightConstraint;
    UIStackView *_titleStack;
    UIStackView *_collectionViewFooterStack;
    UILabel *_footer;
    _NTKCAddNewFace *_addNewFace;
    struct CGSize _itemSize;
}

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) _Bool hasCalloutName;
@property (nonatomic) _Bool hasCalloutImage;
@property (retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *faceContainerTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingInsetConstraint;
@property (retain, nonatomic) NSLayoutConstraint *cvHeightConstraint;
@property (retain, nonatomic) UIStackView *titleStack;
@property (retain, nonatomic) UIStackView *collectionViewFooterStack;
@property (retain, nonatomic) UILabel *footer;
@property (retain, nonatomic) _NTKCAddNewFace *addNewFace;
@property (nonatomic) _Bool allSnapshotsLoaded;
@property (retain, nonatomic) NTKCGalleryCollection *collection;
@property (weak, nonatomic) id <NTKCGalleryCellDelegate> delegate;
@property (nonatomic) struct CGPoint contentOffset;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (double)rowHeightForCollection:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)didMoveToSuperview;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)_fontSizeDidChange;
- (void)ensureCorrectTitleViewOrientation;
- (void)showFooterTextIfNeeded;
- (void)calculateHeightForCollection;
- (_Bool)hasFooterText;
- (_Bool)shouldShowFooterTextInCollectionView;
- (struct CGPoint)_contentInsetPoint;
- (_Bool)_shouldShowAddNewFace;
- (void)updateFaceAtIndex:(unsigned long long)arg1;
- (void)selectFace:(id)arg1;
- (void)clearSelectedFaces;
- (id)faceForLocation:(struct CGPoint)arg1;
- (id)containerViewForFace:(id)arg1;

@end

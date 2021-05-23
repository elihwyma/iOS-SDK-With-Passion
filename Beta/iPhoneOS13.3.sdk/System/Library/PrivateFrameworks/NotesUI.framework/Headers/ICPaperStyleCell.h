/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIView;

@interface ICPaperStyleCell : UICollectionViewCell

{
    UIImageView *_imageView;
    UIView *_selectionView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *selectionView;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setSelected:(_Bool)arg1;
- (void)setupCell;
- (id)preferredTintColor;

@end

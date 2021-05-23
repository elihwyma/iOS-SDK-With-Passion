/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIView, _UIFocusFastScrollingIndexBarEntry;

__attribute__((visibility("hidden")))
@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell

{
    _UIFocusFastScrollingIndexBarEntry *_entry;
    UILabel *_titleLabel;
    UIView *_roundedCornersBackground;
}

@property (retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *entry;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *roundedCornersBackground;

+ (id)cellFont;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)updateForEntry:(id)arg1;
- (void)_updateColors;
- (_Bool)_isAnotherIndexTitleCellFocused;

@end

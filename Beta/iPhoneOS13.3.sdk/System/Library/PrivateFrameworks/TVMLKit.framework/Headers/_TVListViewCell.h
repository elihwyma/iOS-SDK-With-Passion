/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIVisualEffectView, _UIFloatingContentView;

@protocol _TVListViewCellDelegate;

__attribute__((visibility("hidden")))
@interface _TVListViewCell : UICollectionViewCell

{
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIVisualEffectView *_backgroundVisualEffectView;
    _Bool _visualEffectViewBackgroundEnabled;
    _Bool _disabled;
    _Bool _shouldAppearSelected;
    _UIFloatingContentView *_floatingView;
    id <_TVListViewCellDelegate> _delegate;
}

@property (nonatomic) _Bool visualEffectViewBackgroundEnabled;
@property (retain, nonatomic) _UIFloatingContentView *floatingView;
@property (weak, nonatomic) id <_TVListViewCellDelegate> delegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) _Bool shouldAppearSelected;

- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_descendantsShouldHighlight;
- (unsigned long long)_floatingViewControlState;
- (void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1;
- (void)_updateSelectedBackgroundColor;

@end

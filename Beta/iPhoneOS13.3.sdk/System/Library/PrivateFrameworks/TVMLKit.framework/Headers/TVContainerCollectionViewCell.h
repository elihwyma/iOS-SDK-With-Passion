/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewCell.h>

@interface TVContainerCollectionViewCell : UICollectionViewCell

{
    _Bool _pressIsAnimating;
    _Bool _unpressOnEndAnimating;
    _Bool _allowsFocus;
    _Bool _selectSubviews;
}

@property (nonatomic) _Bool allowsFocus;
@property (nonatomic) _Bool selectSubviews;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)_clearPressState;
- (void)_showPressState;
- (void)setFocused:(_Bool)arg1 animated:(_Bool)arg2 context:(id)arg3 coordinator:(id)arg4;

@end

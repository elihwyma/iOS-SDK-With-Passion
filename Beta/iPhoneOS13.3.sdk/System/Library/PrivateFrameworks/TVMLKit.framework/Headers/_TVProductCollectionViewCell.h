/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewCell.h>

@class UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _TVProductCollectionViewCell : UICollectionViewCell

{
    UIView *_titleView;
    struct UIEdgeInsets _activeMargins;
    _Bool _marginActive;
    UIViewController *_viewController;
    struct UIEdgeInsets _partialMargins;
    struct UIEdgeInsets _margins;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) struct UIEdgeInsets partialMargins;
@property (nonatomic) struct UIEdgeInsets margins;

- (void)prepareForReuse;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (id)titleView;
- (void)setTitleView:(id)arg1 margins:(struct UIEdgeInsets)arg2 show:(_Bool)arg3;
- (void)showTitleView:(_Bool)arg1;
- (_Bool)isShowingTitleView;
- (void)enableWithMargins:(struct UIEdgeInsets)arg1;
- (void)disableMargins;

@end

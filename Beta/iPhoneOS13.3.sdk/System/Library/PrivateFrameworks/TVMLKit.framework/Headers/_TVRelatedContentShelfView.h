/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class _TVRelatedWrappingView;

__attribute__((visibility("hidden")))
@interface _TVRelatedContentShelfView : UIView

{
    UIView *_lastFocusedView;
    _TVRelatedWrappingView *_relatedWrappingView;
    UIView *_shelfView;
    UIView *_relatedView;
    double _relatedHeight;
}

@property (weak, nonatomic) UIView *shelfView;
@property (retain, nonatomic) UIView *relatedView;
@property (nonatomic) double relatedHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_layoutRelatedView;

@end

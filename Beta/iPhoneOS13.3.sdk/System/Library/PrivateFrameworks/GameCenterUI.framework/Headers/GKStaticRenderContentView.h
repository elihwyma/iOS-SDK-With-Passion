/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@interface GKStaticRenderContentView : UIView

{
    UIView *_contentView;
}

@property (retain, nonatomic) UIView *contentView;

- (void)dealloc;
- (id)description;
- (void)prepareForReuse;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)prepareToReuseSubviewsOfView:(id)arg1;

@end

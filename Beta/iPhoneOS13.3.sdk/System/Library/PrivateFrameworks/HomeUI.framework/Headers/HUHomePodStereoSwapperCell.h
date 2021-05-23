/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class HUHomePodDetailView, UIButton;

@protocol HUHomePodStereoSwapperCellDelegate;

@interface HUHomePodStereoSwapperCell : UITableViewCell

{
    UIButton *_swapButton;
    HUHomePodDetailView *_leftHomePod;
    HUHomePodDetailView *_rightHomePod;
    id <HUHomePodStereoSwapperCellDelegate> _delegate;
}

@property (nonatomic, readonly) UIButton *swapButton;
@property (nonatomic, readonly) HUHomePodDetailView *leftHomePod;
@property (nonatomic, readonly) HUHomePodDetailView *rightHomePod;
@property (weak, nonatomic) id <HUHomePodStereoSwapperCellDelegate> delegate;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_swap;
- (void)_setupConstraints;

@end

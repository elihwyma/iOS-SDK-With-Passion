/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HFItem, HUGridServiceCell, UIImageView;

@protocol HFServiceLikeItem;

@interface HUHomeAccessoryTileView : UIView

{
    UIImageView *_homeView;
    HUGridServiceCell *_tileView;
}

@property (nonatomic, readonly) UIImageView *homeView;
@property (nonatomic, readonly) HUGridServiceCell *tileView;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *item;
@property (nonatomic, readonly) double aspectRatio;

- (void)layoutSubviews;
- (id)initWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;
- (void)updateUIWithAnimation:(_Bool)arg1;

@end

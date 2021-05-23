/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, UILabel;

@interface MPAVRoutingTableHeaderView : UIView

{
    struct UIEdgeInsets _edgeInsets;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    CAShapeLayer *_borderLayer;
}

- (id)initWithCoder:(id)arg1;
- (void)_init;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_mirroringTitleTextAttributes;
- (id)_mirroringCompactDescription;
- (id)_mirroringCompactDescriptionTextAttributes;

@end

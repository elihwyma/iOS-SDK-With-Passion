/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <WiFiKitUI/WFNetworkListCell.h>

@class NSLayoutConstraint;

@interface WFBuddyNetworkListCell : WFNetworkListCell

{
    NSLayoutConstraint *_trailingImageViewConstraint;
    NSLayoutConstraint *_topLabelConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
}

@property (weak, nonatomic) NSLayoutConstraint *trailingImageViewConstraint;
@property (weak, nonatomic) NSLayoutConstraint *topLabelConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomLabelConstraint;

- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1;
- (void)awakeFromNib;

@end

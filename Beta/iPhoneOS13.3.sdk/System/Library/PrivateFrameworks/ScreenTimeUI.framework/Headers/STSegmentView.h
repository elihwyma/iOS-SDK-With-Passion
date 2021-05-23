/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, STSegmentItem, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface STSegmentView : UIView

{
    _Bool _useVibrancy;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    NSLayoutConstraint *_detailLabelLeadingConstraint;
    UIImageView *_detailImageView;
    NSLayoutConstraint *_detailImageWidthConstraint;
    NSLayoutConstraint *_detailImageHeightConstraint;
    STSegmentItem *_item;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *detailLabel;
@property (nonatomic, readonly) NSLayoutConstraint *detailLabelLeadingConstraint;
@property (nonatomic, readonly) UIImageView *detailImageView;
@property (nonatomic, readonly) NSLayoutConstraint *detailImageWidthConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *detailImageHeightConstraint;
@property (retain, nonatomic) STSegmentItem *item;
@property (readonly) _Bool useVibrancy;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithItem:(id)arg1 useVibrancy:(_Bool)arg2 truncateLabels:(_Bool)arg3;

@end

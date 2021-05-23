/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, WFContentItem;

@interface WFRichContentItemCellView : UIView

{
    _Bool _alwaysLeftAlign;
    _Bool _hasImage;
    UILabel *_titleLabel;
    WFContentItem *_item;
    UILabel *_subtitleLabel;
    UILabel *_altLabel;
    UIImageView *_imageView;
    NSLayoutConstraint *_imageHeightConstraint;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageLeadingConstraint;
    NSArray *_firstRowConstraintsWithAltText;
    NSArray *_firstRowConstraintsWithoutAltText;
    NSArray *_verticalConstraintsWithSubtitle;
    NSArray *_verticalConstraintsWithoutSubtitle;
}

@property (retain, nonatomic) WFContentItem *item;
@property (weak, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) UILabel *altLabel;
@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) _Bool hasImage;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageLeadingConstraint;
@property (copy, nonatomic) NSArray *firstRowConstraintsWithAltText;
@property (copy, nonatomic) NSArray *firstRowConstraintsWithoutAltText;
@property (copy, nonatomic) NSArray *verticalConstraintsWithSubtitle;
@property (copy, nonatomic) NSArray *verticalConstraintsWithoutSubtitle;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic) _Bool alwaysLeftAlign;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSubtitle:(id)arg1;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (double)imageDimension;
- (void)setImage:(id)arg1 options:(id)arg2;
- (void)setSelectableAlertButton:(id)arg1;
- (void)setAttributedAlertButton:(id)arg1;
- (void)setContentAlertButton:(id)arg1;

@end

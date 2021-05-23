/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIButton.h>

@class NSString, UILabel;

@interface WFModuleTitleButton : UIButton

{
    unsigned long long _style;
    UILabel *_subtitleLabel;
}

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) UILabel *subtitleLabel;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)iconSize;
- (struct CGSize)sizeForLabel:(id)arg1 withMaxWidth:(double)arg2;
- (_Bool)isTitleLabelMultiline;
- (double)iconTitlePadding;
- (double)titleSubtitlePadding;

@end

/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIReusableHeaderView.h>

@class NSAttributedString, NSString, UILabel;

@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView

{
    NSAttributedString *_attributedSubtitleText;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSAttributedString *attributedSubtitleText;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)desiredHeightForWidth:(double)arg1;
- (void)_configureSubTitleLabelForBounds:(struct CGRect)arg1;

@end

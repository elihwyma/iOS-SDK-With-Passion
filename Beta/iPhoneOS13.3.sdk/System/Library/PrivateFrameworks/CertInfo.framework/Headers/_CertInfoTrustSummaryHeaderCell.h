/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UITableViewCell.h>

@class NSString, UIImage, UILabel, _CertInfoActionButton, _CertInfoGradientLabel;

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell

{
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _CertInfoActionButton *_actionButton;
    _CertInfoGradientLabel *_trustedLabel;
    _Bool _trusted;
}

@property (weak, nonatomic, readonly) _CertInfoActionButton *actionButton;
@property (nonatomic, readonly) double rowHeight;
@property (copy, nonatomic) NSString *trustTitle;
@property (copy, nonatomic) NSString *trustSubtitle;
@property (nonatomic, getter=isTrusted) _Bool trusted;

- (void)layoutSubviews;
- (id)_titleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_subtitleLabel;
- (void)setExpired:(_Bool)arg1;
- (id)_trustedLabel;
- (void)setActionButtonTitle:(id)arg1 destructive:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_layoutSubviewsWithActionButtonSize:(struct CGSize)arg1;

@end

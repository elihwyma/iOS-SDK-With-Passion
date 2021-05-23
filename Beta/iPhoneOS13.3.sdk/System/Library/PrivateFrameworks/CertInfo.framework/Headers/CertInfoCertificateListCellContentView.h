/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UIView.h>

@class UILabel;

@interface CertInfoCertificateListCellContentView : UIView

{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_expirationLabel;
}

- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)_setupLabel:(id)arg1 isSubtitle:(_Bool)arg2;
- (void)_setText:(id)arg1 forLabel:(id)arg2 withRedColor:(_Bool)arg3;

@end

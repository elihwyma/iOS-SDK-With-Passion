/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UIView.h>

@class CertInfoCertificateDetailsView, NSArray;

@interface CertInfoTrustDetailsView : UIView

{
    NSArray *_certificateViews;
    CertInfoCertificateDetailsView *_currentCertView;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 trustProperties:(id)arg2;
- (void)_appendRemainingCertificates;

@end

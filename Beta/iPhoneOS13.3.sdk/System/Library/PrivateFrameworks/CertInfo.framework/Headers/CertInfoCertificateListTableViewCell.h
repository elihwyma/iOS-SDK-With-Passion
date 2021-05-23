/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UITableViewCell.h>

@class CertInfoCertificateListCellContentView;

@interface CertInfoCertificateListTableViewCell : UITableViewCell

{
    CertInfoCertificateListCellContentView *_certificateContentView;
}

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithTrustDescription:(id)arg1 certificateIndex:(unsigned long long)arg2;

@end

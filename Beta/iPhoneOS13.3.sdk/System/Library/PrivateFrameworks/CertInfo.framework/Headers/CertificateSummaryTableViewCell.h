/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <CertInfo/CertUIItemSummaryCell.h>

@interface CertificateSummaryTableViewCell : CertUIItemSummaryCell

- (void)updateWithCertificateTrust:(struct __SecTrust *)arg1;
- (void)setCertificateName:(id)arg1 issuer:(id)arg2 isRoot:(_Bool)arg3;

@end

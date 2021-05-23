/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <CertInfo/CertUIItemDetailsSummaryCell.h>

@class NSArray;

@interface CertificateDetailsSummaryCell : CertUIItemDetailsSummaryCell

{
    NSArray *_details;
}

@property (retain, nonatomic) NSArray *details;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCertificateTrust:(struct __SecTrust *)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(_Bool)arg3;
- (void)setDetailsWithCertificateTrust:(struct __SecTrust *)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(_Bool)arg3;

@end

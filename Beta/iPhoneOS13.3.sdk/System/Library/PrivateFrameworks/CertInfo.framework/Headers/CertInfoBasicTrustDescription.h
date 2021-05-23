/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <NSObject.h>

@class NSString;

@interface CertInfoBasicTrustDescription : NSObject

{
    struct __SecTrust *_trust;
    int _action;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_expirationDate;
- (_Bool)isTrusted;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2;
- (unsigned long long)certificateCount;
- (id)certificatePropertiesAtIndex:(unsigned long long)arg1;
- (id)summaryTitle;
- (id)summarySubtitle;
- (id)summaryDescriptionItems;
- (id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
- (id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
- (id)certificateExpirationDateAtIndex:(unsigned long long)arg1;
- (_Bool)isRootCertificate;

@end

/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UINavigationController.h>

@class CertificateViewController;

@protocol TrustCertificateViewControllerDelegate;

@interface TrustCertificateViewController : UINavigationController

{
    _Bool _allowCertificateTrust;
    id <TrustCertificateViewControllerDelegate> _trustCertificateDelegate;
    CertificateViewController *_certificateViewController;
}

@property (nonatomic) _Bool allowCertificateTrust;
@property (retain, nonatomic) CertificateViewController *certificateViewController;
@property (weak, nonatomic) id <TrustCertificateViewControllerDelegate> trustCertificateDelegate;

- (void)didReceiveMemoryWarning;
- (void)_cancel;
- (void)setShowCertificateButton:(_Bool)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)_setupNavItem;
- (void)_dismissWithResult:(int)arg1;
- (void)_accept;
- (id)initWithTrustCertificateDelegate:(id)arg1 allowTrust:(_Bool)arg2;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2 delegate:(id)arg3 allowTrust:(_Bool)arg4;
- (id)initWithTrustCertificateDelegate:(id)arg1;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2 delegate:(id)arg3;
- (void)setCertificateInfo:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 isRoot:(_Bool)arg5 properties:(id)arg6 action:(int)arg7;

@end

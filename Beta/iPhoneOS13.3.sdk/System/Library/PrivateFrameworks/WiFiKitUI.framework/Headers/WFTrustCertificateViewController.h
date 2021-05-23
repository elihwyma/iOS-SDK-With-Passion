/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIViewController.h>

#import <WiFiKitUI/Swift-Protocol.h>

@class NSString, TrustCertificateViewController;

@protocol WFCertificateProviderContext;

@interface WFTrustCertificateViewController : UIViewController <Swift>

{
    _Bool _wantsModalPresentation;
    TrustCertificateViewController *_certViewController;
    id <WFCertificateProviderContext> _credentialsContext;
}

@property (retain, nonatomic) TrustCertificateViewController *certViewController;
@property (retain, nonatomic) id <WFCertificateProviderContext> credentialsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsModalPresentation;

- (void)loadView;
- (void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2;
- (id)initWithCertificateProviderContext:(id)arg1;

@end

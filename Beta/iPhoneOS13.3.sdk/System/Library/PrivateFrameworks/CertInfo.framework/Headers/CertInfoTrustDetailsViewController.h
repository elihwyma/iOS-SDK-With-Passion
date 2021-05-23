/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UIViewController.h>

@class NSArray;

@interface CertInfoTrustDetailsViewController : UIViewController

{
    NSArray *_trustProperties;
}

@property (retain, nonatomic) NSArray *trustProperties;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_setupNavItem;

@end

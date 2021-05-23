/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
 */

#import <Preferences/PSViewController.h>

@class NSString, UITextView;

@interface SUSSoftwareUpdateLicenseViewController : PSViewController

{
    NSString *_licenseTextInfo;
    UITextView *_licenseTextView;
}

@property (retain, nonatomic) NSString *licenseTextInfo;
@property (retain, nonatomic) UITextView *licenseTextView;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (id)initWithLicense:(id)arg1;
- (void)setLicenseText:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, UITextView;

@interface PSSoftwareUpdateLicenseViewController

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

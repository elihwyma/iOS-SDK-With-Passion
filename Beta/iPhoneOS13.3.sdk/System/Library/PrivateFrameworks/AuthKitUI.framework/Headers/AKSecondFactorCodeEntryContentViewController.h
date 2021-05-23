/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UIViewController.h>

@class AKAppleIDAuthenticationContext, AKBasicLoginContentViewController, AKCodeEntryView, NSArray, NSString;

@interface AKSecondFactorCodeEntryContentViewController : UIViewController

{
    AKCodeEntryView *_codeGeneratorView;
    AKBasicLoginContentViewController *_titleHeaderViewController;
    AKAppleIDAuthenticationContext *_authenticationContext;
    NSArray *_activeConstraints;
}

@property (retain, nonatomic) AKCodeEntryView *codeGeneratorView;
@property (retain, nonatomic) AKBasicLoginContentViewController *titleHeaderViewController;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic, readonly) NSString *generatedCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateViewConstraints;
- (void)setPasscodeFieldDisabled:(_Bool)arg1;
- (void)_configureTitleHeaderView;
- (void)_configureCodeGenView;
- (void)_updateFontContstraints:(id)arg1;
- (void)jiggleAView;
- (void)clearSecondFactorEntry;

@end

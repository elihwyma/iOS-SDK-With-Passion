/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSViewController.h>

@class CNFRegController, NSString, UIBarButtonItem, UIButton;

@protocol CNFRegFirstRunDelegate;

@interface CNFRegSplashScreenController : PSViewController

{
    UIButton *_learnMoreButton;
    id <CNFRegFirstRunDelegate> _delegate;
    CNFRegController *_regController;
}

@property (retain, nonatomic) CNFRegController *regController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) id <CNFRegFirstRunDelegate> delegate;
@property (nonatomic, readonly) long long currentAppearanceStyle;
@property (retain, nonatomic) UIBarButtonItem *customLeftButton;
@property (retain, nonatomic) UIBarButtonItem *customRightButton;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willBecomeActive;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_learnMorePressed:(id)arg1;
- (id)userInteractionColor;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (void)_getStartedPressed:(id)arg1;

@end

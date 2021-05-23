/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <OnBoardingKit/OBBaseWelcomeController.h>

@class NSString, UIActivityIndicatorView, UILabel;

@protocol BFFFlowItemDelegate;

@interface BFFSpinnerController : OBBaseWelcomeController

{
    id <BFFFlowItemDelegate> _delegate;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) id <BFFFlowItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cloudConfigSkipKey;

- (id)_textStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updateLayout;
- (long long)_activityIndicatorViewStyle;
- (_Bool)isEphemeral;
- (_Bool)_useAccessibilityLayout;
- (_Bool)shouldAllowStartOver;
- (_Bool)shouldSuppressExtendedInitializationActivityIndicator;
- (id)initWithSpinnerText:(id)arg1;

@end

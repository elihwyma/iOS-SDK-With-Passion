/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@class NSString, OBPrivacyFlow, UIButton, UILabel;

@interface OBPrivacySplashController

{
    OBPrivacyFlow *_flow;
    _Bool _suppressPerPageAnalyticsLogging;
    _Bool _allowsOpeningSafari;
    _Bool _showLinkToPrivacyGateway;
    _Bool _showsLinkToUnifiedAbout;
    _Bool _useSmallTitle;
    _Bool _forceLargeMargins;
    _Bool _useModalStyle;
    _Bool _isCombined;
    NSString *_displayLanguage;
    unsigned long long _displayDeviceType;
    UIButton *_linkToPrivacyGatewayButton;
    UILabel *_privacyGatewayDescription;
    UILabel *_linkToPrivacyGateway;
    UIButton *_unifiedAboutButton;
    CDUnknownBlockType _defaultButtonHandler;
}

@property (retain) UIButton *linkToPrivacyGatewayButton;
@property (retain) UILabel *privacyGatewayDescription;
@property (retain) UILabel *linkToPrivacyGateway;
@property (retain) UIButton *unifiedAboutButton;
@property (copy) CDUnknownBlockType defaultButtonHandler;
@property _Bool suppressPerPageAnalyticsLogging;
@property _Bool allowsOpeningSafari;
@property (nonatomic) _Bool showLinkToPrivacyGateway;
@property _Bool showsLinkToUnifiedAbout;
@property _Bool useSmallTitle;
@property _Bool forceLargeMargins;
@property (retain) NSString *displayLanguage;
@property unsigned long long displayDeviceType;
@property _Bool useModalStyle;
@property (nonatomic) _Bool isCombined;

+ (id)splashPageWithBundleIdentifier:(id)arg1;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_defaultButtonTitle;
- (id)initWithPrivacyIdentifier:(id)arg1;
- (id)initWithFlow:(id)arg1;
- (void)_initializeFromBundle;
- (void)showPrivacyGateway:(id)arg1;
- (void)showUnifiedAbout:(id)arg1;
- (void)updateFontForPrivacyGateway;
- (void)updateFontForUnifiedAboutButton;
- (void)defaultButtonPressed:(id)arg1;
- (void)setDismissHandlerForDefaultButton:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, OBPrivacyCombinedController, OBPrivacySplashController, UIViewController;

@interface OBPrivacyPresenter : NSObject

{
    _Bool _darkMode;
    _Bool _usesFullScreenPresentation;
    _Bool _animatePresentAndDismiss;
    CDUnknownBlockType _dismissHandler;
    OBPrivacySplashController *_splashController;
    OBPrivacyCombinedController *_combinedController;
    NSString *_displayLanguage;
    UIViewController *_presentingViewController;
    long long _modalPresentationStyle;
    unsigned long long _supportedInterfaceOrientations;
    struct UIViewController *_presentedController;
    NSArray *_presentedIdentifiers;
    CDUnknownBlockType _presentationCompletionHandler;
}

@property (retain) OBPrivacySplashController *splashController;
@property (retain) OBPrivacyCombinedController *combinedController;
@property (retain) UIViewController *presentedController;
@property (retain) NSArray *presentedIdentifiers;
@property (copy) CDUnknownBlockType presentationCompletionHandler;
@property (nonatomic) _Bool animatePresentAndDismiss;
@property (copy) CDUnknownBlockType dismissHandler;
@property (retain, nonatomic) NSString *displayLanguage;
@property (weak) UIViewController *presentingViewController;
@property (nonatomic) _Bool darkMode;
@property (nonatomic) _Bool usesFullScreenPresentation;
@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;

+ (id)presenterForPrivacySplashWithIdentifier:(id)arg1;
+ (id)presenterForPrivacyUnifiedAbout;
+ (id)presenterForPrivacySplashWithBundle:(id)arg1;
+ (id)presenterForPrivacySplashWithIdentifer:(id)arg1;
+ (id)presenterForPrivacySplashWithBundleAtPath:(id)arg1;
+ (id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1;

- (void)dismiss;
- (void)present;
- (void)presentInNavigationStack:(id)arg1;
- (void)_presenterDidDismiss;

@end

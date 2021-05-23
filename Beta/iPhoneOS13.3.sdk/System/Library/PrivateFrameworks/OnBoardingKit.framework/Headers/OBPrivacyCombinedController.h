/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSString;

@interface OBPrivacyCombinedController : OBTableWelcomeController

{
    _Bool _allowsOpeningSafari;
    _Bool _presentedFromPrivacyPane;
    NSString *_displayLanguage;
}

@property _Bool allowsOpeningSafari;
@property (retain) NSString *displayLanguage;
@property _Bool presentedFromPrivacyPane;

+ (id)new;
+ (void)presentPrivacyCombinedControllerOverController:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithIdentifiers:(id)arg1;

@end

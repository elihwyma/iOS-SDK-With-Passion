/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <OnBoardingKit/OBTextWelcomeController.h>

@interface HKFitnessDiagnosticsRequestViewController : OBTextWelcomeController

+ (void)presentInViewController:(id)arg1;
+ (_Bool)needsRequestedPermission;

- (void)viewDidLoad;
- (_Bool)shouldInlineButtonTray;
- (void)_showDataCollectionAdditionalInfo;
- (void)_enableDataCollection;
- (void)_disableDataCollection;

@end

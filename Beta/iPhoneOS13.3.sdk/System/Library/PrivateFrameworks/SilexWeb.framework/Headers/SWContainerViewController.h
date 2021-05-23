/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <UIKit/UIViewController.h>

@class SWDeveloperSettings, SWViewController;

@protocol SWConfigurationManager, SWErrorProvider, SWInteractionProvider, SWPresentationManager;

@interface SWContainerViewController : UIViewController

{
    id <SWInteractionProvider> _interactionProvider;
    id <SWErrorProvider> _errorProvider;
    id <SWConfigurationManager> _configurationManager;
    id <SWPresentationManager> _presentationManager;
    SWDeveloperSettings *_developerSettings;
    SWViewController *_webContentViewController;
}

@property (nonatomic, readonly) SWViewController *webContentViewController;
@property (nonatomic, readonly) id <SWInteractionProvider> interactionProvider;
@property (nonatomic, readonly) id <SWErrorProvider> errorProvider;
@property (nonatomic, readonly) id <SWConfigurationManager> configurationManager;
@property (nonatomic, readonly) id <SWPresentationManager> presentationManager;
@property (retain, nonatomic) SWDeveloperSettings *developerSettings;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadURL:(id)arg1;
- (_Bool)allowUserInteractionForInteractionType:(unsigned long long)arg1;
- (id)initWithWebContentViewController:(id)arg1 interactionProvider:(id)arg2 errorProvider:(id)arg3 configurationManager:(id)arg4 presentationManager:(id)arg5;

@end

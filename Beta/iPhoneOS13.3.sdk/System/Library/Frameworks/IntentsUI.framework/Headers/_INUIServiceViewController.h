/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <UIKit/UIViewController.h>

@class INInteraction, NSString;

@protocol INUIHostedViewControlling;

__attribute__((visibility("hidden")))
@interface _INUIServiceViewController : UIViewController

{
    UIViewController<INUIHostedViewControlling> *_hostedViewController;
    INInteraction *_currentInteraction;
    unsigned long long _currentContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (_Bool)_isSecureForRemoteViewService;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)addChildViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)viewWasCancelled;
- (void)desiresInteractivity:(CDUnknownBlockType)arg1;
- (void)queryRepresentedPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_errorHandlingRemoteViewControllerProxy;
- (struct CGSize)_constrainedSizeForDesiredSize:(struct CGSize)arg1;

@end

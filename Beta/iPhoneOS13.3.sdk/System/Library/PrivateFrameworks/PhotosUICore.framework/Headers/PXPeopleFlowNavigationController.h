/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UINavigationController.h>

@class NSString, UIBarButtonItem, UIViewController;

@protocol PXPeopleFlowController, PXPeopleFlowViewController;

@interface PXPeopleFlowNavigationController : UINavigationController

{
    id <PXPeopleFlowController> _flowController;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    UIViewController<PXPeopleFlowViewController> *_currentViewController;
}

@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *backButton;
@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIViewController<PXPeopleFlowViewController> *currentViewController;
@property (retain, nonatomic) id <PXPeopleFlowController> flowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_updateActions;
- (void)back:(id)arg1;
- (void)next:(id)arg1;
- (void)requestCancel;
- (void)requestAdvanceToNextInFlow;
- (void)setAdvanceButtonEnabled:(_Bool)arg1;
- (id)initWithFlowController:(id)arg1;

@end

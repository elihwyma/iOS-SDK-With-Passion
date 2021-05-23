/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSString, OBWelcomeController;

@protocol WFImportQuestionContainerViewControllerDelegate;

@interface WFImportQuestionContainerViewController : UIViewController

{
    _Bool _backButtonHidden;
    id <WFImportQuestionContainerViewControllerDelegate> _delegate;
    OBWelcomeController *_welcomeController;
}

@property (retain, nonatomic) OBWelcomeController *welcomeController;
@property (weak, nonatomic) id <WFImportQuestionContainerViewControllerDelegate> delegate;
@property (nonatomic) _Bool backButtonHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)didTapCancel;
- (void)galleryImportQuestionViewDidUpdateContentSize:(id)arg1;
- (id)initWithImportQuestion:(id)arg1 isLastQuestion:(_Bool)arg2 backButtonHidden:(_Bool)arg3;
- (id)welcomeControllerForImportQuestion:(id)arg1 isLastQuestion:(_Bool)arg2;
- (void)didTapBack;
- (void)didTapNext;
- (void)didTapSkip;

@end

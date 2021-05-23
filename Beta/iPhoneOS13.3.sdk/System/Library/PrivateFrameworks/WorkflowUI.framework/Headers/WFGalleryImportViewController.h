/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UIActivityIndicatorView, UIBarButtonItem, VCUIShortcutViewController, WFGalleryWorkflow, WFImportQuestionContainerViewController, WFSharedShortcut, WFWorkflow, WFWorkflowIcon, WFWorkflowRecord;

@protocol WFGalleryImportViewControllerDelegate;

@interface WFGalleryImportViewController : UIViewController <Swift>

{
    _Bool _previewingFor3DTouch;
    _Bool _importingSharedShortcut;
    _Bool _skipServicesConfirmation;
    _Bool _showSharingManagement;
    id <WFGalleryImportViewControllerDelegate> _delegate;
    WFGalleryWorkflow *_galleryWorkflow;
    WFSharedShortcut *_sharedShortcut;
    WFWorkflow *_workflow;
    NSString *_loggingContext;
    WFWorkflowRecord *_workflowRecord;
    NSString *_name;
    WFWorkflowIcon *_icon;
    unsigned long long _currentImportQuestionIndex;
    VCUIShortcutViewController *_shortcutViewController;
    WFImportQuestionContainerViewController *_importQuestionViewController;
    UIBarButtonItem *_rightButtonItem;
    UIActivityIndicatorView *_activityIndicator;
}

@property (nonatomic, readonly) WFWorkflowRecord *workflowRecord;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) WFWorkflowIcon *icon;
@property (nonatomic) unsigned long long currentImportQuestionIndex;
@property (nonatomic, readonly) _Bool skipServicesConfirmation;
@property (weak, nonatomic) VCUIShortcutViewController *shortcutViewController;
@property (weak, nonatomic) WFImportQuestionContainerViewController *importQuestionViewController;
@property (weak, nonatomic) UIBarButtonItem *rightButtonItem;
@property (weak, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) _Bool showSharingManagement;
@property (weak, nonatomic) id <WFGalleryImportViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFGalleryWorkflow *galleryWorkflow;
@property (nonatomic, readonly) WFSharedShortcut *sharedShortcut;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) NSString *loggingContext;
@property (nonatomic) _Bool previewingFor3DTouch;
@property (nonatomic) _Bool importingSharedShortcut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)presentationControllerShouldDismiss:(id)arg1;
- (void)updateView;
- (void)didFinish;
- (void)logEvent:(id)arg1 withObjects:(id)arg2;
- (void)didTapCancel;
- (void)trackAddEvent;
- (void)updateBarButtonItems;
- (void)shortcutViewController:(id)arg1 didFinishWithName:(id)arg2;
- (void)shortcutViewControllerDidCancel:(id)arg1;
- (void)importQuestionViewControllerDidSelectCancel:(id)arg1;
- (void)importQuestionViewControllerDidSelectBack:(id)arg1;
- (void)importQuestionViewControllerDidSelectNext:(id)arg1;
- (void)importQuestionViewControllerDidSelectSkip:(id)arg1;
- (id)initWithGalleryWorkflow:(id)arg1 loggingContext:(id)arg2;
- (id)initWithSharedShortcut:(id)arg1 loggingContext:(id)arg2;
- (id)initWithWorkflowRecord:(id)arg1 loggingContext:(id)arg2 skipServicesConfirmation:(_Bool)arg3;
- (void)loadWorkflowIfNeeded;
- (void)didTapShare;
- (id)localizedStopSharingString;
- (void)didTapManageSharing;
- (void)unshareSharedShortcut;
- (void)showNextImportQuestion;
- (void)showNextImportQuestionAnimated:(_Bool)arg1 backButtonHidden:(_Bool)arg2;
- (int)eventSourceForShortcut;

@end

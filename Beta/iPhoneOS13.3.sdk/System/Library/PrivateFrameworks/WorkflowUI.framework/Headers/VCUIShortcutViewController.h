/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSString, OBTrayButton, OBWelcomeController, UIBarButtonItem, UINavigationController, UITableView, UIView, WFDatabase, WFWorkflow, WFWorkflowIcon, WFWorkflowViewController;

@protocol VCUIShortcutViewControllerDelegate;

@interface VCUIShortcutViewController : UIViewController

{
    _Bool _hasAppeared;
    id <VCUIShortcutViewControllerDelegate> _delegate;
    OBWelcomeController *_welcomeController;
    UINavigationController *_navigationController;
    UIBarButtonItem *_rightBarButtonItem;
    WFWorkflow *_workflow;
    NSString *_shortcutName;
    NSString *_shortcutDescription;
    WFWorkflowIcon *_shortcutIcon;
    unsigned long long _mode;
    NSLayoutConstraint *_tableViewHeightConstraint;
    UITableView *_tableView;
    NSLayoutConstraint *_customViewContainerHeightConstraint;
    UIView *_customViewContainer;
    UIView *_customView;
    OBTrayButton *_primaryButton;
    OBTrayButton *_secondaryButton;
    WFDatabase *_database;
    WFWorkflowViewController *_inlineWorkflowViewController;
}

@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) NSLayoutConstraint *tableViewHeightConstraint;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) NSLayoutConstraint *customViewContainerHeightConstraint;
@property (nonatomic, readonly) UIView *customViewContainer;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) OBTrayButton *primaryButton;
@property (retain, nonatomic) OBTrayButton *secondaryButton;
@property (nonatomic, readonly) WFDatabase *database;
@property (retain, nonatomic) WFWorkflowViewController *inlineWorkflowViewController;
@property (nonatomic) _Bool hasAppeared;
@property (weak, nonatomic) id <VCUIShortcutViewControllerDelegate> delegate;
@property (nonatomic, readonly) OBWelcomeController *welcomeController;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (copy, nonatomic) NSString *shortcutName;
@property (copy, nonatomic) NSString *shortcutDescription;
@property (copy, nonatomic) WFWorkflowIcon *shortcutIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_preventsAppearanceProxyCustomization;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)title;
- (id)subtitle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)applicationBundleIdentifier;
- (id)captionText;
- (void)keyboardWillChange:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (id)secondaryButtonTitle;
- (id)primaryButtonTitle;
- (id)headerImage;
- (int)eventSource;
- (id)nameCell;
- (void)workflowViewController:(id)arg1 didChangeContentSize:(struct CGSize)arg2;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 mode:(unsigned long long)arg3;
- (unsigned long long)currentPreviewMode;
- (void)updateCustomView;
- (void)setCustomView:(id)arg1 withHeight:(double)arg2;
- (id)shortcutPreviewImage;
- (id)shortcutPreview;
- (id)primaryButtonTintColor;
- (id)createdSecondaryButton;
- (id)secondaryButtonTintColor;
- (id)nameSectionTitle;
- (_Bool)shouldShowActionCell;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;
- (void)didTapCancel;
- (void)updatePrimaryButton;
- (void)trackAddEvent;
- (_Bool)isUpdatingExistingShortcut;

@end

/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNActionsView, CNContact, CNContactActionsController, CNUIContactsEnvironment, CNUIUserActionListDataSource, NSArray, NSDictionary, NSString, UIView;

@protocol CNContactInlineActionsViewControllerDelegate, CNCustomPresentation, CNSchedulerProvider, CNUIObjectViewControllerDelegate;

@interface CNContactInlineActionsViewController : UIViewController <Swift>

{
    _Bool _displaysUnavailableActionTypes;
    _Bool _displaysTitles;
    id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
    CNContact *_contact;
    NSArray *_supportedActionTypes;
    double _actionTypesInterspace;
    long long _viewStyle;
    id <CNContactInlineActionsViewControllerDelegate> _delegate;
    NSArray *_actionItems;
    CNActionsView *_actionsView;
    NSArray *_tokens;
    NSDictionary *_defaultActionPerType;
    id <CNCustomPresentation> _actionsControllerPresentation;
    id <CNSchedulerProvider> _schedulerProvider;
    CNContactActionsController *_actionsController;
    CNUIContactsEnvironment *_environment;
    CNUIUserActionListDataSource *_actionListDataSource;
}

@property (copy, nonatomic) NSArray *actionItems;
@property (weak, nonatomic) CNActionsView *actionsView;
@property (copy, nonatomic) NSArray *tokens;
@property (copy, nonatomic) NSDictionary *defaultActionPerType;
@property (retain, nonatomic) id <CNCustomPresentation> actionsControllerPresentation;
@property (retain, nonatomic) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) double throttleDelay;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) CNUIContactsEnvironment *environment;
@property (retain, nonatomic) CNUIUserActionListDataSource *actionListDataSource;
@property (nonatomic) _Bool displaysUnavailableActionTypes;
@property (nonatomic) _Bool displaysTitles;
@property (retain, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSArray *supportedActionTypes;
@property (nonatomic) double actionTypesInterspace;
@property (nonatomic) long long viewStyle;
@property (weak, nonatomic) id <CNContactInlineActionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;
@property (weak, nonatomic) id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

+ (id)descriptorForRequiredKeys;

- (void)dealloc;
- (void)reset;
- (void)performAction:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (id)allModelsObservable;
- (void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(_Bool)arg3;
- (id)initWithActionListDataSource:(id)arg1 environment:(id)arg2;
- (void)updateDesiredTitleFontSizeIfNeeded;
- (void)displayAllSupportedTypesDisabled;
- (void)checkinLaunchTasksForUndiscoverableActionsForContact:(id)arg1;
- (void)removeVisibleActionItems:(id)arg1;
- (void)displayAdditionalActionItems:(id)arg1;
- (void)updateVisibleActionItems:(id)arg1;
- (void)discoverAvailableActionTypes;
- (void)processModels:(id)arg1;
- (void)displayActionForType:(id)arg1 withDefaultAction:(id)arg2 enabled:(_Bool)arg3;
- (void)removeActionForType:(id)arg1;
- (id)makeActionItemForType:(id)arg1;
- (void)updateActionItem:(id)arg1 withDefaultAction:(id)arg2;
- (id)existingActionItemForType:(id)arg1;
- (void)showDisambiguationFromSourceView:(id)arg1 actionType:(id)arg2;

@end

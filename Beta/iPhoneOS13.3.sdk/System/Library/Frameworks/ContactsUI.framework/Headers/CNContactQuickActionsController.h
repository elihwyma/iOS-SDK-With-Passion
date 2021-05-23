/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNContactActionsController, CNContactQuickActionsDisambiguationMenuPresentation, NSArray, NSDictionary, NSString, UIViewController;

@protocol CNCancelable, CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate, CNSchedulerProvider, CNUINavigationListStyle, CNUIUserActionContext, CNUIUserActionListDataSource;

@interface CNContactQuickActionsController : NSObject

{
    id <CNContactQuickActionViewContainer> _contactQuickActionViewContainer;
    id <CNContactQuickActionsControllerDelegate> _delegate;
    NSArray *_actionTypes;
    CNContact *_contact;
    id <CNUIUserActionListDataSource> _userActionListDataSource;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNCancelable> _actionDisoveryToken;
    NSDictionary *_actionListModelsByActionType;
    id <CNUIUserActionContext> _userActionContext;
    CNContactActionsController *_disambiguationMenuController;
    UIViewController *_disambiguationMenuViewController;
    CNContactQuickActionsDisambiguationMenuPresentation *_disambiguationMenuPresentation;
    id <CNUINavigationListStyle> _navigationListStyle;
}

@property (nonatomic, readonly) id <CNUIUserActionListDataSource> userActionListDataSource;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (retain, nonatomic) id <CNCancelable> actionDisoveryToken;
@property (retain, nonatomic) NSDictionary *actionListModelsByActionType;
@property (nonatomic, readonly) id <CNUIUserActionContext> userActionContext;
@property (retain, nonatomic) CNContactActionsController *disambiguationMenuController;
@property (retain, nonatomic) UIViewController *disambiguationMenuViewController;
@property (nonatomic, readonly) CNContactQuickActionsDisambiguationMenuPresentation *disambiguationMenuPresentation;
@property (retain, nonatomic) id <CNUINavigationListStyle> navigationListStyle;
@property (weak, nonatomic, readonly) id <CNContactQuickActionViewContainer> contactQuickActionViewContainer;
@property (weak, nonatomic) id <CNContactQuickActionsControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *actionTypes;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)descriptorForRequiredKeys;

- (id)init;
- (void)dealloc;
- (void)performAction:(id)arg1;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2;
- (id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2 disambiguationMenuPresentation:(id)arg3;
- (id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2 disambiguationMenuPresentation:(id)arg3 userActionListDataSource:(id)arg4 schedulerProvider:(id)arg5 userActionContext:(id)arg6;
- (void)cleanUpAfterLatestActionDiscovery;
- (void)discoverActions;
- (id)allModelsObservable;
- (void)processDiscoveredModels:(id)arg1;
- (void)storeDiscoveredModels:(id)arg1;
- (void)reportStoredModelsToQuickActionContainer;
- (void)reportStoredModel:(id)arg1 forActionType:(id)arg2 toQuickActionContainer:(id)arg3;
- (id)defaultTitleForActionType:(id)arg1;
- (void)executeTapBehaviorForActionType:(id)arg1;
- (void)executeLongPressBehaviorForActionType:(id)arg1;
- (void)showDisambiguationMenuForActionType:(id)arg1;
- (void)setupDisambiguationMenuForActionType:(id)arg1;
- (void)tearDownDisambiguationMenu;
- (void)disambiguationViewControllerDismissedExternally:(id)arg1;

@end

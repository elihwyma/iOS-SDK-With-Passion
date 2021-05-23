/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, UIViewController;

@protocol CNContactActionsControllerDelegate, CNUINavigationListStyle, CNUIUserActionListDataSource;

@interface CNContactActionsController : NSObject

{
    NSArray *_actionTypes;
    id <CNUIUserActionListDataSource> _actionsDataSource;
    NSDictionary *_modelsByActionTypes;
    NSArray *_modelCancelables;
    UIViewController *_viewController;
    id <CNContactActionsControllerDelegate> _delegate;
    id <CNUINavigationListStyle> _navigationListStyle;
    long long _actionsOrder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool actionsReversed;
@property (copy, nonatomic) NSArray *actionTypes;
@property (retain, nonatomic) id <CNUIUserActionListDataSource> actionsDataSource;
@property (copy, nonatomic) NSDictionary *modelsByActionTypes;
@property (retain, nonatomic) NSArray *modelCancelables;
@property (retain, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id <CNContactActionsControllerDelegate> delegate;
@property (weak, nonatomic) id <CNUINavigationListStyle> navigationListStyle;
@property (nonatomic) long long actionsOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)supportedActionTypes;

- (void)dealloc;
- (void)styleUpdated;
- (void)navigationListController:(id)arg1 didSelectItem:(id)arg2;
- (id)initWithContact:(id)arg1 actionTypes:(id)arg2;
- (id)initWithDataSource:(id)arg1 actionTypes:(id)arg2;
- (id)displayedController;
- (void)retrieveModels;
- (void)cancelModels;
- (id)modelForActionType:(id)arg1;
- (id)imageForActionType:(id)arg1;
- (id)navigationListItemForUserActionType:(id)arg1;
- (void)prepareNavigationListItems;

@end

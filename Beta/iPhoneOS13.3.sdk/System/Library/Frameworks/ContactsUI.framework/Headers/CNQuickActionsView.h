/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, CNContactActionsController, CNQuickAction, CNQuickActionsManager, NSArray, NSDictionary, NSString, UIAlertController, UICollectionView, UICollectionViewFlowLayout;

@protocol CNQuickActionsViewDelegate;

@interface CNQuickActionsView : UIView <Swift>

{
    _Bool _sortsWithDuet;
    _Bool _useDuetIfAvailable;
    _Bool _showTitles;
    _Bool _showBackgroundPlatters;
    CNContact *_contact;
    NSArray *_categories;
    NSDictionary *_titleTextAttributes;
    id <CNQuickActionsViewDelegate> _delegate;
    NSArray *_actions;
    UICollectionViewFlowLayout *_collectionLayout;
    UICollectionView *_collectionView;
    UIAlertController *_alertController;
    CNContactActionsController *_actionsController;
    CNQuickAction *_performingAction;
    CNQuickActionsManager *_actionsManager;
    struct CGSize _cachedContentSize;
}

@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct CGSize cachedContentSize;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) CNQuickAction *performingAction;
@property (retain, nonatomic) CNQuickActionsManager *actionsManager;
@property (nonatomic, readonly) double maximumWidth;
@property (retain, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSArray *categories;
@property (nonatomic) _Bool sortsWithDuet;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) double interspace;
@property (nonatomic) _Bool useDuetIfAvailable;
@property (nonatomic) _Bool showTitles;
@property (nonatomic) _Bool showBackgroundPlatters;
@property (weak, nonatomic) id <CNQuickActionsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)descriptorForRequiredKeys;
+ (id)defaultCategories;
+ (_Bool)hasActionsForContact:(id)arg1;
+ (id)actionsManagerForContact:(id)arg1;

- (void)performAction:(id)arg1;
- (void)updateContentSize;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadData;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithContact:(id)arg1;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (_Bool)quickActionButton:(id)arg1 performAction:(id)arg2;
- (void)actionsManager:(id)arg1 actionDidPerform:(id)arg2;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
- (void)_updateActions;
- (double)_widthForButtonCount:(long long)arg1 itemSize:(struct CGSize *)arg2;
- (void)showDisambiguationControllerWithDataSource:(id)arg1 actionType:(id)arg2 onController:(id)arg3 sourceView:(id)arg4;

@end

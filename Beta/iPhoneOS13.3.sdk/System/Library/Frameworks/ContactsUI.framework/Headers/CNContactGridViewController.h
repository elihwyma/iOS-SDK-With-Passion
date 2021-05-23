/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UICollectionViewController.h>

@class CNContactFormatter, CNContactGridViewLayout, NSArray, NSDictionary, NSIndexPath, NSMutableDictionary, NSObject, NSString, UIColor;

@protocol CNContactDataSource, CNContactGridViewControllerDelegate, CNKeyDescriptor;

@interface CNContactGridViewController : UICollectionViewController

{
    _Bool _inlineActionsEnabled;
    id <CNContactGridViewControllerDelegate> _delegate;
    NSObject<CNContactDataSource> *_dataSource;
    CNContactFormatter *_contactFormatter;
    NSArray *_inlineActionsCategories;
    long long _numberOfColumns;
    long long _monogrammerStyle;
    UIColor *_backgroundColor;
    NSDictionary *_nameTextAttributes;
    CNContactGridViewLayout *_gridLayout;
    NSMutableDictionary *_preloadedActionsManagers;
    struct CGSize _avatarSize;
    struct UIEdgeInsets _avatarMargins;
}

@property (retain) CNContactGridViewLayout *gridLayout;
@property (copy) NSIndexPath *indexPathOfContactWithExpandedInlineActions;
@property (retain, nonatomic) NSMutableDictionary *preloadedActionsManagers;
@property (weak, nonatomic) id <CNContactGridViewControllerDelegate> delegate;
@property (retain, nonatomic) NSObject<CNContactDataSource> *dataSource;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (nonatomic) _Bool inlineActionsEnabled;
@property (copy, nonatomic) NSArray *inlineActionsCategories;
@property (nonatomic) long long indexOfContactWithExpandedInlineActions;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) struct CGSize avatarSize;
@property (nonatomic) struct UIEdgeInsets avatarMargins;
@property (nonatomic) long long monogrammerStyle;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSDictionary *nameTextAttributes;
@property (nonatomic, readonly) id <CNKeyDescriptor> descriptorForRequiredKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)contactDataSourceDidChange:(id)arg1;
- (id)_contactAtIndexPath:(id)arg1;
- (void)actionsView:(id)arg1 willShowActions:(id)arg2;
- (void)actionsView:(id)arg1 didPerformAction:(id)arg2;
- (id)viewControllerForActionsView:(id)arg1;
- (void)_updateItemSize;
- (void)_configureCell:(id)arg1;
- (long long)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(long long)arg1;
- (void)setIndexPathOfContactWithExpandedInlineActions:(id)arg1 animated:(_Bool)arg2;
- (void)setIndexOfContactWithExpandedInlineActions:(long long)arg1 animated:(_Bool)arg2;
- (void)preloadInlineActionsForContactsAtIndexes:(id)arg1;

@end

/*
 Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UIKit/UIViewController.h>

@class CNContactStore, CNContactViewController, NSArray, NSString;

@protocol ABPersonViewControllerDelegate;

@interface ABPersonViewController : UIViewController

{
    _Bool _allowsEditing;
    _Bool _allowsActions;
    _Bool _shouldShowLinkedPeople;
    _Bool _highlightedImportant;
    int _style;
    int _highlightedProperty;
    int _highlightedMultiValueIdentifier;
    const void *_addressBook;
    const void *_displayedPerson;
    id <ABPersonViewControllerDelegate> _personViewDelegate;
    NSArray *_displayedProperties;
    CNContactViewController *_cnContactViewController;
}

@property (nonatomic) int style;
@property (nonatomic) int highlightedProperty;
@property (nonatomic) int highlightedMultiValueIdentifier;
@property (nonatomic) _Bool highlightedImportant;
@property (retain, nonatomic) CNContactViewController *cnContactViewController;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic) id <ABPersonViewControllerDelegate> personViewDelegate;
@property (nonatomic) const void *addressBook;
@property (nonatomic) const void *displayedPerson;
@property (copy, nonatomic) NSArray *displayedProperties;
@property (nonatomic) _Bool allowsEditing;
@property (nonatomic) _Bool allowsActions;
@property (nonatomic) _Bool shouldShowLinkedPeople;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (id)initWithStyle:(int)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithAddressBook:(void *)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3 style:(int)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3;
- (void)reloadContactViewController;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(_Bool)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3 important:(_Bool)arg4;

@end

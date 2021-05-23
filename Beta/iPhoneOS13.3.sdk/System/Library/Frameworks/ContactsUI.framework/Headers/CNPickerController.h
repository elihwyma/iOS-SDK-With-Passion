/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSIndexPath, NSString, UISearchController, UITextField;

@protocol CNPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNPickerController : UITableViewController

{
    _Bool _allowsDiscoveredItems;
    _Bool _searchIncludesSupplementalItems;
    _Bool _allowsCustomItems;
    _Bool _searchControllerActive;
    id _selectedItem;
    id <CNPickerControllerDelegate> _delegate;
    NSArray *_discoveredItems;
    NSArray *_promotedItems;
    NSArray *_builtinItems;
    NSArray *_supplementalItems;
    NSArray *_promotedSupplementalItems;
    NSArray *_remainderSupplementalItems;
    NSArray *_customItems;
    NSString *_itemLocalizationKey;
    CDUnknownBlockType _itemLocalizationBlock;
    NSIndexPath *_selectedIndexPath;
    long long _discoveredItemsSection;
    long long _promotedItemsSection;
    long long _builtinItemsSection;
    long long _customItemsSection;
    NSString *_customEditingItem;
    UITextField *_customTextField;
    NSArray *_filterTokens;
    UISearchController *_searchController;
    NSArray *_filteredDiscoveredItems;
    NSArray *_filteredPromotedItems;
    NSArray *_filteredBuiltinItems;
    NSArray *_filteredCustomItems;
}

@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (nonatomic) long long discoveredItemsSection;
@property (nonatomic) long long promotedItemsSection;
@property (nonatomic) long long builtinItemsSection;
@property (nonatomic) long long customItemsSection;
@property (retain, nonatomic) NSString *customEditingItem;
@property (retain, nonatomic) UITextField *customTextField;
@property (retain, nonatomic) NSArray *filterTokens;
@property (retain, nonatomic) UISearchController *searchController;
@property (copy, nonatomic) NSArray *filteredDiscoveredItems;
@property (copy, nonatomic) NSArray *filteredPromotedItems;
@property (copy, nonatomic) NSArray *filteredBuiltinItems;
@property (copy, nonatomic) NSArray *filteredCustomItems;
@property (nonatomic, getter=isSearchControllerActive) _Bool searchControllerActive;
@property (retain, nonatomic) id selectedItem;
@property (weak, nonatomic) id <CNPickerControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *discoveredItems;
@property (nonatomic) _Bool allowsDiscoveredItems;
@property (copy, nonatomic) NSArray *promotedItems;
@property (copy, nonatomic) NSArray *builtinItems;
@property (copy, nonatomic) NSArray *supplementalItems;
@property (copy, nonatomic) NSArray *promotedSupplementalItems;
@property (copy, nonatomic) NSArray *remainderSupplementalItems;
@property (nonatomic) _Bool searchIncludesSupplementalItems;
@property (copy, nonatomic) NSArray *customItems;
@property (nonatomic) _Bool allowsCustomItems;
@property (copy, nonatomic) NSString *itemLocalizationKey;
@property (copy, nonatomic) CDUnknownBlockType itemLocalizationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)donePicker:(id)arg1;
- (void)cancelPicker:(id)arg1;
- (void)picker:(id)arg1 didDeleteItem:(id)arg2;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (id)titleForPickerItem:(id)arg1;
- (id)titleForAddCustomItem;
- (void)removeCustomItem:(id)arg1;
- (void)pickedItem:(id)arg1;
- (id)_titleForPickerItem:(id)arg1;
- (id)titleForSupplementalItems;
- (void)doneInlineEditing:(id)arg1;
- (void)presentExtendedPicker;
- (void)customLabelUpdated:(id)arg1;
- (_Bool)isAddCustomItemIndexPath:(id)arg1;
- (_Bool)isSupplementalDisclosureItemIndexPath:(id)arg1;
- (void)_updateRightButtonItem;
- (_Bool)isSearching;
- (unsigned long long)_indexForCustomItemAtIndexPath:(id)arg1;
- (id)_itemAtIndexPath:(id)arg1 isPlaceholder:(_Bool *)arg2;

@end

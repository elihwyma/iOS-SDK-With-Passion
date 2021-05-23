/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSDate, NSDictionary, NSIndexPath, NSMutableArray, NSString, RUIBarButtonItem, RUIFooterElement, RUIHeaderElement, RUIObjectModel, RUIPage, RUISubHeaderElement, RUITableViewRow, UIDatePicker, UIPickerView, UITableView, UIView, _UIBackdropView;

@protocol RUIHeader;

@interface RUITableView

{
    NSMutableArray *_sections;
    UITableView *_tableView;
    _Bool _showSelectPicker;
    UIDatePicker *_datePicker;
    _Bool _showDatePicker;
    _UIBackdropView *_pickerBackdrop;
    NSIndexPath *_pickerRowIndexPath;
    NSIndexPath *_embeddedPickerRowIndexPath;
    RUITableViewRow *_defaultFirstResponderRow;
    _Bool _registeredForNotifications;
    float _lastLayoutWidth;
    float _fullscreenCellHeight;
    _Bool _showingPickerNavBarButtons;
    RUIBarButtonItem *_oldLeftBarButtonItemForPicker;
    RUIBarButtonItem *_oldRightBarButtonItemForPicker;
    NSDate *_oldPickerDate;
    UIView<RUIHeader> *_headerView;
    RUIObjectModel *_objectModel;
    RUIPage *_page;
    RUIHeaderElement *_header;
    RUISubHeaderElement *_subHeader;
    RUIFooterElement *_footer;
    NSString *_headerTitle;
    UIPickerView *_selectPicker;
}

@property (retain, nonatomic) UIPickerView *selectPicker;
@property (nonatomic, readonly, getter=isShowingPicker) _Bool showingPicker;
@property (nonatomic, readonly) NSMutableArray *sections;
@property (retain, nonatomic) RUITableViewRow *defaultFirstResponderRow;
@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) RUIPage *page;
@property (nonatomic, readonly) UIView<RUIHeader> *headerView;
@property (retain, nonatomic) RUIHeaderElement *header;
@property (retain, nonatomic) RUISubHeaderElement *subHeader;
@property (retain, nonatomic) RUIFooterElement *footer;
@property (retain, nonatomic) NSString *headerTitle;
@property (nonatomic, readonly) NSDictionary *headerViewAttributes;
@property (retain, nonatomic) NSDictionary *footerViewAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_enableTestMode;

- (void)dealloc;
- (void)setAttributes:(id)arg1;
- (void)setImage:(id)arg1;
- (id)view;
- (id)titleLabel;
- (id)tableView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)sourceURL;
- (void)setSelectedRadioGroupRow:(id)arg1;
- (id)indexPathForRow:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (id)staticValues;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (void)populatePostbackDictionary:(id)arg1;
- (void)viewDidLayout;
- (void)insertRow:(id)arg1 atIndexPath:(id)arg2;
- (void)removeRowAtIndexPath:(id)arg1;
- (id)subElementWithID:(id)arg1;
- (id)subElementsWithName:(id)arg1;
- (id)rowWithIdentifier:(id)arg1;
- (id)objectModelRowForIndexPath:(id)arg1;
- (_Bool)webViewOM:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)performAction:(int)arg1 forElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_textChanged:(id)arg1;
- (void)automaticKeyboardDidShow:(id)arg1;
- (void)automaticKeyboardDidHide:(id)arg1;
- (void)_registerForNotifications:(_Bool)arg1;
- (id)_objectModelIndexPathForIndexPath:(id)arg1;
- (void)_loadHeaderView;
- (struct CGSize)_tableHeaderSizeForHeader:(id)arg1;
- (void)activateRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_setBottomInset:(float)arg1;
- (void)_clearPickers;
- (void)_datePickerRevert;
- (void)hidePickerViewAnimated:(_Bool)arg1;
- (void)datePickerCancel:(id)arg1;
- (void)datePickerDone:(id)arg1;
- (void)_hideDatePickerNavBarButtonsIfNeeded;
- (struct CGRect)_selectPickerFrame;
- (void)_showDatePickerNavBarButtonsIfNeededForRow:(id)arg1;
- (void)showPickerViewForRow:(id)arg1 animated:(_Bool)arg2;
- (void)rowDidChange:(id)arg1 action:(int)arg2;
- (void)_enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_becomeFirstResponderAtIndexPath:(id)arg1;
- (id)sourceURLForRUITableViewRow;
- (void)rowDidEndEditing:(id)arg1;
- (void)rowIsFirstResponder:(id)arg1;
- (id)textFieldRow:(id)arg1 changeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (Class)tableCellClassForTableViewRow:(id)arg1;
- (void)reloadHeadersAndFootersForSection:(id)arg1;
- (void)setHeaderViewAttributes:(id)arg1;
- (void)textFieldStartedEditing:(id)arg1;

@end

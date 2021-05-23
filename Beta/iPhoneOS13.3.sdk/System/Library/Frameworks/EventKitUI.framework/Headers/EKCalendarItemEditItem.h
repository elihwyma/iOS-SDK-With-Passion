/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKCalendarItem, EKEventStore, NSString, UIResponder, UIViewController;

@protocol EKCalendarItemEditItemDelegate, EKEditItemViewControllerProtocol, EKStyleProvider;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditItem : NSObject

{
    EKEventStore *_store;
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;
    EKCalendarItem *_calendarItem;
    id <EKCalendarItemEditItemDelegate> _delegate;
    id <EKStyleProvider> _styleProvider;
    UIResponder *_selectedResponder;
}

@property (weak, nonatomic) id <EKCalendarItemEditItemDelegate> delegate;
@property (retain, nonatomic) id <EKStyleProvider> styleProvider;
@property (retain, nonatomic) UIResponder *selectedResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)applicationDidResume;
- (id)headerTitle;
- (id)footerTitle;
- (id)footerView;
- (id)calendarItem;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)notifySubitemDidSave:(unsigned long long)arg1;
- (void)notifyDidStartEditing;
- (void)notifyDidEndEditing;
- (void)notifyTextChanged;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (void)editItemViewControllerWantsKeyboardPinned:(_Bool)arg1;
- (_Bool)isInline;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (_Bool)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (_Bool)requiresReconfigurationOnSave;
- (_Bool)forceRefreshInviteesItemOnSave;
- (_Bool)forceRefreshLocationItemOnSave;
- (void)endInlineEditing;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)editor:(id)arg1 didDeselectSubitem:(unsigned long long)arg2;
- (_Bool)forceTableReloadOnSave;
- (double)footerHeightForWidth:(double)arg1;
- (id)injectableViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)_showViewController:(id)arg1 editor:(id)arg2 animated:(_Bool)arg3;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (void)prepareForReload;
- (void)editor:(id)arg1 requestsInjectableViewControllerToBeShownForSubitem:(unsigned long long)arg2;
- (void)editorDidScroll:(id)arg1;
- (void)notifyRequiresHeightChange;
- (_Bool)shouldPinKeyboard;
- (id)viewForActionSheet;
- (id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)arg1;
- (void)tableViewDidScroll;

@end

/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventEditItem.h>

@class EKEvent, EKUITableViewCell, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentsEditItem : EKEventEditItem

{
    NSArray *_cellControllers;
    EKUITableViewCell *_addAttachmentCell;
    _Bool _attachmentsModified;
    EKEvent *_eventToModify;
}

@property (retain) EKEvent *eventToModify;
@property _Bool attachmentsModified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (id)footerTitle;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (_Bool)forceTableReloadOnSave;
- (id)owningEventForAttachmentEditViewController:(id)arg1;
- (void)attachmentEditViewController:(id)arg1 attachmentDidChange:(long long)arg2;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (void)prepareForReload;
- (id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)arg1;
- (_Bool)_shouldCondenseIntoSingleItem;
- (id)attachmentEvent;
- (void)_cleanUpCellControllers;
- (_Bool)_shouldShowAddAttachmentCell;
- (id)_addAttachmentCell;
- (void)_showAddAttachmentViewController;
- (void)_addAttachment:(id)arg1;
- (void)_loadAndAddDataAttachmentFromItem:(id)arg1;

@end

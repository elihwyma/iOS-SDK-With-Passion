/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventEditItem.h>

@class EKEventNotesInlineEditItem, EKEventURLInlineEditItem, NSString;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem

{
    EKEventURLInlineEditItem *_urlEditItem;
    EKEventNotesInlineEditItem *_notesEditItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)setSelectedResponder:(id)arg1;
- (_Bool)isSaveable;
- (id)searchStringForEventAutocomplete;
- (_Bool)isInline;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)tableViewDidScroll;
- (void)_contentSizeCategoryChanged;

@end

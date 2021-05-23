/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventEditItem.h>

@class CalendarNotesCell, NSString;

__attribute__((visibility("hidden")))
@interface EKEventNotesInlineEditItem : EKEventEditItem

{
    CalendarNotesCell *_cell;
    NSString *_lastTextChange;
    struct CGRect _keyboardRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)isSaveable;
- (id)searchStringForEventAutocomplete;
- (_Bool)isInline;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)tableViewDidScroll;
- (_Bool)textViewShouldReturn:(id)arg1;

@end

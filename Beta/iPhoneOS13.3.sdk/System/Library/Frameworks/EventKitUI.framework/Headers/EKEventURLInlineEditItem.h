/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventEditItem.h>

@class NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventURLInlineEditItem : EKEventEditItem

{
    UITableViewCell *_cell;
    _Bool _tokenized;
    _Bool _hasChanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldStartEditing:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)isSaveable;
- (id)searchStringForEventAutocomplete;
- (_Bool)isInline;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)_setTokenized:(_Bool)arg1;

@end

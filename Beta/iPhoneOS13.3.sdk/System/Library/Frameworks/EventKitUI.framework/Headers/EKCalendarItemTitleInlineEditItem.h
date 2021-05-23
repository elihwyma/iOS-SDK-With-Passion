/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarItemEditItem.h>

@class NSString, UITableViewCell, UITextField;

__attribute__((visibility("hidden")))
@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem

{
    UITableViewCell *_titleCell;
    _Bool _drawsOwnRowSeparators;
}

@property (nonatomic) _Bool drawsOwnRowSeparators;
@property (nonatomic, readonly) UITextField *titleTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)_makeCell:(unsigned long long)arg1;
- (void)_setDrawsOwnRowSeparatorsForCell:(id)arg1;
- (_Bool)isSaveable;
- (id)searchStringForEventAutocomplete;
- (_Bool)isInline;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;

@end

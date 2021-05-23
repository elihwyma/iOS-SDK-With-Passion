/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, PSTextEditingCell, UITableView, UITextField;

@interface PSTextEditingPane

{
    UITableView *_table;
    PSTextEditingCell *_cell;
    UITextField *_textField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)setPreferenceValue:(id)arg1;
- (id)preferenceValue;

@end

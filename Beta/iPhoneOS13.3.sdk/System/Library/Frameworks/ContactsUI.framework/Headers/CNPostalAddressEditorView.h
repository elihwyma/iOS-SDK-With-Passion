/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIControl.h>

@class CNMutablePostalAddress, CNPostalAddress, CNPostalAddressEditorTableView, CNPostalAddressFormattingSpecification, NSArray, NSDictionary, NSMutableDictionary, NSString, UIColor;

@protocol CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNPostalAddressEditorView : UIControl

{
    CNMutablePostalAddress *_address;
    NSDictionary *_valueTextAttributes;
    id <CNPresenterDelegate> _delegate;
    CNPostalAddressEditorTableView *_tableView;
    NSArray *_cellsLayout;
    CNPostalAddressFormattingSpecification *_formatSpecification;
    NSMutableDictionary *_textFields;
}

@property (retain, nonatomic) CNPostalAddressEditorTableView *tableView;
@property (copy, nonatomic) NSArray *cellsLayout;
@property (retain, nonatomic) CNPostalAddressFormattingSpecification *formatSpecification;
@property (nonatomic, readonly) NSMutableDictionary *textFields;
@property (copy, nonatomic) CNPostalAddress *address;
@property (copy, nonatomic) UIColor *separatorColor;
@property (nonatomic, readonly) long long lineCount;
@property (weak, nonatomic) id <CNPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *ab_text;
@property (copy, nonatomic) NSDictionary *ab_textAttributes;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isFirstResponder;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)_countryCode;
- (void)textFieldChanged:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2;
- (void)countryPickerDidCancel:(id)arg1;
- (void)_invalidateCellsLayout;
- (void)_setAddressValue:(id)arg1 forKey:(id)arg2;
- (id)_addressValueForKey:(id)arg1;
- (id)_normalizeCountryCodeToISO:(id)arg1;
- (id)_cellsLayoutForCountryCode:(id)arg1;
- (id)keyboardSettingsForAddress:(id)arg1 component:(id)arg2;

@end

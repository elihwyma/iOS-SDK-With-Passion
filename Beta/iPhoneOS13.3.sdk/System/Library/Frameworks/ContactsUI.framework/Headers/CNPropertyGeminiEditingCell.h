/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleCell.h>

@class CNGeminiPickerController, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyGeminiEditingCell : CNPropertySimpleCell

{
    CNGeminiPickerController *_geminiPicker;
}

@property (retain, nonatomic) CNGeminiPickerController *geminiPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)wantsChevron;
+ (_Bool)wantsHorizontalLayout;

- (_Bool)shouldIndentWhileEditing;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)variableConstraints;
- (double)minCellHeight;
- (_Bool)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)geminiDataSourceDidUpdate:(id)arg1;
- (id)geminiItem;

@end

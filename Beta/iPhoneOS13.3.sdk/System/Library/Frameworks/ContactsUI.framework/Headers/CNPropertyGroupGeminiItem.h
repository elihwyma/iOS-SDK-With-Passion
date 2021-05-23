/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNGeminiResult, CNMutableContact, NSString;

@protocol CNUIGeminiDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupGeminiItem : CNPropertyGroupItem

{
    CNGeminiResult *_geminiResult;
    id <CNUIGeminiDataSourceDelegate> _geminiUpdateDelegate;
    CNMutableContact *_editingContact;
}

@property (retain, nonatomic) CNMutableContact *editingContact;
@property (retain, nonatomic) CNGeminiResult *geminiResult;
@property (weak, nonatomic) id <CNUIGeminiDataSourceDelegate> geminiUpdateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)displayValue;
- (id)displayLabel;
- (void)geminiDataSourceDidUpdate:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
- (_Bool)canRemove;
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;
- (void)updateLabeledValueWithValue:(id)arg1;

@end

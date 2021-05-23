/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleEditingCell.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNPropertyPhoneNumberEditingCell : CNPropertySimpleEditingCell

{
    NSArray *_previousValue;
}

@property (retain, nonatomic) NSArray *previousValue;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;

@end

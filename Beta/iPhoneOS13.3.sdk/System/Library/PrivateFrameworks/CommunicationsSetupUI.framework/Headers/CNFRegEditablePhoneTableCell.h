/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegEditableTableCell.h>

@class NSString;

@interface CNFRegEditablePhoneTableCell : CNFRegEditableTableCell

{
    SEL _countryCodeSelector;
    NSString *_previousValue;
}

- (void)dealloc;
- (id)countryCode;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;

@end

/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleTransportCell.h>

__attribute__((visibility("hidden")))
@interface CNPropertyEmailAddressCell : CNPropertySimpleTransportCell

{
    _Bool _VIP;
}

@property (nonatomic, getter=isVIP) _Bool VIP;

- (_Bool)shouldPerformDefaultAction;
- (_Bool)shouldShowStar;
- (void)updateTransportButtons;
- (void)updateValueWithPropertyItem:(id)arg1;

@end

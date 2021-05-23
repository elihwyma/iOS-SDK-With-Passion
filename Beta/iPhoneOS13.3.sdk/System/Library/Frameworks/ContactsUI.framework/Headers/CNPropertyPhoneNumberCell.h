/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface CNPropertyPhoneNumberCell : CNPropertySimpleTransportCell

{
    _Bool _emergencyPhoneNumber;
    UIImageView *_emergencyImageView;
}

@property (retain, nonatomic) UIImageView *emergencyImageView;
@property (nonatomic, getter=isEmergencyPhoneNumber) _Bool emergencyPhoneNumber;

- (void)copy:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setProperty:(id)arg1;
- (_Bool)shouldPerformDefaultAction;
- (void)updateTransportButtons;
- (_Bool)shouldShowEmergencyBadge;
- (void)updateEmergencyBadge;
- (void)buildEmergencyImageView;

@end

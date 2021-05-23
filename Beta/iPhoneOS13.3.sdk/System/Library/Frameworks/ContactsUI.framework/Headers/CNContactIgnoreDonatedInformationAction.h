/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

@class CNDonationStore, CNUIExternalComponentsFactory;

__attribute__((visibility("hidden")))
@interface CNContactIgnoreDonatedInformationAction : CNContactAction

{
    CNUIExternalComponentsFactory *_componentsFactory;
    CNDonationStore *_donationStore;
}

@property (nonatomic, readonly) CNUIExternalComponentsFactory *componentsFactory;
@property (nonatomic, readonly) CNDonationStore *donationStore;

- (id)initWithContact:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (id)initWithContact:(id)arg1 donationStore:(id)arg2 componentsFactory:(id)arg3;
- (_Bool)rejectAllDonations;
- (void)showRejectionFailureAlert;

@end

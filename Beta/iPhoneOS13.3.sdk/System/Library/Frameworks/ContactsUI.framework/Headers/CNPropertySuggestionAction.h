/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyAction.h>

@class CNContactSuggestionViewController;

__attribute__((visibility("hidden")))
@interface CNPropertySuggestionAction : CNPropertyAction

{
    long long _selectedChoice;
    CNContactSuggestionViewController *_suggestionViewController;
}

@property (retain, nonatomic) CNContactSuggestionViewController *suggestionViewController;
@property (nonatomic) long long selectedChoice;

- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (_Bool)_confirmOrReject:(_Bool)arg1;
- (id)dataSourceWithPropertyItem:(id)arg1;
- (_Bool)_confirmOrRejectSuggestion:(_Bool)arg1;
- (_Bool)_confirmOrRejectDonation:(_Bool)arg1;
- (void)confirm;
- (void)reject;

@end

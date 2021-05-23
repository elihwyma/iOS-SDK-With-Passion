/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

@class NSArray;

@protocol CNContactGroupPickerDelegate;

__attribute__((visibility("hidden")))
@interface CNContactAddNewFieldAction : CNContactAction

{
    NSArray *_prohibitedPropertyKeys;
    id <CNContactGroupPickerDelegate> _groupPickerDelegate;
}

@property (retain, nonatomic) NSArray *prohibitedPropertyKeys;
@property (weak, nonatomic) id <CNContactGroupPickerDelegate> groupPickerDelegate;

- (void)performActionWithSender:(id)arg1;

@end

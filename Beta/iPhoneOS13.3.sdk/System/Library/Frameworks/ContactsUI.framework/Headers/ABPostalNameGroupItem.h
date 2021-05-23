/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNCardGroupItem.h>

@class CNMutableContact, NSString;

__attribute__((visibility("hidden")))
@interface ABPostalNameGroupItem : CNCardGroupItem

{
    CNMutableContact *_contact;
    SEL _setter;
    NSString *_value;
    NSString *_property;
    NSString *_placeholder;
}

@property (retain, nonatomic) CNMutableContact *contact;
@property (nonatomic) SEL setter;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *property;
@property (copy, nonatomic) NSString *placeholder;

@end

/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Contacts/CNContactFormatter.h>

@interface CNContactFormatter (UIAdditions)

+ (id)sharedFullNameFormatterWithFallBacks;
+ (id)sharedFullNameFormatter;

@end

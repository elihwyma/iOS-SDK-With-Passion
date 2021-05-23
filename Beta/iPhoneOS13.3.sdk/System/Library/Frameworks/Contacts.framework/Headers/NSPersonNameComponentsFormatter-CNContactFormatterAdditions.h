/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSPersonNameComponentsFormatter.h>

@interface NSPersonNameComponentsFormatter (CNContactFormatterAdditions)

+ (id)formatterWithCNContactStyle:(long long)arg1;
+ (long long)contactsNameOrderFromFoundationNameOrder:(long long)arg1;
+ (id)localizedStringFromContact:(id)arg1 contactStyle:(long long)arg2 options:(unsigned long long)arg3;

- (id)stringFromContact:(id)arg1;

@end

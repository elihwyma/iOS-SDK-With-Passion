/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Contacts/CNContact.h>

@interface CNContact (EmailContactAdditions)

+ (id)em_contactWithPersonNameComponents:(id)arg1 emailAddress:(id)arg2;
+ (id)em_contactFromEmailAddress:(id)arg1;
+ (id)em_contactWithPersonNameComponents:(id)arg1 emailAddress:(id)arg2 allowInvalidEmailAddress:(_Bool)arg3;

@end

/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNContactVerifier : NSObject

+ (_Bool)isValidContact:(id)arg1 error:(id *)arg2;
+ (_Bool)arePropertiesOfContact:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id *)arg3;

@end

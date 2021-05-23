/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@interface CNContactVCardSerialization : NSObject

+ (id)descriptorForRequiredKeys;
+ (id)contactsWithData:(id)arg1 error:(id *)arg2;
+ (id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)contactsWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)dataWithContacts:(id)arg1 error:(id *)arg2;
+ (id)descriptorForRequiredKeysWithOptions:(id)arg1 description:(id)arg2;
+ (id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id *)arg3 environment:(id)arg4;
+ (void)contactsWithData:(id)arg1 scheduler:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)dataWithContacts:(id)arg1 options:(id)arg2 scheduler:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)summaryOfVCard:(id)arg1 error:(id *)arg2;
+ (id)summaryOfLocationVCard:(id)arg1 error:(id *)arg2;
+ (id)descriptorForRequiredKeysWithOptions:(id)arg1;
+ (void)contactsWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)dataWithContacts:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)contactsWithMECARDString:(id)arg1 error:(id *)arg2;

@end

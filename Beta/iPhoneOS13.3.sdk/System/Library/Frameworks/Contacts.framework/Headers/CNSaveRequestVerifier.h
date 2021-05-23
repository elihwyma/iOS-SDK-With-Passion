/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNSaveRequestVerifier : NSObject

+ (id)insertedAndUpdatedContactsForSaveRequest:(id)arg1;
+ (_Bool)_areDirectPropertiesOfSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id *)arg3;
+ (_Bool)_arePropertiesOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id *)arg4;
+ (_Bool)_isEditingOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id *)arg4;
+ (_Bool)isValidSaveRequest:(id)arg1 error:(id *)arg2;
+ (_Bool)isSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id *)arg3;

@end

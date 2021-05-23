/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@protocol CTXPCServicePhonebookInterface

- (unsigned short)selectPhonebook:forPhonebookName:withPassword:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)savePhonebookEntry:atIndex:withContactName:contactNumber:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPhonebook:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPhonebookEntryWithCompletion:atIndex:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPhonebookEntryCountWithCompletion:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPhoneNumberWithCompletion:completion: /* Error: Ran out of types for this method. */;

@end

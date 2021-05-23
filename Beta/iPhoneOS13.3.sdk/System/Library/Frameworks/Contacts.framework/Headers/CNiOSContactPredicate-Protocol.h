/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/Swift-Protocol.h>

@protocol CNiOSContactPredicate <Swift>

- (unsigned short)cn_copyPeopleInAddressBook:fetchRequest:matchInfos:environment:error: /* Error: Ran out of types for this method. */;
- (unsigned short)cn_supportsNativeSorting;
- (unsigned short)cn_supportsNativeBatchFetch;
- (unsigned short)cn_supportsEncodedFetching;
- (unsigned short)cn_cursorForEncodedPeopleFromAddressBook:fetchRequest:environment:error: /* Error: Ran out of types for this method. */;

@end

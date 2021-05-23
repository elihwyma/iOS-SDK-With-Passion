/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNHandleStringsContactPredicate.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABHandleStringsContactPredicate : CNHandleStringsContactPredicate <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)peopleForPredicate:(id)arg1 sortOrder:(unsigned int)arg2 addressBook:(void *)arg3;

- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;
- (_Bool)cn_supportsNativeSorting;
- (_Bool)cn_supportsNativeBatchFetch;
- (_Bool)cn_supportsEncodedFetching;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;
- (id)handlesPredicateWithMap:(id)arg1;

@end

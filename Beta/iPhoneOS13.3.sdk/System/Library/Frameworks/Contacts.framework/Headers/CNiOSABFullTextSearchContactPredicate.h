/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNFullTextSearchContactPredicate.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABFullTextSearchContactPredicate : CNFullTextSearchContactPredicate <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;
- (_Bool)cn_supportsNativeSorting;
- (_Bool)cn_supportsNativeBatchFetch;
- (_Bool)cn_supportsEncodedFetching;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;
- (id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;
- (id)_predicatesWithAddressBook:(void *)arg1 environment:(id)arg2;
- (id)cn_fetchPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 progressiveResults:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 environment:(id)arg5;

@end

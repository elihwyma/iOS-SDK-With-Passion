/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABStringMatchContactPredicate : CNPredicate <Swift>

{
    NSString *_searchString;
    NSString *_accountIdentifier;
    NSString *_containerIdentifier;
    NSString *_groupIdentifier;
}

@property (copy, nonatomic, readonly) NSString *searchString;
@property (copy, nonatomic, readonly) NSString *accountIdentifier;
@property (copy, nonatomic, readonly) NSString *containerIdentifier;
@property (copy, nonatomic, readonly) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;
- (_Bool)cn_supportsNativeSorting;
- (_Bool)cn_supportsNativeBatchFetch;
- (_Bool)cn_supportsEncodedFetching;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;
- (id)initWithSearchString:(id)arg1 accountIdentifier:(id)arg2 containerIdentifier:(id)arg3 groupIdentifier:(id)arg4;

@end

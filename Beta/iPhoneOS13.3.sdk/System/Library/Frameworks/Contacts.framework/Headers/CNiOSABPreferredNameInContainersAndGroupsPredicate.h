/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

#import <Contacts/Swift-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABPreferredNameInContainersAndGroupsPredicate : CNPredicate <Swift>

{
    NSArray *_containerIdentifiers;
    NSArray *_groupIdentifiers;
}

@property (copy, nonatomic, readonly) NSArray *containerIdentifiers;
@property (copy, nonatomic, readonly) NSArray *groupIdentifiers;
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
- (id)initWithContainerIdentifiers:(id)arg1 groupIdentifiers:(id)arg2;

@end

/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABPreferredChannelContactPredicate : CNPredicate <Swift>

{
    _Bool _limitOne;
    NSString *_preferredChannel;
}

@property (copy, nonatomic) NSString *preferredChannel;
@property (nonatomic) _Bool limitOne;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDebugDescription;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;
- (_Bool)cn_supportsNativeSorting;
- (_Bool)cn_supportsNativeBatchFetch;
- (_Bool)cn_supportsEncodedFetching;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;
- (id)initWithPreferredChannel:(id)arg1 limitOne:(_Bool)arg2;

@end

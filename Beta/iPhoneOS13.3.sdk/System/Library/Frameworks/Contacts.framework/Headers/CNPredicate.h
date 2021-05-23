/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSPredicate.h>

#import <Contacts/Swift-Protocol.h>

@class NSArray, NSString;

@interface CNPredicate : NSPredicate <Swift>

{
    NSPredicate *_cn_predicate;
    _Bool _augmentMainStoreResults;
    NSArray *_mainStoreContactIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *mainStoreContactIdentifiers;
@property (nonatomic) _Bool augmentMainStoreResults;

+ (id)os_log;
+ (id)_convertSuggestions:(id)arg1 withSortOrder:(long long)arg2 mutableObjects:(_Bool)arg3;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (_Bool)evaluateWithObject:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)shortDebugDescription;
- (void)_convertContactMatches:(id)arg1 withService:(id)arg2 intoSuggestions:(id)arg3;
- (id)suggestedContactsWithSortOrder:(long long)arg1 keysToFetch:(id)arg2 mutableObjects:(_Bool)arg3 service:(id)arg4 error:(id *)arg5;
- (void)mainStoreDidFetchContacts:(id)arg1 unifiedFetch:(_Bool)arg2;
- (id)cn_predicate;
- (CDUnknownBlockType)cn_resultTransformWithMatchInfos:(id)arg1;
- (id)contactsFromDonationStore:(id)arg1;

@end

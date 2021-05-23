/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNFetchRequest.h>

#import <Contacts/Swift-Protocol.h>

@class NSArray, NSPredicate;

@interface CNContactFetchRequest : CNFetchRequest <Swift>

{
    _Bool _rankSort;
    _Bool _mutableObjects;
    _Bool _unifyResults;
    _Bool _disallowsEncodedFetch;
    _Bool _onlyMainStore;
    _Bool _allowsBatching;
    _Bool _shouldFailIfAccountNotYetSynced;
    NSPredicate *_predicate;
    NSArray *_keysToFetch;
    long long _sortOrder;
    unsigned long long _batchSize;
}

@property (nonatomic) _Bool disallowsEncodedFetch;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) _Bool rankSort;
@property (nonatomic) _Bool onlyMainStore;
@property (nonatomic) _Bool allowsBatching;
@property (nonatomic) _Bool shouldFailIfAccountNotYetSynced;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *keysToFetch;
@property (nonatomic) _Bool mutableObjects;
@property (nonatomic) _Bool unifyResults;
@property (nonatomic) long long sortOrder;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeysToFetch:(id)arg1;
- (id)effectivePredicate;
- (id)effectiveKeysToFetch;
- (_Bool)requiresMeContactAuthorization;

@end

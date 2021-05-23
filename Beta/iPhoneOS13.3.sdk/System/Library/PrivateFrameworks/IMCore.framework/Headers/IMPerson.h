/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class CNContact, NSArray, NSData, NSString;

@interface IMPerson : NSObject

{
    _Bool _registered;
    int _recordID;
    CNContact *_cnContact;
}

@property (nonatomic, readonly) int _recordID;
@property (nonatomic, readonly) _Bool _registered;
@property (retain, nonatomic) CNContact *cnContact;
@property (nonatomic, readonly) void *_recordRef;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) int recordID;
@property (copy, nonatomic, readonly) NSString *cnContactID;
@property (nonatomic, readonly) _Bool isInAddressBook;
@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *abbreviatedName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic, readonly) _Bool isCompany;
@property (nonatomic, readonly) NSString *companyName;
@property (copy, nonatomic) NSArray *emails;
@property (nonatomic, readonly) NSArray *allEmails;
@property (retain, nonatomic) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSArray *mobileNumbers;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic, readonly) NSData *imageDataWithoutLoading;
@property (nonatomic, readonly) unsigned long long status;

+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3 orNumber:(id)arg4;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 countryCode:(id)arg6 identifier:(int *)arg7;
+ (id)existingABPersonWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(_Bool)arg3;
+ (id)existingABPeopleWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(_Bool)arg3;
+ (void)_setCachedQueriesEnabled:(_Bool)arg1;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3;
+ (id)_cachedRecordResultForQuery:(id)arg1 addressBook:(void *)arg2;
+ (_Bool)shouldPurgeCacheForIMPerson:(id)arg1;
+ (void)_setCachedRecordResult:(int)arg1 identifier:(int)arg2 forQuery:(id)arg3 addressBook:(void *)arg4;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 identifier:(int *)arg6;
+ (id)allPeople;
+ (id)existingABPersonWithFirstName:(id)arg1 lastName:(id)arg2;
+ (id)existingABPersonForPerson:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)save;
- (id)initWithContact:(id)arg1;
- (id)cnContactWithKeys:(id)arg1;
- (id)idsAddresses;
- (id)valuesForIMProperty:(id)arg1;
- (id)initWithABRecordID:(int)arg1;
- (void)appendID:(id)arg1 toProperty:(id)arg2;
- (void)setValues:(id)arg1 forProperty:(id)arg2;
- (void)updateCNContact:(id)arg1;
- (_Bool)isEqualToIMPerson:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (id)allHandlesForProperty:(id)arg1;
- (id)emailHandlesForService:(id)arg1 includeBaseEmail:(_Bool)arg2;
- (id)valuesForProperty:(id)arg1;
- (_Bool)containsHandle:(id)arg1 forServiceProperty:(id)arg2;
- (id)emailHandlesForService:(id)arg1;
- (void)setValues:(id)arg1 forIMProperty:(id)arg2;
- (void)_abPersonChanged:(id)arg1;

@end

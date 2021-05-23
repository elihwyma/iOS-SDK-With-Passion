/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface SAPerson : SADomainObject

@property (copy, nonatomic) NSArray *addresses;
@property (copy, nonatomic) NSDate *birthday;
@property (copy, nonatomic) NSString *company;
@property (copy, nonatomic) NSString *companyPhonetic;
@property (copy, nonatomic) NSArray *emails;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSDictionary *firstNameAPGs;
@property (copy, nonatomic) NSString *firstNamePhonetic;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *internalGUID;
@property (copy, nonatomic) NSNumber *isBlocked;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSDictionary *lastNameAPGs;
@property (copy, nonatomic) NSString *lastNamePhonetic;
@property (copy, nonatomic) NSNumber *me;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSDictionary *nickNameAPGs;
@property (copy, nonatomic) NSString *phonemeData;
@property (copy, nonatomic) NSArray *phones;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSNumber *pseudo;
@property (copy, nonatomic) NSArray *relatedNames;
@property (copy, nonatomic) NSArray *socialProfiles;
@property (copy, nonatomic) NSString *suffix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)person;
+ (id)personWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end

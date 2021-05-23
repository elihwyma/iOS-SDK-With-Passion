/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class NSPersonNameComponents, NSString;

@interface CLSPerson : CLSObject

{
    _Bool _progressTrackingAllowed;
    _Bool _federatedAccount;
    _Bool _isEditable;
    _Bool _isSearchable;
    NSString *_appleID;
    NSString *_givenName;
    NSString *_middleName;
    NSString *_familyName;
    NSString *_phoneticGivenName;
    NSString *_phoneticMiddleName;
    NSString *_phoneticFamilyName;
    NSString *_iCloudUserID;
    NSString *_orgID;
    long long _passcodeType;
    NSString *_emailAddress;
    NSString *_grade;
    long long _sourceType;
    NSString *_searchText;
}

@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *iCloudUserID;
@property (copy, nonatomic) NSString *orgID;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *phoneticMiddleName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (nonatomic) long long passcodeType;
@property (nonatomic, getter=isProgressTrackingAllowed) _Bool progressTrackingAllowed;
@property (nonatomic, getter=isFederatedAccount) _Bool federatedAccount;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *grade;
@property (nonatomic) long long sourceType;
@property (nonatomic, getter=isEditable) _Bool isEditable;
@property (nonatomic, getter=isSearchable) _Bool isSearchable;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) NSString *groupIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)stringForRole:(unsigned long long)arg1;
+ (unsigned long long)roleFromString:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;

@end

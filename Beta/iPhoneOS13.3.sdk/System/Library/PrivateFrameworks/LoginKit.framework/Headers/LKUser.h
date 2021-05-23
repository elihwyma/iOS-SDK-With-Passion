/*
 Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

#import <UMMutableUser.h>

@class CNContact, NSDate, NSMutableDictionary, NSString, NSURL;

@interface LKUser : UMMutableUser

{
    _Bool _isPhoneticInfoProvidedInConfiguration;
    _Bool _isAttemptedPhoneticTranscription;
    unsigned long long _passwordType;
    NSURL *_mediumImageURL;
    NSURL *_largeImageURL;
    NSString *_identifier;
    NSString *_phoneticGivenName;
    NSString *_phoneticFamilyName;
    NSDate *_lastOnlineAuth;
    NSURL *_localMediumImageURL;
    NSURL *_localLargeImageURL;
    long long _retryCount;
    CNContact *_contact;
    NSMutableDictionary *_namingSimilarityInfoByClassID;
    NSString *_tokenizedPhoneticDisplayName;
}

@property (retain, nonatomic) NSDate *lastOnlineAuth;
@property (nonatomic) unsigned long long passwordType;
@property (retain, nonatomic) NSURL *mediumImageURL;
@property (retain, nonatomic) NSURL *largeImageURL;
@property (retain, nonatomic) NSURL *localMediumImageURL;
@property (retain, nonatomic) NSURL *localLargeImageURL;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSMutableDictionary *namingSimilarityInfoByClassID;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *phoneticGivenName;
@property (retain, nonatomic) NSString *phoneticFamilyName;
@property (nonatomic) _Bool isPhoneticInfoProvidedInConfiguration;
@property (retain, nonatomic) NSString *tokenizedPhoneticDisplayName;
@property (nonatomic) _Bool isAttemptedPhoneticTranscription;

+ (_Bool)supportsSecureCoding;
+ (id)userFromUMUser:(id)arg1;
+ (unsigned long long)UMUserPasscodeTypeFromLKPasswordType:(unsigned long long)arg1;
+ (unsigned long long)LKPasswordTypeFromUMUserPasscodeType:(unsigned long long)arg1;
+ (id)fullNameWithFamilyName:(id)arg1 givenName:(id)arg2;
+ (unsigned long long)passwordTypeFromPasswordTypeString:(id)arg1;
+ (void)setAutogeneratesPhoneticNameWithLocale:(id)arg1;
+ (id)userFromDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLKUser:(id)arg1;
- (void)setDiffUMUserPropertiesFromUMUser:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSDate, NSString, PKVirtualCardCredentials;

@interface PKVirtualCard : NSObject <Swift>

{
    _Bool _supportsLocalStorage;
    _Bool _requiresAuthentication;
    NSString *_identifier;
    NSString *_cardholderName;
    long long _state;
    long long _type;
    NSString *_FPANSuffix;
    NSString *_expiration;
    NSDate *_lastUpdatedDate;
    NSData *_encryptedData;
    NSData *_ephemeralPublicKey;
    NSString *_displayName;
    NSDate *_lastAutoFilledBySafari;
    PKVirtualCardCredentials *_keychainCardCredentials;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *cardholderName;
@property (nonatomic) long long state;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *FPANSuffix;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSData *encryptedData;
@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDate *lastAutoFilledBySafari;
@property (nonatomic) _Bool supportsLocalStorage;
@property (nonatomic) _Bool requiresAuthentication;
@property (copy, nonatomic) PKVirtualCardCredentials *keychainCardCredentials;

+ (_Bool)supportsSecureCoding;
+ (void)queryKeychainForVirtualCards:(CDUnknownBlockType)arg1;
+ (void)deleteAllLocalKeychainVirtualCards;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)mergeVirtualCardWith:(id)arg1;
- (id)generateHashWithPrimaryAccountNumber:(id)arg1 expirationDate:(id)arg2;
- (_Bool)hasSensitiveCredentials;
- (void)writeKeychainVirtualCardToKeychain;
- (id)keychainVirtualCard;
- (id)initWithKeychainData:(id)arg1;
- (_Bool)isValidFromKeychain;
- (void)deleteLocalKeychainVirtualCard;
- (id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (_Bool)isEqualToSafariEntryWithPrimaryAccountNumber:(id)arg1 expirationDate:(id)arg2;
- (void)setLastAutoFilledBySafariWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteKeychainVirtualCard;

@end

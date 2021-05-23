/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecordID, CKUserIdentityLookupInfo, NSArray, NSData, NSPersonNameComponents, NSString;

@interface CKUserIdentity : NSObject

{
    _Bool _hasiCloudAccount;
    _Bool _isCached;
    CKUserIdentityLookupInfo *_lookupInfo;
    NSPersonNameComponents *_nameComponents;
    CKRecordID *_userRecordID;
    NSArray *_contactIdentifiers;
    NSData *_publicSharingKey;
    unsigned long long _publicKeyVersion;
    NSData *_outOfNetworkPrivateKey;
    NSData *_encryptedPersonalInfo;
    NSString *_firstName;
    NSString *_lastName;
}

@property (copy, nonatomic) CKUserIdentityLookupInfo *lookupInfo;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) CKRecordID *userRecordID;
@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (nonatomic) _Bool hasiCloudAccount;
@property (nonatomic) _Bool isCached;
@property (retain, nonatomic) NSData *publicSharingKey;
@property (nonatomic) unsigned long long publicKeyVersion;
@property (retain, nonatomic) NSData *outOfNetworkPrivateKey;
@property (retain, nonatomic) NSData *encryptedPersonalInfo;
@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *lastName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithUserRecordID:(id)arg1;
- (_Bool)isEquivalentToUserIdentity:(id)arg1;
- (_Bool)isOutOfNetwork;
- (_Bool)isEquivalentToUserIdentityOrPublicKey:(id)arg1;

@end

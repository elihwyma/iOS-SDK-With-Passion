/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

#import <Accounts/Swift-Protocol.h>

@class ACAccount, NSDate, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface ACAccountCredential : NSObject <Swift>

{
    NSMutableDictionary *_credentialItems;
    NSString *_credentialType;
    NSMutableSet *_dirtyProperties;
    ACAccount *_owningAccount;
    _Bool _requiresTouchID;
    _Bool _dirty;
    _Bool _empty;
}

@property (nonatomic) _Bool requiresTouchID;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *oauthTokenSecret;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *credentialType;
@property (nonatomic, readonly) NSSet *dirtyProperties;
@property (nonatomic, getter=isDirty) _Bool dirty;
@property (nonatomic, getter=isEmpty) _Bool empty;
@property (copy, nonatomic) NSString *oauthTokenNoSync;
@property (copy, nonatomic) NSString *oauthRefreshToken;
@property (retain, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSString *findMyiPhoneToken;
@property (copy, nonatomic) NSString *mapsToken;
@property (copy, nonatomic) NSString *mdmServerToken;
@property (copy, nonatomic) NSString *hsaToken;
@property (copy, nonatomic) NSDate *tokenExpiryDate;
@property (copy, nonatomic) NSString *oauthToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
+ (id)credentialWithPassword:(id)arg1;
+ (id)allSupportedKeys;
+ (id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (id)credentialPolicyForAccountTypeIdentifier:(id)arg1 key:(id)arg2 clientID:(id)arg3;
+ (id)additionalServiceSegmentForAccountTypeIdentifier:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_clearDirtyProperties;
- (void)_setOwningAccount:(id)arg1;
- (id)_initWithProtobuf:(id)arg1;
- (id)_encodeProtobuf;
- (void)_markPropertyDirty:(id)arg1;
- (id)_initWithProtobufData:(id)arg1;
- (id)_encodeProtobufData;
- (id)credentialItems;
- (id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
- (id)initWithPassword:(id)arg1;
- (id)credentialItemForKey:(id)arg1;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3;
- (id)keysForCredentialItems;

@end

/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface CRKPrivateIdentity : NSObject

{
    NSData *_identityPersistentId;
    NSData *_stagedIdentityPersistentId;
    NSString *_commonNamePrefix;
    NSDate *_identityExpirationDate;
    NSDate *_stagedIdentityExpirationDate;
}

@property (retain, nonatomic) NSDate *identityExpirationDate;
@property (retain, nonatomic) NSData *identityPersistentId;
@property (retain, nonatomic) NSDate *stagedIdentityExpirationDate;
@property (retain, nonatomic) NSData *stagedIdentityPersistentId;
@property (copy, nonatomic) NSString *commonNamePrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)recordType;
+ (id)instanceWithParentObject:(id)arg1 keyValue:(id)arg2;
+ (id)skeletonInstance;
+ (id)instanceWithRecord:(id)arg1;
+ (id)commonNameWithPrefix:(id)arg1;
+ (id)makeIdentityWithCommonName:(id)arg1;
+ (id)keychainGroup;
+ (id)addIdentityToKeychainFromCertificateData:(id)arg1 privateKeyData:(id)arg2;
+ (id)freshPrivateIdentityWithCommonNamePrefix:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)recordName;
- (id)dictionaryValue;
- (void)applyFieldsToRecord:(id)arg1;
- (_Bool)isChangedFrom:(id)arg1;
- (id)initWithIdentityPersistentId:(id)arg1 stagedIdentityPersistentId:(id)arg2 commonNamePrefix:(id)arg3;
- (_Bool)refreshIdentities;

@end

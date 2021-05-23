/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString, SFAppleIDContactInfo, SFAppleIDIdentity, SFAppleIDValidationRecord;

@interface SFAppleIDAccount : NSObject

{
    NSString *_altDSID;
    NSString *_appleID;
    NSString *_certificateToken;
    NSDate *_certificateTokenCreationDate;
    SFAppleIDContactInfo *_contactInfo;
    NSDate *_creationDate;
    SFAppleIDIdentity *_identity;
    NSData *_privateKeyPersistentReference;
    SFAppleIDValidationRecord *_validationRecord;
}

@property (retain, nonatomic) NSString *altDSID;
@property (nonatomic, readonly) NSString *appleID;
@property (retain, nonatomic) NSString *certificateToken;
@property (retain, nonatomic) NSDate *certificateTokenCreationDate;
@property (retain, nonatomic) SFAppleIDContactInfo *contactInfo;
@property (nonatomic, readonly) NSDate *creationDate;
@property (retain, nonatomic) SFAppleIDIdentity *identity;
@property (retain, nonatomic) NSData *privateKeyPersistentReference;
@property (retain, nonatomic) SFAppleIDValidationRecord *validationRecord;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToAccount:(id)arg1;
- (id)initWithAppleID:(id)arg1;

@end

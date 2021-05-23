/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecordID, NSData, NSString;

@interface CKUserIdentityLookupInfo : NSObject

{
    _Bool _shouldReportMissingIdentity;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    CKRecordID *_userRecordID;
    NSData *_encryptedPersonalInfo;
}

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) CKRecordID *userRecordID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic) _Bool shouldReportMissingIdentity;
@property (retain, nonatomic) NSData *encryptedPersonalInfo;

+ (_Bool)supportsSecureCoding;
+ (id)lookupInfosWithEmails:(id)arg1;
+ (id)lookupInfosWithRecordIDs:(id)arg1;
+ (id)lookupInfosWithPhoneNumbers:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)lookupValue;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (long long)lookupField;
- (void)_stripPersonalInfo;

@end

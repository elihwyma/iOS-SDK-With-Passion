/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecordID, CNContact, NSString;

@interface CKDiscoveredUserInfo : NSObject

{
    CKRecordID *_userRecordID;
    CNContact *_displayContact;
}

@property (copy, nonatomic, readonly) CKRecordID *userRecordID;
@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *lastName;
@property (copy, nonatomic, readonly) CNContact *displayContact;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithUserRecordID:(id)arg1 displayContact:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class CKRecordID;

@interface HMBShareUserID : HMFObject

{
    CKRecordID *_userRecordID;
}

@property (readonly) CKRecordID *userRecordID;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (id)logIdentifier;
- (id)attributeDescriptions;

@end

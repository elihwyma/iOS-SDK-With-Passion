/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecordID;

@interface CKSyncEngineRecordModification : NSObject

{
    CKRecordID *_recordID;
    long long _type;
}

@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)recordModificationsWithOppositeTypeFromRecordModifications:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithRecordID:(id)arg1 type:(long long)arg2;
- (id)oppositeTypeModification;

@end

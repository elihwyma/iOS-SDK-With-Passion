/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKNotification.h>

@class CKRecordID, NSDictionary;

@interface CKQueryNotification : CKNotification

{
    long long _queryNotificationReason;
    NSDictionary *_recordFields;
    CKRecordID *_recordID;
    long long _databaseScope;
}

@property (nonatomic) long long queryNotificationReason;
@property (copy, nonatomic) NSDictionary *recordFields;
@property (copy, nonatomic) CKRecordID *recordID;
@property (nonatomic) long long databaseScope;
@property (nonatomic, readonly) _Bool isPublicDatabase;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end

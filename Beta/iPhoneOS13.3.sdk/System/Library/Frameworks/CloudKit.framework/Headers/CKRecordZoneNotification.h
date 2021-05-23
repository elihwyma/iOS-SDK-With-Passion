/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKNotification.h>

@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification

{
    CKRecordZoneID *_recordZoneID;
    long long _databaseScope;
}

@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (nonatomic) long long databaseScope;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end

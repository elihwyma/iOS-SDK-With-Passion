/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo

{
    _Bool _allowDefaultZoneSave;
    _Bool _markZonesAsUserPurged;
    _Bool _dontFetchFromServer;
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    long long _maxZoneSaveAttempts;
}

@property (retain, nonatomic) NSArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (nonatomic) _Bool allowDefaultZoneSave;
@property (nonatomic) _Bool markZonesAsUserPurged;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) _Bool dontFetchFromServer;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

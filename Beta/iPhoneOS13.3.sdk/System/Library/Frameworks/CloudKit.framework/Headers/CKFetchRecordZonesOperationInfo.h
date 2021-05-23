/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKFetchRecordZonesOperationInfo : CKDatabaseOperationInfo

{
    _Bool _isFetchAllRecordZonesOperation;
    _Bool _ignorePCSFailures;
    NSArray *_recordZoneIDs;
}

@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (nonatomic) _Bool isFetchAllRecordZonesOperation;
@property (nonatomic) _Bool ignorePCSFailures;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

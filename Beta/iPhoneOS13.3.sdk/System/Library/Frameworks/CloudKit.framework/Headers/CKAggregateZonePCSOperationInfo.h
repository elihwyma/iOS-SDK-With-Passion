/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKRecordZone, NSArray;

@interface CKAggregateZonePCSOperationInfo : CKDatabaseOperationInfo

{
    NSArray *_sourceZoneIDs;
    CKRecordZone *_targetZone;
}

@property (retain, nonatomic) NSArray *sourceZoneIDs;
@property (retain, nonatomic) CKRecordZone *targetZone;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

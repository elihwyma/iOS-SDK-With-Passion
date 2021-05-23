/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/CRKCloudOperation.h>

@class CKRecordZoneID;

@interface CRKCloudFetchZoneOperation : CRKCloudOperation

{
    CKRecordZoneID *_zoneId;
}

@property (nonatomic, readonly) CKRecordZoneID *zoneId;

- (void)main;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 zoneId:(id)arg2;
- (id)resetOperation;

@end

/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/CRKCloudOperation.h>

@class CKRecordZoneID, CKServerChangeToken;

@interface CRKCloudFetchZoneChangesOperation : CRKCloudOperation

{
    CKServerChangeToken *_serverToken;
    CKRecordZoneID *_zoneId;
}

@property (nonatomic, readonly) CKServerChangeToken *serverToken;
@property (nonatomic, readonly) CKRecordZoneID *zoneId;

- (void)main;
- (id)resetOperation;
- (id)initWithDatabase:(id)arg1 zoneId:(id)arg2 serverToken:(id)arg3;

@end

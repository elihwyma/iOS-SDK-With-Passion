/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/CRKCloudEncapsulatedOperation.h>

@class CKRecordZoneID;

@interface CRKCloudSubscribeToZoneOperation : CRKCloudEncapsulatedOperation

{
    CKRecordZoneID *_zoneId;
}

@property (nonatomic, readonly) CKRecordZoneID *zoneId;

- (void)main;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2;
- (void)retryableFetchZoneOperationDidFinish:(id)arg1;
- (void)retryableModifyRecordZonesOperationDidFinish:(id)arg1;
- (void)retryableFetchSubscriptionOperationDidFinish:(id)arg1;
- (void)subscribeToZone:(id)arg1;
- (void)retryableCreateSubscriptionOperationDidFinish:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2 zoneId:(id)arg3;

@end

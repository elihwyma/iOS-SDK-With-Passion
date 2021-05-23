/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/CRKCloudOperation.h>

@class CKRecordZone;

@interface CRKCloudFetchSubscriptionOperation : CRKCloudOperation

{
    CKRecordZone *_zone;
}

@property (nonatomic, readonly) CKRecordZone *zone;

- (void)main;
- (id)initWithDatabase:(id)arg1;
- (id)resetOperation;
- (id)initWithDatabase:(id)arg1 zone:(id)arg2;

@end
